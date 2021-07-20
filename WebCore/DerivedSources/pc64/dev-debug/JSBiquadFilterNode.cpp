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

#include "JSBiquadFilterNode.h"

#include "AudioParam.h"
#include "BiquadFilterNode.h"
#include "ExceptionCode.h"
#include "JSAudioParam.h"
#include "JSDOMBinding.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsBiquadFilterNodePrototypeFunctionGetFrequencyResponse(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsBiquadFilterNodeType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSBiquadFilterNodeType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsBiquadFilterNodeFrequency(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsBiquadFilterNodeDetune(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsBiquadFilterNodeQ(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsBiquadFilterNodeGain(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsBiquadFilterNodeConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSBiquadFilterNodePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSBiquadFilterNodePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSBiquadFilterNodePrototype* ptr = new (NotNull, JSC::allocateCell<JSBiquadFilterNodePrototype>(vm.heap)) JSBiquadFilterNodePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSBiquadFilterNodePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSBiquadFilterNodeConstructor : public DOMConstructorObject {
private:
    JSBiquadFilterNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSBiquadFilterNodeConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSBiquadFilterNodeConstructor* ptr = new (NotNull, JSC::allocateCell<JSBiquadFilterNodeConstructor>(vm.heap)) JSBiquadFilterNodeConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table */

static const struct CompactHashIndex JSBiquadFilterNodeTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};


static const HashTableValue JSBiquadFilterNodeTableValues[] =
{
    { "type", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSBiquadFilterNodeType) },
};

static const HashTable JSBiquadFilterNodeTable = { 1, 1, true, JSBiquadFilterNodeTableValues, 0, JSBiquadFilterNodeTableIndex };
/* Hash table for constructor */

static const HashTableValue JSBiquadFilterNodeConstructorTableValues[] =
{
    { "LOWPASS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "HIGHPASS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "BANDPASS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "LOWSHELF", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "HIGHSHELF", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "PEAKING", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
    { "NOTCH", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(6), (intptr_t) (0) },
    { "ALLPASS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(7), (intptr_t) (0) },
};


COMPILE_ASSERT(0 == BiquadFilterNode::LOWPASS, BiquadFilterNodeEnumLOWPASSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == BiquadFilterNode::HIGHPASS, BiquadFilterNodeEnumHIGHPASSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == BiquadFilterNode::BANDPASS, BiquadFilterNodeEnumBANDPASSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == BiquadFilterNode::LOWSHELF, BiquadFilterNodeEnumLOWSHELFIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == BiquadFilterNode::HIGHSHELF, BiquadFilterNodeEnumHIGHSHELFIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == BiquadFilterNode::PEAKING, BiquadFilterNodeEnumPEAKINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(6 == BiquadFilterNode::NOTCH, BiquadFilterNodeEnumNOTCHIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(7 == BiquadFilterNode::ALLPASS, BiquadFilterNodeEnumALLPASSIsWrongUseDoNotCheckConstants);

const ClassInfo JSBiquadFilterNodeConstructor::s_info = { "BiquadFilterNodeConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSBiquadFilterNodeConstructor) };

JSBiquadFilterNodeConstructor::JSBiquadFilterNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSBiquadFilterNodeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSBiquadFilterNode::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("BiquadFilterNode"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSBiquadFilterNodeConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSBiquadFilterNodePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "frequency", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeFrequency), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "detune", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeDetune), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "Q", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeQ), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "gain", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeGain), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "LOWPASS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(0), (intptr_t) (0) },
    { "HIGHPASS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "BANDPASS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "LOWSHELF", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(3), (intptr_t) (0) },
    { "HIGHSHELF", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(4), (intptr_t) (0) },
    { "PEAKING", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(5), (intptr_t) (0) },
    { "NOTCH", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(6), (intptr_t) (0) },
    { "ALLPASS", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(7), (intptr_t) (0) },
    { "getFrequencyResponse", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsBiquadFilterNodePrototypeFunctionGetFrequencyResponse), (intptr_t) (3) },
};

const ClassInfo JSBiquadFilterNodePrototype::s_info = { "BiquadFilterNodePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSBiquadFilterNodePrototype) };

void JSBiquadFilterNodePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSBiquadFilterNodePrototypeTableValues, *this);
}

