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
#include "JSCSSStyleRule.h"

#include "CSSStyleDeclaration.h"
#include "CSSStyleRule.h"
#include "JSCSSStyleDeclaration.h"
#include "JSDOMBinding.h"
#include "StyleProperties.h"
#include "URL.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsCSSStyleRuleSelectorText(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCSSStyleRuleSelectorText(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCSSStyleRuleStyle(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsCSSStyleRuleConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSCSSStyleRulePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSCSSStyleRulePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCSSStyleRulePrototype* ptr = new (NotNull, JSC::allocateCell<JSCSSStyleRulePrototype>(vm.heap)) JSCSSStyleRulePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSCSSStyleRulePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSCSSStyleRuleConstructor : public DOMConstructorObject {
private:
    JSCSSStyleRuleConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCSSStyleRuleConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCSSStyleRuleConstructor* ptr = new (NotNull, JSC::allocateCell<JSCSSStyleRuleConstructor>(vm.heap)) JSCSSStyleRuleConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSCSSStyleRuleConstructor::s_info = { "CSSStyleRuleConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCSSStyleRuleConstructor) };

JSCSSStyleRuleConstructor::JSCSSStyleRuleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCSSStyleRuleConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSCSSStyleRule::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("CSSStyleRule"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSCSSStyleRulePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSStyleRuleConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "selectorText", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSStyleRuleSelectorText), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSCSSStyleRuleSelectorText) },
    { "style", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSStyleRuleStyle), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSCSSStyleRulePrototype::s_info = { "CSSStyleRulePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCSSStyleRulePrototype) };

void JSCSSStyleRulePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSCSSStyleRulePrototypeTableValues, *this);
}

const ClassInfo JSCSSStyleRule::s_info = { "CSSStyleRule", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCSSStyleRule) };

JSCSSStyleRule::JSCSSStyleRule(Structure* structure, JSDOMGlobalObject* globalObject, Ref<CSSStyleRule>&& impl)
    : JSCSSRule(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSCSSStyleRule::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSCSSStyleRulePrototype::create(vm, globalObject, JSCSSStyleRulePrototype::createStructure(vm, globalObject, JSCSSRule::getPrototype(vm, globalObject)));
}

JSObject* JSCSSStyleRule::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSStyleRule>(vm, globalObject);
}

EncodedJSValue jsCSSStyleRuleSelectorText(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSCSSStyleRule* castedThis = jsDynamicCast<JSCSSStyleRule*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSCSSStyleRulePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "CSSStyleRule", "selectorText");
        return throwGetterTypeError(*exec, "CSSStyleRule", "selectorText");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringOrNull(exec, impl.selectorText());
    return JSValue::encode(result);
}


EncodedJSValue jsCSSStyleRuleStyle(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSCSSStyleRule* castedThis = jsDynamicCast<JSCSSStyleRule*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSCSSStyleRulePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "CSSStyleRule", "style");
        return throwGetterTypeError(*exec, "CSSStyleRule", "style");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.style()));
    return JSValue::encode(result);
}


EncodedJSValue jsCSSStyleRuleConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSCSSStyleRulePrototype* domObject = jsDynamicCast<JSCSSStyleRulePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSCSSStyleRule::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSCSSStyleRuleSelectorText(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSCSSStyleRule* castedThis = jsDynamicCast<JSCSSStyleRule*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSCSSStyleRulePrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "CSSStyleRule", "selectorText");
        else
            throwSetterTypeError(*exec, "CSSStyleRule", "selectorText");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = valueToStringWithNullCheck(exec, value);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setSelectorText(nativeValue);
}


JSValue JSCSSStyleRule::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSStyleRuleConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
