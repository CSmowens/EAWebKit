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

#ifndef JSMediaTrackConstraintSet_h
#define JSMediaTrackConstraintSet_h

#if ENABLE(MEDIA_STREAM)

#include "JSDOMWrapper.h"
#include "MediaTrackConstraintSet.h"
#include <wtf/NeverDestroyed.h>

namespace WebCore {

class JSMediaTrackConstraintSet : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSMediaTrackConstraintSet* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaTrackConstraintSet>&& impl)
    {
        JSMediaTrackConstraintSet* ptr = new (NotNull, JSC::allocateCell<JSMediaTrackConstraintSet>(globalObject->vm().heap)) JSMediaTrackConstraintSet(structure, globalObject, WTF::move(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static JSC::JSObject* getPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static MediaTrackConstraintSet* toWrapped(JSC::JSValue);
    static void destroy(JSC::JSCell*);
    ~JSMediaTrackConstraintSet();

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    MediaTrackConstraintSet& impl() const { return *m_impl; }
    void releaseImpl() { std::exchange(m_impl, nullptr)->deref(); }

private:
    MediaTrackConstraintSet* m_impl;
protected:
    JSMediaTrackConstraintSet(JSC::Structure*, JSDOMGlobalObject*, Ref<MediaTrackConstraintSet>&&);

    void finishCreation(JSC::VM& vm)
    {
        Base::finishCreation(vm);
        ASSERT(inherits(info()));
    }

};

class JSMediaTrackConstraintSetOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, MediaTrackConstraintSet*)
{
    static NeverDestroyed<JSMediaTrackConstraintSetOwner> owner;
    return &owner.get();
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, MediaTrackConstraintSet*);
inline JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaTrackConstraintSet& impl) { return toJS(exec, globalObject, &impl); }


} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)

#endif