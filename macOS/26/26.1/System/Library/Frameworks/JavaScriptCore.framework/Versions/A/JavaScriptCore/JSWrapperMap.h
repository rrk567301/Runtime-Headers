@class NSMutableDictionary, NSMapTable;

@interface JSWrapperMap : NSObject {
    struct RetainPtr<NSMutableDictionary> { NSMutableDictionary *m_ptr; } m_classMap;
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject>, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> { void *__ptr_; } m_cachedJSWrappers;
    struct RetainPtr<NSMapTable> { NSMapTable *m_ptr; } m_cachedObjCWrappers;
}

- (id)classInfoForClass:(Class)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (id)jsWrapperForObject:(id)a0 inContext:(id)a1;
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;

@end
