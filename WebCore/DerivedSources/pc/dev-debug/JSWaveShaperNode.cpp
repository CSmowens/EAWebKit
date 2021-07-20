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

#if ENABLE(WEB_AUDIO)

#include "JSWaveShaperNode.h"

#include "JSDOMBinding.h"
#include "WaveShaperNode.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsWaveShaperNodeCurve(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWaveShaperNodeCurve(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWaveShaperNodeOversample(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSWaveShaperNodeOversample(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsWaveShaperNodeConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWaveShaperNodePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWaveShaperNodePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWaveShaperNodePrototype* ptr = new (NotNull, JSC::allocateCell<JSWaveShaperNodePrototype>(vm.heap)) JSWaveShaperNodePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWaveShaperNodePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWaveShaperNodeConstructor : public DOMConstructorObject {
private:
    JSWaveShaperNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWaveShaperNodeConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWaveShaperNodeConstructor* ptr = new (NotNull, JSC::allocateCell<JSWaveShaperNodeConstructor>(vm.heap)) JSWaveShaperNodeConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSWaveShaperNodeConstructor::s_info = { "WaveShaperNodeConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWaveShaperNodeConstructor) };

JSWaveShaperNodeConstructor::JSWaveShaperNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWaveShaperNodeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWaveShaperNode::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WaveShaperNode"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSWaveShaperNodePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWaveShaperNodeConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "curve", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWaveShaperNodeCurve), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWaveShaperNodeCurve) },
    { "oversample", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWaveShaperNodeOversample), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSWaveShaperNodeOversample) },
};

const ClassInfo JSWaveShaperNodePrototype::s_info = { "WaveShaperNodePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWaveShaperNodePrototype) };

void JSWaveShaperNodePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWaveShaperNodePrototypeTableValues, *this);
}

const ClassInfo JSWaveShaperNode::s_info = { "WaveShaperNode", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWaveShaperNode) };

JSWaveShaperNode::JSWaveShaperNode(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WaveShaperNode>&& impl)
    : JSAudioNode(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSWaveShaperNode::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWaveShaperNodePrototype::create(vm, globalObject, JSWaveShaperNodePrototype::createStructure(vm, globalObject, JSAudioNode::getPrototype(vm, globalObject)));
}

JSObject* JSWaveShaperNode::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWaveShaperNode>(vm, globalObject);
}

EncodedJSValue jsWaveShaperNodeCurve(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWaveShaperNode* castedThis = jsDynamicCast<JSWaveShaperNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWaveShaperNodePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WaveShaperNode", "curve");
        return throwGetterTypeError(*exec, "WaveShaperNode", "curve");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.curve()));
    return JSValue::encode(result);
}


EncodedJSValue jsWaveShaperNodeOversample(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWaveShaperNode* castedThis = jsDynamicCast<JSWaveShaperNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWaveShaperNodePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WaveShaperNode", "oversample");
        return throwGetterTypeError(*exec, "WaveShaperNode", "oversample");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.oversample());
    return JSValue::encode(result);
}


EncodedJSValue jsWaveShaperNodeConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWaveShaperNodePrototype* domObject = jsDynamicCast<JSWaveShaperNodePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWaveShaperNode::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSWaveShaperNodeCurve(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWaveShaperNode* castedThis = jsDynamicCast<JSWaveShaperNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWaveShaperNodePrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WaveShaperNode", "curve");
        else
            throwSetterTypeError(*exec, "WaveShaperNode", "curve");
        return;
    }
    auto& impl = castedThis->impl();
    RefPtr<Float32Array> nativeValue = toFloat32Array(value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setCurve(nativeValue.get());
}


void setJSWaveShaperNodeOversample(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSWaveShaperNode* castedThis = jsDynamicCast<JSWaveShaperNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWaveShaperNodePrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "WaveShaperNode", "oversample");
        else
            throwSetterTypeError(*exec, "WaveShaperNode", "oversample");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String nativeValue = value.toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    if (nativeValue != "none" && nativeValue != "2x" && nativeValue != "4x")
        return;
    impl.setOversample(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSWaveShaperNode::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWaveShaperNodeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WaveShaperNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14WaveShaperNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, WaveShaperNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWaveShaperNode>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WaveShaperNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14WaveShaperNodeE[2];
#if COMPILER(CLANG)
    // If this fails WaveShaperNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WaveShaperNode), WaveShaperNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WaveShaperNode has subclasses. If WaveShaperNode has subclasses that get passed
    // to toJS() we currently require WaveShaperNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSWaveShaperNode>(globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
