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
#include "JSDOMURL.h"

#include "DOMURL.h"
#include "ExceptionCode.h"
#include "JSBlob.h"
#include "JSDOMBinding.h"
#include "JSDOMURL.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

#if ENABLE(MEDIA_SOURCE)
#include "DOMURLMediaSource.h"
#include "JSMediaSource.h"
#endif

#if ENABLE(MEDIA_STREAM)
#include "DOMURLMediaStream.h"
#include "JSMediaStream.h"
#endif

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDOMURLConstructorFunctionCreateObjectURL(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMURLConstructorFunctionRevokeObjectURL(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDOMURLPrototypeFunctionToString(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsDOMURLHref(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLHref(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLOrigin(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsDOMURLProtocol(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLProtocol(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLUsername(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLUsername(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLPassword(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLPassword(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLHost(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLHost(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLHostname(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLHostname(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLPort(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLPort(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLPathname(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLPathname(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLSearch(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLSearch(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLHash(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSDOMURLHash(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsDOMURLConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSDOMURLPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSDOMURLPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDOMURLPrototype* ptr = new (NotNull, JSC::allocateCell<JSDOMURLPrototype>(vm.heap)) JSDOMURLPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSDOMURLPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSDOMURLConstructor : public DOMConstructorObject {
private:
    JSDOMURLConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDOMURLConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDOMURLConstructor* ptr = new (NotNull, JSC::allocateCell<JSDOMURLConstructor>(vm.heap)) JSDOMURLConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSDOMURL(JSC::ExecState*);
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSDOMURL1(JSC::ExecState*);
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSDOMURL2(JSC::ExecState*);
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSDOMURL3(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

/* Hash table for constructor */

static const HashTableValue JSDOMURLConstructorTableValues[] =
{
    { "createObjectURL", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMURLConstructorFunctionCreateObjectURL), (intptr_t) (1) },
    { "revokeObjectURL", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMURLConstructorFunctionRevokeObjectURL), (intptr_t) (1) },
};

EncodedJSValue JSC_HOST_CALL JSDOMURLConstructor::constructJSDOMURL1(ExecState* exec)
{
    auto* castedThis = jsCast<JSDOMURLConstructor*>(exec->callee());
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String url = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<DOMURL> object = DOMURL::create(url, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSDOMURLConstructor::constructJSDOMURL2(ExecState* exec)
{
    auto* castedThis = jsCast<JSDOMURLConstructor*>(exec->callee());
    if (UNLIKELY(exec->argumentCount() < 2))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String url = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    String base = exec->argument(1).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<DOMURL> object = DOMURL::create(url, base, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSDOMURLConstructor::constructJSDOMURL3(ExecState* exec)
{
    auto* castedThis = jsCast<JSDOMURLConstructor*>(exec->callee());
    if (UNLIKELY(exec->argumentCount() < 2))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    String url = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    DOMURL* base = JSDOMURL::toWrapped(exec->argument(1));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    RefPtr<DOMURL> object = DOMURL::create(url, base, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSDOMURLConstructor::constructJSDOMURL(ExecState* exec)
{
    size_t argsCount = std::min<size_t>(2, exec->argumentCount());
    if (argsCount == 1)
        return JSDOMURLConstructor::constructJSDOMURL1(exec);
    if (argsCount == 2)
        return JSDOMURLConstructor::constructJSDOMURL2(exec);
    JSValue arg1(exec->argument(1));
    if ((argsCount == 2 && ((arg1.isObject() && asObject(arg1)->inherits(JSDOMURL::info())))))
        return JSDOMURLConstructor::constructJSDOMURL3(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

const ClassInfo JSDOMURLConstructor::s_info = { "URLConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMURLConstructor) };

JSDOMURLConstructor::JSDOMURLConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMURLConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSDOMURL::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("URL"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSDOMURLConstructorTableValues, *this);
}

ConstructType JSDOMURLConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSDOMURL;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSDOMURLPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "href", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLHref), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLHref) },
    { "origin", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLOrigin), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "protocol", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLProtocol), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLProtocol) },
    { "username", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLUsername), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLUsername) },
    { "password", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLPassword), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLPassword) },
    { "host", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLHost), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLHost) },
    { "hostname", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLHostname), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLHostname) },
    { "port", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLPort), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLPort) },
    { "pathname", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLPathname), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLPathname) },
    { "search", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLSearch), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLSearch) },
    { "hash", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMURLHash), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSDOMURLHash) },
    { "toString", DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDOMURLPrototypeFunctionToString), (intptr_t) (0) },
};

const ClassInfo JSDOMURLPrototype::s_info = { "URLPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMURLPrototype) };

void JSDOMURLPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSDOMURLPrototypeTableValues, *this);
}

const ClassInfo JSDOMURL::s_info = { "URL", &Base::s_info, 0, CREATE_METHOD_TABLE(JSDOMURL) };

JSDOMURL::JSDOMURL(Structure* structure, JSDOMGlobalObject* globalObject, Ref<DOMURL>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSDOMURL::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDOMURLPrototype::create(vm, globalObject, JSDOMURLPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSDOMURL::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMURL>(vm, globalObject);
}

void JSDOMURL::destroy(JSC::JSCell* cell)
{
    JSDOMURL* thisObject = static_cast<JSDOMURL*>(cell);
    thisObject->JSDOMURL::~JSDOMURL();
}

JSDOMURL::~JSDOMURL()
{
    releaseImpl();
}

EncodedJSValue jsDOMURLHref(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "href");
        return throwGetterTypeError(*exec, "DOMURL", "href");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.href());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLOrigin(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "origin");
        return throwGetterTypeError(*exec, "DOMURL", "origin");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.origin());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLProtocol(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "protocol");
        return throwGetterTypeError(*exec, "DOMURL", "protocol");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.protocol());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLUsername(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "username");
        return throwGetterTypeError(*exec, "DOMURL", "username");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.username());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLPassword(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "password");
        return throwGetterTypeError(*exec, "DOMURL", "password");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.password());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLHost(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "host");
        return throwGetterTypeError(*exec, "DOMURL", "host");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.host());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLHostname(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "hostname");
        return throwGetterTypeError(*exec, "DOMURL", "hostname");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hostname());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLPort(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "port");
        return throwGetterTypeError(*exec, "DOMURL", "port");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.port());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLPathname(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "pathname");
        return throwGetterTypeError(*exec, "DOMURL", "pathname");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.pathname());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLSearch(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "search");
        return throwGetterTypeError(*exec, "DOMURL", "search");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.search());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLHash(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "DOMURL", "hash");
        return throwGetterTypeError(*exec, "DOMURL", "hash");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hash());
    return JSValue::encode(result);
}


