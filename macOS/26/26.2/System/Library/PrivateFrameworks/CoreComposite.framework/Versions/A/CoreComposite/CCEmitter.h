@interface CCEmitter : NSObject {
    struct unordered_map<std::string, CCAggregatePass *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, CCAggregatePass *>>> { struct __hash_table<std::__hash_value_type<std::string, CCAggregatePass *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, CCAggregatePass *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, CCAggregatePass *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, CCAggregatePass *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCAggregatePass *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCAggregatePass *>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCAggregatePass *>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCAggregatePass *>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _aggregatePasses;
}

- (void)build;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)collectPassesFromServices:(id)a0;
- (BOOL)emitForKey:(id)a0;
- (id)generatePassesForContext:(BOOL)a0;
- (BOOL)lateUpdateForKey:(id)a0;
- (void)postBuild;
- (void)reallocateWithDeviceGroup:(id)a0;

@end
