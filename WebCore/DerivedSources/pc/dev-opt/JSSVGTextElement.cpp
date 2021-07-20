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
#include "JSSVGTextElement.h"

#include "JSDOMBinding.h"
#include "SVGTextElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Attributes

JSC::EncodedJSValue jsSVGTextElementConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSSVGTextElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSSVGTextElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGTextElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGTextElementPrototype>(vm.heap)) JSSVGTextElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGTextElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSSVGTextElementConstructor : public DOMConstructorObject {
private:
    JSSVGTextElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGTextElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGTextElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGTextElementConstructor>(vm.heap)) JSSVGTextElementConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

const ClassInfo JSSVGTextElementConstructor::s_info = { "SVGTextElementConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGTextElementConstructor) };

JSSVGTextElementConstructor::JSSVGTextElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGTextElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGTextElement::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("SVGTextElement"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

/* Hash table for prototype */

static const HashTableValue JSSVGTextElementPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTextElementConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

const ClassInfo JSSVGTextElementPrototype::s_info = { "SVGTextElementPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGTextElementPrototype) };

void JSSVGTextElementPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSSVGTextElementPrototypeTableValues, *this);
}

const ClassInfo JSSVGTextElement::s_info = { "SVGTextElement", &Base::s_info, 0, CREATE_METHOD_TABLE(JSSVGTextElement) };

JSSVGTextElement::JSSVGTextElement(Structure* structure, JSDOMGlobalObject* globalObject, Ref<SVGTextElement>&& impl)
    : JSSVGTextPositioningElement(structure, globalObject, WTF::move(impl))
{
}

JSObject* JSSVGTextElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGTextElementPrototype::create(vm, globalObject, JSSVGTextElementPrototype::createStructure(vm, globalObject, JSSVGTextPositioningElement::getPrototype(vm, globalObject)));
}

JSObject* JSSVGTextElement::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTextElement>(vm, globalObject);
}

EncodedJSValue jsSVGTextElementConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSSVGTextElementPrototype* domObject = jsDynamicCast<JSSVGTextElementPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGTextElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGTextElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTextElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
