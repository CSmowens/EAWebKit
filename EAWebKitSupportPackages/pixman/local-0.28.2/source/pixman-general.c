/*
 * Copyright © 2009 Red Hat, Inc.
 * Copyright © 2000 SuSE, Inc.
 * Copyright © 2007 Red Hat, Inc.
 * Copyright © 2000 Keith Packard, member of The XFree86 Project, Inc.
 * Copyright (C) 2014 Electronic Arts, Inc.
 *             2005 Lars Knoll & Zack Rusin, Trolltech
 *             2008 Aaron Plattner, NVIDIA Corporation
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Red Hat not be used in advertising or
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.  Red Hat makes no representations about the
 * suitability of this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING
 * OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pixman-private.h"

static pixman_bool_t
general_src_iter_init (pixman_implementation_t *imp, pixman_iter_t *iter)
{
    pixman_image_t *image = iter->image;

    if (image->type == SOLID)
	_pixman_solid_fill_iter_init (image, iter);
    else if (image->type == LINEAR)
	_pixman_linear_gradient_iter_init (image, iter);
    else if (image->type == RADIAL)
	_pixman_radial_gradient_iter_init (image, iter);
    else if (image->type == CONICAL)
	_pixman_conical_gradient_iter_init (image, iter);
    else if (image->type == BITS)
	_pixman_bits_image_src_iter_init (image, iter);
    else
	_pixman_log_error (FUNC, "Pixman bug: unknown image type\n");

    return TRUE;
}

static pixman_bool_t
general_dest_iter_init (pixman_implementation_t *imp, pixman_iter_t *iter)
{
    if (iter->image->type == BITS)
    {
	_pixman_bits_image_dest_iter_init (iter->image, iter);

	return TRUE;
    }
    else
    {
	_pixman_log_error (FUNC, "Trying to write to a non-writable image");

	return FALSE;
    }
}

typedef struct op_info_t op_info_t;
struct op_info_t
{
    uint8_t src, dst;
};

#define ITER_IGNORE_BOTH						\
    (ITER_IGNORE_ALPHA | ITER_IGNORE_RGB | ITER_LOCALIZED_ALPHA)

static const op_info_t op_flags[PIXMAN_N_OPERATORS] =
{
    /* Src                   Dst                   */
    { ITER_IGNORE_BOTH,      ITER_IGNORE_BOTH      }, /* CLEAR */
    { ITER_LOCALIZED_ALPHA,  ITER_IGNORE_BOTH      }, /* SRC */
    { ITER_IGNORE_BOTH,      ITER_LOCALIZED_ALPHA  }, /* DST */
    { 0,                     ITER_LOCALIZED_ALPHA  }, /* OVER */
    { ITER_LOCALIZED_ALPHA,  0                     }, /* OVER_REVERSE */
    { ITER_LOCALIZED_ALPHA,  ITER_IGNORE_RGB       }, /* IN */
    { ITER_IGNORE_RGB,       ITER_LOCALIZED_ALPHA  }, /* IN_REVERSE */
    { ITER_LOCALIZED_ALPHA,  ITER_IGNORE_RGB       }, /* OUT */
    { ITER_IGNORE_RGB,       ITER_LOCALIZED_ALPHA  }, /* OUT_REVERSE */
    { 0,                     0                     }, /* ATOP */
    { 0,                     0                     }, /* ATOP_REVERSE */
    { 0,                     0                     }, /* XOR */
    { ITER_LOCALIZED_ALPHA,  ITER_LOCALIZED_ALPHA  }, /* ADD */
    { 0,                     0                     }, /* SATURATE */
};

#define SCANLINE_BUFFER_LENGTH 8192

