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

#include "JSAudioProcessingEvent.h"

#include "AudioBuffer.h"
#include "AudioProcessingEvent.h"
#include "JSAudioBuffer.h"
#include "JSDOMBinding.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsAudioProcessingEventPlaybackTime(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsAudioProcessingEventInputBuffer(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsAudioProcessingEventOutputBuffer(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsAudioProcessingEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSAudioProcessingEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSAudioProcessingEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioProcessingEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioProcessingEventPrototype>(vm.heap)) JSAudioProcessingEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSAudioProcessingEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSAudioProcessingEventConstructor : public DOMConstructorObject {
private:
    JSAudioProcessingEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioProcessingEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioProcessingEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSAudioProcessingEventConstructor>(vm.heap)) JSAudioProcessingEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSAudioProcessingEventConstructor::s_info = { "AudioProcessingEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSAudioProcessingEventConstructor) };

JSAudioProcessingEventConstructor::JSAudioProcessingEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAudioProcessingEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSAudioProcessingEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("AudioProcessingEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSAudioProcessingEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioProcessingEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "playbackTime", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioProcessingEventPlaybackTime), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "inputBuffer", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioProcessingEventInputBuffer), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "outputBuffer", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioProcessingEventOutputBuffer), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSAudioProcessingEventPrototype::s_info = { "AudioProcessingEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSAudioProcessingEventPrototype) };

void JSAudioProcessingEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSAudioProcessingEventPrototypeTableValues, *this);
}

const ClassInfo JSAudioProcessingEvent::s_info = { "AudioProcessingEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSAudioProcessingEvent) };

JSAudioProcessingEvent::JSAudioProcessingEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<AudioProcessingEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSAudioProcessingEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSAudioProcessingEventPrototype::create(vm, globalObject, JSAudioProcessingEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSAudioProcessingEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioProcessingEvent>(vm, globalObject);
}

EncodedJSValue jsAudioProcessingEventPlaybackTime(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSAudioProcessingEvent* castedThis = jsDynamicCast<JSAudioProcessingEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSAudioProcessingEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "AudioProcessingEvent", "playbackTime");
        return throwGetterTypeError(*exec, "AudioProcessingEvent", "playbackTime");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.playbackTime());
    return JSValue::encode(result);
}


EncodedJSValue jsAudioProcessingEventInputBuffer(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSAudioProcessingEvent* castedThis = jsDynamicCast<JSAudioProcessingEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSAudioProcessingEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "AudioProcessingEvent", "inputBuffer");
        return throwGetterTypeError(*exec, "AudioProcessingEvent", "inputBuffer");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.inputBuffer()));
    return JSValue::encode(result);
}


EncodedJSValue jsAudioProcessingEventOutputBuffer(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSAudioProcessingEvent* castedThis = jsDynamicCast<JSAudioProcessingEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSAudioProcessingEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "AudioProcessingEvent", "outputBuffer");
        return throwGetterTypeError(*exec, "AudioProcessingEvent", "outputBuffer");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.outputBuffer()));
    return JSValue::encode(result);
}


EncodedJSValue jsAudioProcessingEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSAudioProcessingEventPrototype* domObject = jsDynamicCast<JSAudioProcessingEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSAudioProcessingEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSAudioProcessingEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioProcessingEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7AudioProcessingEvent@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore20AudioProcessingEventE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, AudioProcessingEvent* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSAudioProcessingEvent>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7AudioProcessingEvent@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore20AudioProcessingEventE[2];
#if COMPILER(CLANG)
    // If this fails AudioProcessingEvent does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(AudioProcessingEvent), AudioProcessingEvent_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // AudioProcessingEvent has subclasses. If AudioProcessingEvent has subclasses that get passed
    // to toJS() we currently require AudioProcessingEvent you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSAudioProcessingEvent>(globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
