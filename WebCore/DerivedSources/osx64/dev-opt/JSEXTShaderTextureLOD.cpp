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

#include "JSEXTShaderTextureLOD.h"

#include "EXTShaderTextureLOD.h"
#include "JSDOMBinding.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

class JSEXTShaderTextureLODPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSEXTShaderTextureLODPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSEXTShaderTextureLODPrototype* ptr = new (NotNull, JSC::allocateCell<JSEXTShaderTextureLODPrototype>(vm.heap)) JSEXTShaderTextureLODPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSEXTShaderTextureLODPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

/* Hash table for prototype */

static const HashTableValue JSEXTShaderTextureLODPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

const ClassInfo JSEXTShaderTextureLODPrototype::s_info = { "EXTShaderTextureLODPrototype", &Base::s_info, 0, CREATE_METHOD_TABLE(JSEXTShaderTextureLODPrototype) };

void JSEXTShaderTextureLODPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSEXTShaderTextureLODPrototypeTableValues, *this);
}

const ClassInfo JSEXTShaderTextureLOD::s_info = { "EXTShaderTextureLOD", &Base::s_info, 0, CREATE_METHOD_TABLE(JSEXTShaderTextureLOD) };

JSEXTShaderTextureLOD::JSEXTShaderTextureLOD(Structure* structure, JSDOMGlobalObject* globalObject, Ref<EXTShaderTextureLOD>&& impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(&impl.leakRef())
{
}

JSObject* JSEXTShaderTextureLOD::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSEXTShaderTextureLODPrototype::create(vm, globalObject, JSEXTShaderTextureLODPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

JSObject* JSEXTShaderTextureLOD::getPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEXTShaderTextureLOD>(vm, globalObject);
}

void JSEXTShaderTextureLOD::destroy(JSC::JSCell* cell)
{
    JSEXTShaderTextureLOD* thisObject = static_cast<JSEXTShaderTextureLOD*>(cell);
    thisObject->JSEXTShaderTextureLOD::~JSEXTShaderTextureLOD();
}

JSEXTShaderTextureLOD::~JSEXTShaderTextureLOD()
{
    releaseImpl();
}

bool JSEXTShaderTextureLODOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    auto* jsEXTShaderTextureLOD = jsCast<JSEXTShaderTextureLOD*>(handle.slot()->asCell());
    WebGLRenderingContextBase* root = WTF::getPtr(jsEXTShaderTextureLOD->impl().context());
    return visitor.containsOpaqueRoot(root);
}

void JSEXTShaderTextureLODOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsEXTShaderTextureLOD = jsCast<JSEXTShaderTextureLOD*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsEXTShaderTextureLOD->impl(), jsEXTShaderTextureLOD);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7EXTShaderTextureLOD@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore19EXTShaderTextureLODE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject* globalObject, EXTShaderTextureLOD* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSEXTShaderTextureLOD>(globalObject, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7EXTShaderTextureLOD@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore19EXTShaderTextureLODE[2];
#if COMPILER(CLANG)
    // If this fails EXTShaderTextureLOD does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(EXTShaderTextureLOD), EXTShaderTextureLOD_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // EXTShaderTextureLOD has subclasses. If EXTShaderTextureLOD has subclasses that get passed
    // to toJS() we currently require EXTShaderTextureLOD you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createNewWrapper<JSEXTShaderTextureLOD>(globalObject, impl);
}

EXTShaderTextureLOD* JSEXTShaderTextureLOD::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSEXTShaderTextureLOD*>(value))
        return &wrapper->impl();
    return nullptr;
}

}

#endif // ENABLE(WEBGL)
