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
#include "JSHTMLTableRowElement.h"

#include "ExceptionCode.h"
#include "HTMLCollection.h"
#include "HTMLElement.h"
#include "HTMLNames.h"
#include "HTMLTableRowElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLCollection.h"
#include "JSHTMLElement.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableRowElementPrototypeFunctionInsertCell(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTableRowElementPrototypeFunctionDeleteCell(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsHTMLTableRowElementRowIndex(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLTableRowElementSectionRowIndex(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLTableRowElementCells(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsHTMLTableRowElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableRowElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableRowElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableRowElementBgColor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableRowElementCh(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableRowElementCh(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableRowElementChOff(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableRowElementChOff(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableRowElementVAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSHTMLTableRowElementVAlign(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsHTMLTableRowElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSHTMLTableRowElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSHTMLTableRowElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLTableRowElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableRowElementPrototype>(vm.heap)) JSHTMLTableRowElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLTableRowElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSHTMLTableRowElementConstructor : public DOMConstructorObject {
private:
    JSHTMLTableRowElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLTableRowElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLTableRowElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLTableRowElementConstructor>(vm.heap)) JSHTMLTableRowElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSHTMLTableRowElementConstructor::s_info = { "HTMLTableRowElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLTableRowElementConstructor) };

JSHTMLTableRowElementConstructor::JSHTMLTableRowElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLTableRowElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLTableRowElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("HTMLTableRowElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTableRowElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "rowIndex", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementRowIndex), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "sectionRowIndex", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementSectionRowIndex), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "cells", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementCells), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "align", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementAlign), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableRowElementAlign) },
    { "bgColor", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementBgColor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableRowElementBgColor) },
    { "ch", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementCh), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableRowElementCh) },
    { "chOff", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementChOff), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableRowElementChOff) },
    { "vAlign", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLTableRowElementVAlign), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSHTMLTableRowElementVAlign) },
    { "insertCell", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLTableRowElementPrototypeFunctionInsertCell), (intptr_t) (0) },
    { "deleteCell", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLTableRowElementPrototypeFunctionDeleteCell), (intptr_t) (0) },
};

const ClassInfo JSHTMLTableRowElementPrototype::s_info = { "HTMLTableRowElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLTableRowElementPrototype) };

void JSHTMLTableRowElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSHTMLTableRowElementPrototypeTableValues, *this);
}

const ClassInfo JSHTMLTableRowElement::s_info = { "HTMLTableRowElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSHTMLTableRowElement) };

JSHTMLTableRowElement::JSHTMLTableRowElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<HTMLTableRowElement>&& impl)
    : JSHTMLElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSHTMLTableRowElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLTableRowElementPrototype::create(vm, globalObject, JSHTMLTableRowElementPrototype::createStructure(vm, globalObject, JSHTMLElement::getPrototype(vm, globalObject)));
}

JSObject* JSHTMLTableRowElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLTableRowElement>(vm, globalObject);
}

EncodedJSValue jsHTMLTableRowElementRowIndex(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableRowElement", "rowIndex");
        return throwGetterTypeError(*exec, "HTMLTableRowElement", "rowIndex");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.rowIndex());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableRowElementSectionRowIndex(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableRowElement", "sectionRowIndex");
        return throwGetterTypeError(*exec, "HTMLTableRowElement", "sectionRowIndex");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.sectionRowIndex());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableRowElementCells(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableRowElement", "cells");
        return throwGetterTypeError(*exec, "HTMLTableRowElement", "cells");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.cells()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableRowElementAlign(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableRowElement", "align");
        return throwGetterTypeError(*exec, "HTMLTableRowElement", "align");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableRowElementBgColor(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableRowElement", "bgColor");
        return throwGetterTypeError(*exec, "HTMLTableRowElement", "bgColor");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::bgcolorAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableRowElementCh(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableRowElement", "ch");
        return throwGetterTypeError(*exec, "HTMLTableRowElement", "ch");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::charAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableRowElementChOff(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableRowElement", "chOff");
        return throwGetterTypeError(*exec, "HTMLTableRowElement", "chOff");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::charoffAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableRowElementVAlign(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "HTMLTableRowElement", "vAlign");
        return throwGetterTypeError(*exec, "HTMLTableRowElement", "vAlign");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::valignAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLTableRowElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSHTMLTableRowElementPrototype* domObject = jsDynamicCast<JSHTMLTableRowElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLTableRowElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSHTMLTableRowElementAlign(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableRowElement", "align");
        else
            throwSetterTypeError(*exec, "HTMLTableRowElement", "align");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::alignAttr, nativeValue);
}


void setJSHTMLTableRowElementBgColor(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableRowElement", "bgColor");
        else
            throwSetterTypeError(*exec, "HTMLTableRowElement", "bgColor");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::bgcolorAttr, nativeValue);
}


void setJSHTMLTableRowElementCh(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableRowElement", "ch");
        else
            throwSetterTypeError(*exec, "HTMLTableRowElement", "ch");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::charAttr, nativeValue);
}


void setJSHTMLTableRowElementChOff(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableRowElement", "chOff");
        else
            throwSetterTypeError(*exec, "HTMLTableRowElement", "chOff");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::charoffAttr, nativeValue);
}


void setJSHTMLTableRowElementVAlign(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSHTMLTableRowElementPrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "HTMLTableRowElement", "vAlign");
        else
            throwSetterTypeError(*exec, "HTMLTableRowElement", "vAlign");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setAttributeWithoutSynchronization(WebCore::HTMLNames::valignAttr, nativeValue);
}


JSValue JSHTMLTableRowElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLTableRowElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLTableRowElementPrototypeFunctionInsertCell(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLTableRowElement", "insertCell");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLTableRowElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {
        JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.insertCell(ec)));

        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    int index = toInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.insertCell(index, ec)));

    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLTableRowElementPrototypeFunctionDeleteCell(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSHTMLTableRowElement* castedThis = jsDynamicCast<JSHTMLTableRowElement*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "HTMLTableRowElement", "deleteCell");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLTableRowElement::info());
    auto& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int index = toInt32(exec, exec->argument(0), NormalConversion);
    if (UNLIKELY(exec->hadException()))
        return JSValue::encode(jsUndefined());
    impl.deleteCell(index, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}


}