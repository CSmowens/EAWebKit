/////////////////////////////////////////////////////////////////////////////
// Copyright (c) Electronic Arts Inc. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#pragma once

#include <EAUser/SonyUser.h>

namespace EA
{
	namespace User
	{
		EA_DISABLE_VC_WARNING(4996);
		EA_DISABLE_CLANG_WARNING(-Wdeprecated-declarations);
		EA_DEPRECATED_MESSAGE("The user accessor classes have been deprecated in favour of accessing users directly. Please remove references to this type, either by changing to plain users or removing them entirely (if you are creating them).")
		typedef SonyUserAccessor KettleUserAccessor;
		EA_RESTORE_VC_WARNING();
		EA_RESTORE_CLANG_WARNING();

		typedef SonyUser KettleUser;
	}
}
