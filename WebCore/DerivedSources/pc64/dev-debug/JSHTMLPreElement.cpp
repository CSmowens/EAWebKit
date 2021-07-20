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
#include "JSHTMLPreElement.h"

#include "HTMLNames.h"
#include "HTMLPreElement.h"
#include "JSDOMBinding.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsHTMLPreElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLPreElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLPreElementWrap(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLPreElementWrap(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLPreElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLPreElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLPreElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLPreElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLPreElementPrototype>(vm.heap)) JSHTMLPreElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLPreElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLPreElementConstructor : public DOMConstructorObject {
private:
    JSHTMLPreElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLPreElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLPreElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLPreElementConstructor>(vm.heap)) JSHTMLPreElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLPreElementConstructor::s_info = { "HTMLPreElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLPreElementConstructor) };

JSHTMLPreElementConstructor::JSHTMLPreElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLPreElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLPreElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLPreElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLPreElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLPreElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "width", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLPreElementWidth), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLPreElementWidth) },
    { "wrap", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLPreElementWrap), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLPreElementWrap) },
};

const ClassInfo JSHTMLPreElementPrototype::s_info = { "HTMLPreElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLPreElementPrototype) };

void JSHTMLPreElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLPreElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLPreElement::s_info = { "HTMLPreElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLPreElement) };

JSHTMLPreElement::JSHTMLPreElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLPreElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLPreElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLPreElementPrototype::create(vm, globalObject, JSHTMLPreElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLPreElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLPreElement>(vm, globalObject);
}

EncodedJSValue jsHTMLPreElementWidth(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLPreElement* castedThis = jsDynamicCast<JSHTMLPreElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLPreElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLPreElement", "width");
        return throwGetterTypeError(*exec, "HTMLPreElement", "width");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.getIntegralAttribute(WebCore::HTMLNames::widthAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLPreElementWrap(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLPreElement* castedThis = jsDynamicCast<JSHTMLPreElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLPreElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLPreElement", "wrap");
        return throwGetterTypeError(*exec, "HTMLPreElement", "wrap");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::wrapAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLPreElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLPreElementPrototype* domObject = jsDynamicCast<JSHTMLPreElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLPreElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLPreElementWidth(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLPreElement* castedThis = jsDynamicCast<JSHTMLPreElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLPreElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLPreElement", "width");
        else
            throwSetterTypeError(*exec, "HTMLPreElement", "width");
        return;
    }
    auto& impl = castedThis->impl();
    int nativeValue = toInt32(exec, value, NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setIntegralAttribute(WebCore::HTMLNames::widthAttr, nativeValue);
}


void setJSHTMLPreElementWrap(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLPreElement* castedThis = jsDynamicCast<JSHTMLPreElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLPreElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLPreElement", "wrap");
        else
            throwSetterTypeError(*exec, "HTMLPreElement", "wrap");
        return;
    }
    auto& impl = castedThis->impl();
    bool nativeValue = value.toBoolean(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::wrapAttr, nativeValue);
}


JSValue JSHTMLPreElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLPreElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
