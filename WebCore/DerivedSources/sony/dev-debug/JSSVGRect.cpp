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
#include "JSSVGRect.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "SVGRect.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGRectX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGRectX(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGRectY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGRectY(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGRectWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGRectWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGRectHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSSVGRectHeight(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsSVGRectConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGRectPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGRectPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGRectPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGRectPrototype>(vm.heap)) JSSVGRectPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGRectPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGRectConstructor : public DOMConstructorObject {
private:
    JSSVGRectConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGRectConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGRectConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGRectConstructor>(vm.heap)) JSSVGRectConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGRectConstructor::s_info = { "SVGRectConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGRectConstructor) };

JSSVGRectConstructor::JSSVGRectConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGRectConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGRect::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGRect"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGRectPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "x", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectX), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGRectX) },
    { "y", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectY), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGRectY) },
    { "width", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGRectWidth) },
    { "height", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRectHeight), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSSVGRectHeight) },
};

const ClassInfo JSSVGRectPrototype::s_info = { "SVGRectPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGRectPrototype) };

void JSSVGRectPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGRectPrototypeTableValues, *this);
}

const ClassInfo JSSVGRect::s_info = { "SVGRect", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGRect) };

JSSVGRect::JSSVGRect(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGPropertyTearOff<FloatRect>>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSSVGRect::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGRectPrototype::create(vm, globalObject, JSSVGRectPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSSVGRect::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGRect>(vm, globalObject);
}

void JSSVGRect::destroy(JSC::JSCell* cell)
{
    JSSVGRect* thisObject = static_cast<JSSVGRect*>(cell);
    thisObject->JSSVGRect::~JSSVGRect();
}

JSSVGRect::~JSSVGRect()
{
    releaseImpl();
}

EncodedJSValue jsSVGRectX(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGRect* castedThis = jsDynamicCast<JSSVGRect*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGRectPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGRect", "x");
        return throwGetterTypeError(*exec, "SVGRect", "x");
    }
    FloatRect& impl = castedThis->impl().propertyReference();
    JSValue result = jsNumber(impl.x());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGRectY(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGRect* castedThis = jsDynamicCast<JSSVGRect*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGRectPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGRect", "y");
        return throwGetterTypeError(*exec, "SVGRect", "y");
    }
    FloatRect& impl = castedThis->impl().propertyReference();
    JSValue result = jsNumber(impl.y());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGRectWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGRect* castedThis = jsDynamicCast<JSSVGRect*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGRectPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGRect", "width");
        return throwGetterTypeError(*exec, "SVGRect", "width");
    }
    FloatRect& impl = castedThis->impl().propertyReference();
    JSValue result = jsNumber(impl.width());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGRectHeight(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSSVGRect* castedThis = jsDynamicCast<JSSVGRect*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGRectPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "SVGRect", "height");
        return throwGetterTypeError(*exec, "SVGRect", "height");
    }
    FloatRect& impl = castedThis->impl().propertyReference();
    JSValue result = jsNumber(impl.height());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGRectConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGRectPrototype* domObject = jsDynamicCast<JSSVGRectPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGRect::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSSVGRectX(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGRect* castedThis = jsDynamicCast<JSSVGRect*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGRectPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGRect", "x");
        else
            throwSetterTypeError(*exec, "SVGRect", "x");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    if (impl.isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatRect& podImpl = impl.propertyReference();
    podImpl.setX(nativeValue);
    impl.commitChange();
}


void setJSSVGRectY(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGRect* castedThis = jsDynamicCast<JSSVGRect*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGRectPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGRect", "y");
        else
            throwSetterTypeError(*exec, "SVGRect", "y");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    if (impl.isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatRect& podImpl = impl.propertyReference();
    podImpl.setY(nativeValue);
    impl.commitChange();
}


void setJSSVGRectWidth(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGRect* castedThis = jsDynamicCast<JSSVGRect*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGRectPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGRect", "width");
        else
            throwSetterTypeError(*exec, "SVGRect", "width");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    if (impl.isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatRect& podImpl = impl.propertyReference();
    podImpl.setWidth(nativeValue);
    impl.commitChange();
}


void setJSSVGRectHeight(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSSVGRect* castedThis = jsDynamicCast<JSSVGRect*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSSVGRectPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "SVGRect", "height");
        else
            throwSetterTypeError(*exec, "SVGRect", "height");
        return;
    }
    auto& impl = castedThis->impl();
    float nativeValue = value.toFloat(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    if (impl.isReadOnly()) {
        setDOMException(exec, NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    FloatRect& podImpl = impl.propertyReference();
    podImpl.setHeight(nativeValue);
    impl.commitChange();
}


JSValue JSSVGRect::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGRectConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

bool JSSVGRectOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGRectOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsSVGRect = jsCast<JSSVGRect*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGRect->impl(), jsSVGRect);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, SVGPropertyTearOff<FloatRect>* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGRect, SVGPropertyTearOff<FloatRect>>(globalObject, impl))
        return result;
    return createNewWrapper<JSSVGRect, SVGPropertyTearOff<FloatRect>>(globalObject, impl);
}

SVGPropertyTearOff<FloatRect>* JSSVGRect::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSSVGRect*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