static void
general_composite_rect  (pixman_implementation_t *imp,
                         pixman_composite_info_t *info)
{
    PIXMAN_COMPOSITE_ARGS (info);
    uint64_t stack_scanline_buffer[(SCANLINE_BUFFER_LENGTH * 3 + 7) / 8];
    uint8_t *scanline_buffer = (uint8_t *) stack_scanline_buffer;
    uint8_t *src_buffer, *mask_buffer, *dest_buffer;
    pixman_iter_t src_iter, mask_iter, dest_iter;
    pixman_combine_32_func_t compose;
    pixman_bool_t component_alpha;
    iter_flags_t narrow, src_iter_flags;
    int Bpp;
    int i;

    if ((src_image->common.flags & FAST_PATH_NARROW_FORMAT)		    &&
	(!mask_image || mask_image->common.flags & FAST_PATH_NARROW_FORMAT) &&
	(dest_image->common.flags & FAST_PATH_NARROW_FORMAT))
    {
	narrow = ITER_NARROW;
	Bpp = 4;
    }
    else
    {
	narrow = 0;
	Bpp = 16;
    }

    if (width * Bpp > SCANLINE_BUFFER_LENGTH)
    {
	scanline_buffer = pixman_malloc_abc (width, 3, Bpp);

	if (!scanline_buffer)
	    return;
    }

    src_buffer = scanline_buffer;
    mask_buffer = src_buffer + width * Bpp;
    dest_buffer = mask_buffer + width * Bpp;

    if (!narrow)
    {
	/* To make sure there aren't any NANs in the buffers */
	memset (src_buffer, 0, width * Bpp);
	memset (mask_buffer, 0, width * Bpp);
	memset (dest_buffer, 0, width * Bpp);
    }
    
    /* src iter */
    src_iter_flags = narrow | op_flags[op].src;

    _pixman_implementation_src_iter_init (imp->toplevel, &src_iter, src_image,
					  src_x, src_y, width, height,
					  src_buffer, src_iter_flags, info->src_flags);

    /* mask iter */
    if ((src_iter_flags & (ITER_IGNORE_ALPHA | ITER_IGNORE_RGB)) ==
	(ITER_IGNORE_ALPHA | ITER_IGNORE_RGB))
    {
	/* If it doesn't matter what the source is, then it doesn't matter
	 * what the mask is
	 */
	mask_image = NULL;
    }

    component_alpha =
        mask_image			      &&
        mask_image->common.type == BITS       &&
        mask_image->common.component_alpha    &&
        PIXMAN_FORMAT_RGB (mask_image->bits.format);

    _pixman_implementation_src_iter_init (
	imp->toplevel, &mask_iter, mask_image, mask_x, mask_y, width, height,
	mask_buffer, narrow | (component_alpha? 0 : ITER_IGNORE_RGB), info->mask_flags);

    /* dest iter */
    _pixman_implementation_dest_iter_init (
	imp->toplevel, &dest_iter, dest_image, dest_x, dest_y, width, height,
	dest_buffer, narrow | op_flags[op].dst, info->dest_flags);

    compose = _pixman_implementation_lookup_combiner (
	imp->toplevel, op, component_alpha, narrow);

    if (!compose)
	return;

    for (i = 0; i < height; ++i)
    {
	uint32_t *s, *m, *d;

	m = mask_iter.get_scanline (&mask_iter, NULL);
	s = src_iter.get_scanline (&src_iter, m);
	d = dest_iter.get_scanline (&dest_iter, NULL);

	compose (imp->toplevel, op, d, s, m, width);

	dest_iter.write_back (&dest_iter);
    }

    if (scanline_buffer != (uint8_t *) stack_scanline_buffer)
	//+EAWebKitChange
	//01/24/14
	pixman_free (scanline_buffer);
	//-EAWebKitChange
}

static const pixman_fast_path_t general_fast_path[] =
{
    { PIXMAN_OP_any, PIXMAN_any, 0, PIXMAN_any,	0, PIXMAN_any, 0, general_composite_rect },
    { PIXMAN_OP_NONE }
};

pixman_implementation_t *
_pixman_implementation_create_general (void)
{
    pixman_implementation_t *imp = _pixman_implementation_create (NULL, general_fast_path);

    _pixman_setup_combiner_functions_32 (imp);
    _pixman_setup_combiner_functions_float (imp);

    imp->src_iter_init = general_src_iter_init;
    imp->dest_iter_init = general_dest_iter_init;

    return imp;
}