EncodedJSValue jsDOMURLConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSDOMURLPrototype* domObject = jsDynamicCast<JSDOMURLPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSDOMURL::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSDOMURLHref(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "href");
        else
            throwSetterTypeError(*exec, "DOMURL", "href");
        return;
    }
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    String nativeValue = value.toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setHref(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSDOMURLProtocol(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "protocol");
        else
            throwSetterTypeError(*exec, "DOMURL", "protocol");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setProtocol(nativeValue);
}


void setJSDOMURLUsername(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "username");
        else
            throwSetterTypeError(*exec, "DOMURL", "username");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setUsername(nativeValue);
}


void setJSDOMURLPassword(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "password");
        else
            throwSetterTypeError(*exec, "DOMURL", "password");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setPassword(nativeValue);
}


void setJSDOMURLHost(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "host");
        else
            throwSetterTypeError(*exec, "DOMURL", "host");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setHost(nativeValue);
}


void setJSDOMURLHostname(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "hostname");
        else
            throwSetterTypeError(*exec, "DOMURL", "hostname");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setHostname(nativeValue);
}


void setJSDOMURLPort(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "port");
        else
            throwSetterTypeError(*exec, "DOMURL", "port");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setPort(nativeValue);
}


void setJSDOMURLPathname(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "pathname");
        else
            throwSetterTypeError(*exec, "DOMURL", "pathname");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setPathname(nativeValue);
}


void setJSDOMURLSearch(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "search");
        else
            throwSetterTypeError(*exec, "DOMURL", "search");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setSearch(nativeValue);
}


void setJSDOMURLHash(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSDOMURLPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "DOMURL", "hash");
        else
            throwSetterTypeError(*exec, "DOMURL", "hash");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setHash(nativeValue);
}


JSValue JSDOMURL::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMURLConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

static EncodedJSValue JSC_HOST_CALL jsDOMURLConstructorFunctionCreateObjectURL1(ExecState* exec)
{
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    auto* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    Blob* blob = JSBlob::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsStringOrNull(exec, DOMURL::createObjectURL(scriptContext, blob));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMURLConstructorFunctionRevokeObjectURL(ExecState* exec)
{
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    auto* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    String url = exec->argument(0).toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    DOMURL::revokeObjectURL(scriptContext, url);
    return JSValue::encode(jsUndefined());
}

#if ENABLE(MEDIA_SOURCE)
static EncodedJSValue JSC_HOST_CALL jsDOMURLConstructorFunctionCreateObjectURL2(ExecState* exec)
{
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    auto* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    MediaSource* source = JSMediaSource::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsStringOrNull(exec, DOMURLMediaSource::createObjectURL(scriptContext, source));
    return JSValue::encode(result);
}

#endif

#if ENABLE(MEDIA_STREAM)
static EncodedJSValue JSC_HOST_CALL jsDOMURLConstructorFunctionCreateObjectURL3(ExecState* exec)
{
    if (UNLIKELY(exec->argumentCount() < 1))
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    auto* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    MediaStream* stream = JSMediaStream::toWrapped(exec->argument(0));
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = jsStringOrNull(exec, DOMURLMediaStream::createObjectURL(scriptContext, stream));
    return JSValue::encode(result);
}

#endif

EncodedJSValue JSC_HOST_CALL jsDOMURLConstructorFunctionCreateObjectURL(ExecState* exec)
{
    size_t argsCount = std::min<size_t>(1, exec->argumentCount());
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSBlob::info())))))
        return jsDOMURLConstructorFunctionCreateObjectURL1(exec);
#if ENABLE(MEDIA_SOURCE)
    if ((argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSMediaSource::info())))))
        return jsDOMURLConstructorFunctionCreateObjectURL2(exec);
#endif

#if ENABLE(MEDIA_STREAM)
    if ((argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSMediaStream::info())))))
        return jsDOMURLConstructorFunctionCreateObjectURL3(exec);
#endif

    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

EncodedJSValue JSC_HOST_CALL jsDOMURLPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSDOMURL* castedThis = jsDynamicCast<JSDOMURL*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "DOMURL", "toString");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDOMURL::info());
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.toString());
    return JSValue::encode(result);
}

bool JSDOMURLOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMURLOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsDOMURL = jsCast<JSDOMURL*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDOMURL->impl(), jsDOMURL);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, DOMURL* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMURL>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DOMURL.
    COMPILE_ASSERT(!__is_polymorphic(DOMURL), DOMURL_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSDOMURL>(globalObject, impl);
}

DOMURL* JSDOMURL::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSDOMURL*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
