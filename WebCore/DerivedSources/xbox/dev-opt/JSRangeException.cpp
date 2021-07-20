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
#include "JSRangeException.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "RangeException.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsRangeExceptionPrototypeFunctionToString(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsRangeExceptionCode(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRangeExceptionName(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRangeExceptionMessage(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRangeExceptionConstructor(JSC::ExecState*, JSC::JSObject*, JSC::EncodedJSValue, JSC::PropertyName);

class JSRangeExceptionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSRangeExceptionPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSRangeExceptionPrototype* ptr = new (NotNull, JSC::allocateCell<JSRangeExceptionPrototype>(vm.heap)) JSRangeExceptionPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSRangeExceptionPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

class JSRangeExceptionConstructor : public DOMConstructorObject {
private:
    JSRangeExceptionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSRangeExceptionConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSRangeExceptionConstructor* ptr = new (NotNull, JSC::allocateCell<JSRangeExceptionConstructor>(vm.heap)) JSRangeExceptionConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
};

/* Hash table */

static const struct CompactHashIndex JSRangeExceptionTableIndex[9] = {
    { -1, -1 },
    { 0, 8 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { 1, -1 },
};


static const HashTableValue JSRangeExceptionTableValues[] =
{
    { "code", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionCode), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "name", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionName), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "message", DontDelete | ReadOnly | CustomAccessor, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionMessage), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
};

static const HashTable JSRangeExceptionTable = { 3, 7, true, JSRangeExceptionTableValues, 0, JSRangeExceptionTableIndex };
/* Hash table for constructor */

static const HashTableValue JSRangeExceptionConstructorTableValues[] =
{
    { "BAD_BOUNDARYPOINTS_ERR", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "INVALID_NODE_TYPE_ERR", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
};

const ClassInfo JSRangeExceptionConstructor::s_info = { "RangeExceptionConstructor", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRangeExceptionConstructor) };

JSRangeExceptionConstructor::JSRangeExceptionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSRangeExceptionConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSRangeException::getPrototype(vm, globalObject), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("RangeException"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
    reifyStaticProperties(vm, JSRangeExceptionConstructorTableValues, *this);
}

/* Hash table for prototype */

static const HashTableValue JSRangeExceptionPrototypeTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(0) },
    { "BAD_BOUNDARYPOINTS_ERR", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(1), (intptr_t) (0) },
    { "INVALID_NODE_TYPE_ERR", DontDelete | ReadOnly | ConstantInteger, NoIntrinsic, (intptr_t)(2), (intptr_t) (0) },
    { "toString", DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsRangeExceptionPrototypeFunctionToString), (intptr_t) (0) },
};

const ClassInfo JSRangeExceptionPrototype::s_info = { "RangeExceptionPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSRangeExceptionPrototype) };

void JSRangeExceptionPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSRangeExceptionPrototypeTableValues, *this);
}

const ClassInfo JSRangeException::s_info = { "RangeException", &Base::s_info, &JSRangeExceptionTable, CREATE_METHOD_TABLE(JSRangeException) };

JSRangeException::JSRangeException(Structure* structure, JSDOMGlobalObject* globalObject, Ref<RangeException>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSRangeException::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRangeExceptionPrototype::create(vm, globalObject, JSRangeExceptionPrototype::createStructure(vm, globalObject, globalObject->errorPrototype()));
}

JSObject* JSRangeException::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRangeException>(vm, globalObject);
}

void JSRangeException::destroy(JSC::JSCell* cell)
{
    JSRangeException* thisObject = static_cast<JSRangeException*>(cell);
    thisObject->JSRangeException::~JSRangeException();
}

JSRangeException::~JSRangeException()
{
    releaseImpl();
}

bool JSRangeException::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    auto* thisObject = jsCast<JSRangeException*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSRangeException, Base>(exec, JSRangeExceptionTable, thisObject, propertyName, slot);
}

EncodedJSValue jsRangeExceptionCode(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSRangeException*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsNumber(impl.code());
    return JSValue::encode(result);
}


EncodedJSValue jsRangeExceptionName(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSRangeException*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.name());
    return JSValue::encode(result);
}


EncodedJSValue jsRangeExceptionMessage(ExecState* exec, JSObject* slotBase, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(slotBase);
    UNUSED_PARAM(thisValue);
    auto* castedThis = jsCast<JSRangeException*>(slotBase);
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.message());
    return JSValue::encode(result);
}


EncodedJSValue jsRangeExceptionConstructor(ExecState* exec, JSObject* baseValue, EncodedJSValue, PropertyName)
{
    JSRangeExceptionPrototype* domObject = jsDynamicCast<JSRangeExceptionPrototype*>(baseValue);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSRangeException::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSRangeException::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSRangeExceptionConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsRangeExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->thisValue();
    JSRangeException* castedThis = jsDynamicCast<JSRangeException*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*exec, "RangeException", "toString");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRangeException::info());
    auto& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.toString());
    return JSValue::encode(result);
}

bool JSRangeExceptionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSRangeExceptionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsRangeException = jsCast<JSRangeException*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsRangeException->impl(), jsRangeException);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, RangeException* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRangeException>(globalObject, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to RangeException.
    COMPILE_ASSERT(!__is_polymorphic(RangeException), RangeException_is_polymorphic_but_idl_claims_not_to_be);
#endif
    return createNewWrapper<JSRangeException>(globalObject, impl);
}

RangeException* JSRangeException::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSRangeException*>(value))
        return &wrapper->impl();
    return nullptr;
}

}
