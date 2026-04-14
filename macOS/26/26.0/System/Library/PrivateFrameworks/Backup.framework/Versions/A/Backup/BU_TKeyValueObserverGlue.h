@interface BU_TKeyValueObserverGlue : NSObject {
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _functor;
    struct function<void (NSDictionary<NSString *,NSObject *> *)> { struct __value_func<void (NSDictionary<NSString *,NSObject *> *)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _functorWithChange;
    struct unordered_set<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> { struct __hash_table<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; struct hash<NSObject *__unsafe_unretained> { struct hash<NSObject *> { } fHash; } __hasher_; float __max_load_factor_; struct equal_to<NSObject *__unsafe_unretained> { struct equal_to<NSObject *> { } fEqual; } __key_eq_; } __table_; } _observedObjects;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _observedKeyPath;
}

- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)initCommon:(const void *)a0 observedKeyPath:(const void *)a1;
- (id)initWithFunctor:(const void *)a0 observedObjects:(const void *)a1 observedKeyPath:(const void *)a2;
- (id)initWithFunctorWithChange:(const void *)a0 observedObjects:(const void *)a1 observedKeyPath:(const void *)a2;

@end
