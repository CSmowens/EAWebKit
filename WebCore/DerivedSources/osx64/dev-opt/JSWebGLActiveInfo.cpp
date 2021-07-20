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

#if ENABLE(WEBGL)

#include "JSWebGLActiveInfo.h"

#include "JSDOMBinding.h"
#include "URL.h"
#include "WebGLActiveInfo.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsWebGLActiveInfoSize(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebGLActiveInfoType(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebGLActiveInfoName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsWebGLActiveInfoConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSWebGLActiveInfoPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSWebGLActiveInfoPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLActiveInfoPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLActiveInfoPrototype>(vm.heap)) JSWebGLActiveInfoPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebGLActiveInfoPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSWebGLActiveInfoConstructor : public DOMConstructorObject {
private:
    JSWebGLActiveInfoConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLActiveInfoConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLActiveInfoConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebGLActiveInfoConstructor>(vm.heap)) JSWebGLActiveInfoConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSWebGLActiveInfoConstructor::s_info = { "WebGLActiveInfoConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLActiveInfoConstructor) };

JSWebGLActiveInfoConstructor::JSWebGLActiveInfoConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLActiveInfoConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebGLActiveInfo::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("WebGLActiveInfo"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSWebGLActiveInfoPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLActiveInfoConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "size", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLActiveInfoSize), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "type", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLActiveInfoType), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "name", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLActiveInfoName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSWebGLActiveInfoPrototype::s_info = { "WebGLActiveInfoPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLActiveInfoPrototype) };

void JSWebGLActiveInfoPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSWebGLActiveInfoPrototypeTableValues, *this);
}

const ClassInfo JSWebGLActiveInfo::s_info = { "WebGLActiveInfo", &Base::s_info, 0, CREATE_METHOD_TABLE(JSWebGLActiveInfo) };

JSWebGLActiveInfo::JSWebGLActiveInfo(Structure* structure, JSDOMGlobalObject* globalObject, Ref<WebGLActiveInfo>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSWebGLActiveInfo::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebGLActiveInfoPrototype::create(vm, globalObject, JSWebGLActiveInfoPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSWebGLActiveInfo::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLActiveInfo>(vm, globalObject);
}

void JSWebGLActiveInfo::destroy(JSC::JSCell* cell)
{
    JSWebGLActiveInfo* thisObject = static_cast<JSWebGLActiveInfo*>(cell);
    thisObject->JSWebGLActiveInfo::~JSWebGLActiveInfo();
}

JSWebGLActiveInfo::~JSWebGLActiveInfo()
{
    releaseImpl();
}

EncodedJSValue jsWebGLActiveInfoSize(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebGLActiveInfo* castedThis = jsDynamicCast<JSWebGLActiveInfo*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebGLActiveInfoPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebGLActiveInfo", "size");
        return throwGetterTypeError(*exec, "WebGLActiveInfo", "size");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.size());
    return JSValue::encode(result);
}


EncodedJSValue jsWebGLActiveInfoType(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebGLActiveInfo* castedThis = jsDynamicCast<JSWebGLActiveInfo*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebGLActiveInfoPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebGLActiveInfo", "type");
        return throwGetterTypeError(*exec, "WebGLActiveInfo", "type");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.type());
    return JSValue::encode(result);
}


EncodedJSValue jsWebGLActiveInfoName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSWebGLActiveInfo* castedThis = jsDynamicCast<JSWebGLActiveInfo*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSWebGLActiveInfoPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "WebGLActiveInfo", "name");
        return throwGetterTypeError(*exec, "WebGLActiveInfo", "name");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.name());
    return JSValue::encode(result);
}


EncodedJSValue jsWebGLActiveInfoConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSWebGLActiveInfoPrototype* domObject = jsDynamicCast<JSWebGLActiveInfoPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebGLActiveInfo::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSWebGLActiveInfo::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLActiveInfoConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSWebGLActiveInfoOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebGLActiveInfoOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsWebGLActiveInfo = jsCast<JSWebGLActiveInfo*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebGLActiveInfo->impl(), jsWebGLActiveInfo);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, WebGLActiveInfo* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLActiveInfo>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to WebGLActiveInfo.
    COMPILE_ASSERT(!__is_polymorphic(WebGLActiveInfo), WebGLActiveInfo_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSWebGLActiveInfo>(globalObject, impl);
}

WebGLActiveInfo* JSWebGLActiveInfo::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSWebGLActiveInfo*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)
