@class NSObject, VZVirtualMachineView;
@protocol OS_xpc_object;

@interface VZKeyboardEventTap : NSObject {
    VZVirtualMachineView *_view;
    NSObject<OS_xpc_object> *_connection;
    struct unique_ptr<KeyboardEventTapMessenger, std::default_delete<KeyboardEventTapMessenger>> { struct { struct KeyboardEventTapMessenger *__ptr_; } ; } _messenger;
    struct unordered_multiset<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<long long, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _keysDown;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
