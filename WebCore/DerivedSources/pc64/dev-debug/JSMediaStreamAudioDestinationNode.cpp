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

#include "config.h"

#if ENABLE(MEDIA_STREAM) && ENABLE(WEB_AUDIO)

#include "JSMediaStreamAudioDestinationNode.h"

#include "JSDOMBinding.h"
#include "JSMediaStream.h"
#include "MediaStream.h"
#include "MediaStreamAudioDestinationNode.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsMediaStreamAudioDestinationNodeStream(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaStreamAudioDestinationNodeConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMediaStreamAudioDestinationNodePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMediaStreamAudioDestinationNodePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaStreamAudioDestinationNodePrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamAudioDestinationNodePrototype>(vm.heap)) JSMediaStreamAudioDestinationNodePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaStreamAudioDestinationNodePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSMediaStreamAudioDestinationNodeConstructor : public DOMConstructorObject {
private:
    JSMediaStreamAudioDestinationNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaStreamAudioDestinationNodeConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaStreamAudioDestinationNodeConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamAudioDestinationNodeConstructor>(vm.heap)) JSMediaStreamAudioDestinationNodeConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSMediaStreamAudioDestinationNodeConstructor::s_info = { "MediaStreamAudioDestinationNodeConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamAudioDestinationNodeConstructor) };

JSMediaStreamAudioDestinationNodeConstructor::JSMediaStreamAudioDestinationNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaStreamAudioDestinationNodeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaStreamAudioDestinationNode::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("MediaStreamAudioDestinationNode"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSMediaStreamAudioDestinationNodePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamAudioDestinationNodeConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "stream", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaStreamAudioDestinationNodeStream), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSMediaStreamAudioDestinationNodePrototype::s_info = { "MediaStreamAudioDestinationNodePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamAudioDestinationNodePrototype) };

void JSMediaStreamAudioDestinationNodePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMediaStreamAudioDestinationNodePrototypeTableValues, *this);
}

const ClassInfo JSMediaStreamAudioDestinationNode::s_info = { "MediaStreamAudioDestinationNode", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaStreamAudioDestinationNode) };

JSMediaStreamAudioDestinationNode::JSMediaStreamAudioDestinationNode(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaStreamAudioDestinationNode>&& impl)
    : JSAudioNode(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSMediaStreamAudioDestinationNode::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaStreamAudioDestinationNodePrototype::create(vm, globalObject, JSMediaStreamAudioDestinationNodePrototype::createStructure(vm, globalObject, JSAudioNode::getPrototype(vm, globalObject)));
}

JSObject* JSMediaStreamAudioDestinationNode::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaStreamAudioDestinationNode>(vm, globalObject);
}

EncodedJSValue jsMediaStreamAudioDestinationNodeStream(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaStreamAudioDestinationNode* castedThis = jsDynamicCast<JSMediaStreamAudioDestinationNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaStreamAudioDestinationNodePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaStreamAudioDestinationNode", "stream");
        return throwGetterTypeError(*exec, "MediaStreamAudioDestinationNode", "stream");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.stream()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaStreamAudioDestinationNodeConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSMediaStreamAudioDestinationNodePrototype* domObject = jsDynamicCast<JSMediaStreamAudioDestinationNodePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSMediaStreamAudioDestinationNode::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSMediaStreamAudioDestinationNode::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaStreamAudioDestinationNodeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7MediaStreamAudioDestinationNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore31MediaStreamAudioDestinationNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, MediaStreamAudioDestinationNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaStreamAudioDestinationNode>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7MediaStreamAudioDestinationNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore31MediaStreamAudioDestinationNodeE[2];
#if COMPILER(CLANG)
    // If this fails MediaStreamAudioDestinationNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(MediaStreamAudioDestinationNode), MediaStreamAudioDestinationNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // MediaStreamAudioDestinationNode has subclasses. If MediaStreamAudioDestinationNode has subclasses that get passed
    // to toJS() we currently require MediaStreamAudioDestinationNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSMediaStreamAudioDestinationNode>(globalObject, impl);
}


}

#endif // ENABLE(MEDIA_STREAM) && ENABLE(WEB_AUDIO)