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
#include "JSCSSKeyframeRule.h"

#include "CSSKeyframeRule.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "JSDOMBinding.h"
#include "StyleProperties.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsCSSKeyframeRuleKeyText(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
void setJSCSSKeyframeRuleKeyText(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsCSSKeyframeRuleStyle(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsCSSKeyframeRuleConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSCSSKeyframeRulePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSCSSKeyframeRulePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCSSKeyframeRulePrototype* ptr = new (NotNull, JSC::allocateCell<JSCSSKeyframeRulePrototype>(vm.heap)) JSCSSKeyframeRulePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSCSSKeyframeRulePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSCSSKeyframeRuleConstructor : public DOMConstructorObject {
private:
    JSCSSKeyframeRuleConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCSSKeyframeRuleConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCSSKeyframeRuleConstructor* ptr = new (NotNull, JSC::allocateCell<JSCSSKeyframeRuleConstructor>(vm.heap)) JSCSSKeyframeRuleConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSCSSKeyframeRuleConstructor::s_info = { "CSSKeyframeRuleConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCSSKeyframeRuleConstructor) };

JSCSSKeyframeRuleConstructor::JSCSSKeyframeRuleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCSSKeyframeRuleConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSCSSKeyframeRule::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("CSSKeyframeRule"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSCSSKeyframeRulePrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSKeyframeRuleConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "keyText", DontDelete | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSKeyframeRuleKeyText), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSCSSKeyframeRuleKeyText) },
    { "style", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCSSKeyframeRuleStyle), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSCSSKeyframeRulePrototype::s_info = { "CSSKeyframeRulePrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCSSKeyframeRulePrototype) };

void JSCSSKeyframeRulePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSCSSKeyframeRulePrototypeTableValues, *this);
}

const ClassInfo JSCSSKeyframeRule::s_info = { "CSSKeyframeRule", &Base::s_info, 0, CREATE_METHOD_TABLE(JSCSSKeyframeRule) };

JSCSSKeyframeRule::JSCSSKeyframeRule(Structure* structure, JSDOMGlobalObject* globalObject, Ref<CSSKeyframeRule>&& impl)
    : JSCSSRule(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSCSSKeyframeRule::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSCSSKeyframeRulePrototype::create(vm, globalObject, JSCSSKeyframeRulePrototype::createStructure(vm, globalObject, JSCSSRule::getPrototype(vm, globalObject)));
}

JSObject* JSCSSKeyframeRule::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCSSKeyframeRule>(vm, globalObject);
}

EncodedJSValue jsCSSKeyframeRuleKeyText(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSCSSKeyframeRule* castedThis = jsDynamicCast<JSCSSKeyframeRule*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSCSSKeyframeRulePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "CSSKeyframeRule", "keyText");
        return throwGetterTypeError(*exec, "CSSKeyframeRule", "keyText");
    }
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.keyText());
    return JSValue::encode(result);
}


EncodedJSValue jsCSSKeyframeRuleStyle(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    JSCSSKeyframeRule* castedThis = jsDynamicCast<JSCSSKeyframeRule*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSCSSKeyframeRulePrototype*>(slotBase))
            return reportDeprecatedGetterError(*exec, "CSSKeyframeRule", "style");
        return throwGetterTypeError(*exec, "CSSKeyframeRule", "style");
    }
    auto& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.style()));
    return JSValue::encode(result);
}


EncodedJSValue jsCSSKeyframeRuleConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSCSSKeyframeRulePrototype* domObject = jsDynamicCast<JSCSSKeyframeRulePrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSCSSKeyframeRule::getConstructor(exec->vm(), domObject->globalObject()));
}

void setJSCSSKeyframeRuleKeyText(ExecState* exec, JSObject* baseObject, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(baseObject);
    JSCSSKeyframeRule* castedThis = jsDynamicCast<JSCSSKeyframeRule*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        if (jsDynamicCast<JSCSSKeyframeRulePrototype*>(JSValue::decode(thisValue)))
            reportDeprecatedSetterError(*exec, "CSSKeyframeRule", "keyText");
        else
            throwSetterTypeError(*exec, "CSSKeyframeRule", "keyText");
        return;
    }
    auto& impl = castedThis->impl();
    String nativeValue = value.toString(exec)->value(exec);
    if (UNLIKELY(exec->hadException()))
        return;
    impl.setKeyText(nativeValue);
}


JSValue JSCSSKeyframeRule::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCSSKeyframeRuleConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}