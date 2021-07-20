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

#if ENABLE(ENCRYPTED_MEDIA_V2)

#include "JSMediaKeyMessageEvent.h"

#include "JSDOMBinding.h"
#include "JSDictionary.h"
#include "MediaKeyMessageEvent.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsMediaKeyMessageEventMessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaKeyMessageEventDestinationURL(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsMediaKeyMessageEventConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSMediaKeyMessageEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSMediaKeyMessageEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaKeyMessageEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyMessageEventPrototype>(vm.heap)) JSMediaKeyMessageEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaKeyMessageEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSMediaKeyMessageEventConstructor : public DOMConstructorObject {
private:
    JSMediaKeyMessageEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaKeyMessageEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaKeyMessageEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaKeyMessageEventConstructor>(vm.heap)) JSMediaKeyMessageEventConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSMediaKeyMessageEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

EncodedJSValue JSC_HOST_CALL JSMediaKeyMessageEventConstructor::constructJSMediaKeyMessageEvent(ExecState* exec)
{
    auto* jsConstructor = jsCast<JSMediaKeyMessageEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->toAtomicString(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());

    MediaKeyMessageEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillMediaKeyMessageEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<MediaKeyMessageEvent> event = MediaKeyMessageEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillMediaKeyMessageEventInit(MediaKeyMessageEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("destinationURL", eventInit.destinationURL))
        return false;
    return true;
}

const ClassInfo JSMediaKeyMessageEventConstructor::s_info = { "WebKitMediaKeyMessageEventConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaKeyMessageEventConstructor) };

JSMediaKeyMessageEventConstructor::JSMediaKeyMessageEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaKeyMessageEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaKeyMessageEvent::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebKitMediaKeyMessageEvent"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
}

ConstructType JSMediaKeyMessageEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSMediaKeyMessageEvent;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSMediaKeyMessageEventPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaKeyMessageEventConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "message", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaKeyMessageEventMessage), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "destinationURL", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaKeyMessageEventDestinationURL), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSMediaKeyMessageEventPrototype::s_info = { "WebKitMediaKeyMessageEventPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaKeyMessageEventPrototype) };

void JSMediaKeyMessageEventPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSMediaKeyMessageEventPrototypeTableValues, *this);
}

const ClassInfo JSMediaKeyMessageEvent::s_info = { "WebKitMediaKeyMessageEvent", &Base::s_info, 0, CREATE_METHOD_TABLE(JSMediaKeyMessageEvent) };

JSMediaKeyMessageEvent::JSMediaKeyMessageEvent(Structure* structure, JSDOMGlobalObject* globalObject, Ref<MediaKeyMessageEvent>&& impl)
    : JSEvent(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSMediaKeyMessageEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaKeyMessageEventPrototype::create(vm, globalObject, JSMediaKeyMessageEventPrototype::createStructure(vm, globalObject, JSEvent::getPrototype(vm, globalObject)));
}

JSObject* JSMediaKeyMessageEvent::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaKeyMessageEvent>(vm, globalObject);
}

EncodedJSValue jsMediaKeyMessageEventMessage(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaKeyMessageEvent* castedThis = jsDynamicCast<JSMediaKeyMessageEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaKeyMessageEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaKeyMessageEvent", "message");
        return throwGetterTypeError(*exec, "MediaKeyMessageEvent", "message");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.message()));
    return JSValue::encode(result);
}


EncodedJSValue jsMediaKeyMessageEventDestinationURL(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSMediaKeyMessageEvent* castedThis = jsDynamicCast<JSMediaKeyMessageEvent*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSMediaKeyMessageEventPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "MediaKeyMessageEvent", "destinationURL");
        return throwGetterTypeError(*exec, "MediaKeyMessageEvent", "destinationURL");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.destinationURL());
    return JSValue::encode(result);
}


EncodedJSValue jsMediaKeyMessageEventConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSMediaKeyMessageEventPrototype* domObject = jsDynamicCast<JSMediaKeyMessageEventPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSMediaKeyMessageEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSMediaKeyMessageEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaKeyMessageEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(ENCRYPTED_MEDIA_V2)
