/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSCanvasRenderingContext2D_h
#define JSCanvasRenderingContext2D_h

#include "CanvasRenderingContext2D.h"
#include "JSCanvasRenderingContext.h"

namespace WebCore {

class JSCanvasRenderingContext2D : public JSCanvasRenderingContext {
public:
    typedef JSCanvasRenderingContext Base;
    static JSCanvasRenderingContext2D* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<CanvasRenderingContext2D>&& impl)
    {
        JSCanvasRenderingContext2D* ptr = new (NotNull, JSC::allocateCell<JSCanvasRenderingContext2D>(globalObject->vm().heap)) JSCanvasRenderingContext2D(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue webkitLineDash(JSC::ExecState*) const;
    void setWebkitLineDash(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue strokeStyle(JSC::ExecState*) const;
    void setStrokeStyle(JSC::ExecState*, JSC::JSValue);
    JSC::JSValue fillStyle(JSC::ExecState*) const;
    void setFillStyle(JSC::ExecState*, JSC::JSValue);
    CanvasRenderingContext2D& impl() const
    {
        return static_cast<CanvasRenderingContext2D&>(Base::impl());
    }
public:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
protected:
    JSCanvasRenderingContext2D(JSC::Structure*, JSDOMGlobalObject*, Ref<CanvasRenderingContext2D>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};



} // namespace WebCore

#endif