const ClassInfo JSBiquadFilterNode::s_info = { "BiquadFilterNode", &Base::s_info, &JSBiquadFilterNodeTable, CREATE_METHOD_TABLE(JSBiquadFilterNode) };

JSBiquadFilterNode::JSBiquadFilterNode(Structure* structure, JSDOMGlobalObject* globalObject, Ref<BiquadFilterNode>&& impl)
    : JSAudioNode(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSBiquadFilterNode::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSBiquadFilterNodePrototype::create(vm, globalObject, JSBiquadFilterNodePrototype::createStructure(vm, globalObject, JSAudioNode::getPrototype(vm, globalObject)));
}

JSObject* JSBiquadFilterNode::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBiquadFilterNode>(vm, globalObject);
}

bool JSBiquadFilterNode::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSBiquadFilterNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSBiquadFilterNode, Base>(exec, JSBiquadFilterNodeTable, thisObject, propertyName, slot);
}

EncodedJSValue jsBiquadFilterNodeType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSBiquadFilterNode*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return JSValue::encode(result);
}


EncodedJSValue jsBiquadFilterNodeFrequency(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSBiquadFilterNode* castedThis = jsDynamicCast<JSBiquadFilterNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSBiquadFilterNodePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "BiquadFilterNode", "frequency");
        return throwGetterTypeError(*exec, "BiquadFilterNode", "frequency");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.frequency()));
    return JSValue::encode(result);
}


EncodedJSValue jsBiquadFilterNodeDetune(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSBiquadFilterNode* castedThis = jsDynamicCast<JSBiquadFilterNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSBiquadFilterNodePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "BiquadFilterNode", "detune");
        return throwGetterTypeError(*exec, "BiquadFilterNode", "detune");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.detune()));
    return JSValue::encode(result);
}


EncodedJSValue jsBiquadFilterNodeQ(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSBiquadFilterNode* castedThis = jsDynamicCast<JSBiquadFilterNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSBiquadFilterNodePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "BiquadFilterNode", "Q");
        return throwGetterTypeError(*exec, "BiquadFilterNode", "Q");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.q()));
    return JSValue::encode(result);
}


EncodedJSValue jsBiquadFilterNodeGain(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSBiquadFilterNode* castedThis = jsDynamicCast<JSBiquadFilterNode*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSBiquadFilterNodePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "BiquadFilterNode", "gain");
        return throwGetterTypeError(*exec, "BiquadFilterNode", "gain");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.gain()));
    return JSValue::encode(result);
}


EncodedJSValue jsBiquadFilterNodeConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSBiquadFilterNodePrototype* domObject = jsDynamicCast<JSBiquadFilterNodePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSBiquadFilterNode::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSBiquadFilterNodeType(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSBiquadFilterNode*>(baseObject);
    UNUSED_PARAM(thisValue);
    UNUSED_PARAM(exec);
    castedThis->setType(exec, value);
}


JSValue JSBiquadFilterNode::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBiquadFilterNodeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsBiquadFilterNodePrototypeFunctionGetFrequencyResponse(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSBiquadFilterNode* castedThis = jsDynamicCast<JSBiquadFilterNode*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "BiquadFilterNode", "getFrequencyResponse");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSBiquadFilterNode::info());
    auto& impl = castedThis->impl();
    if (UNLIKELY(exec->argumentCount() < 3))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    RefPtr<Float32Array> frequencyHz = toFloat32Array(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<Float32Array> magResponse = toFloat32Array(exec->argument(1));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<Float32Array> phaseResponse = toFloat32Array(exec->argument(2));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.getFrequencyResponse(frequencyHz.get(), magResponse.get(), phaseResponse.get());
    return JSValue::encode(jsUndefined());
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7BiquadFilterNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore16BiquadFilterNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, BiquadFilterNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSBiquadFilterNode>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7BiquadFilterNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore16BiquadFilterNodeE[2];
#if COMPILER(CLANG)
    // If this fails BiquadFilterNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(BiquadFilterNode), BiquadFilterNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // BiquadFilterNode has subclasses. If BiquadFilterNode has subclasses that get passed
    // to toJS() we currently require BiquadFilterNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSBiquadFilterNode>(globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
