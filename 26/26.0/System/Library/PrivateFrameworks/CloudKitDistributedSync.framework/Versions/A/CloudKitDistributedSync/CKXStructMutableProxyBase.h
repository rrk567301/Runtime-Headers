@interface CKXStructMutableProxyBase : CKXStructProxyBase {
    struct unordered_map<unsigned long long, CKXListInstance, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, CKXListInstance>>> { struct __hash_table<std::__hash_value_type<unsigned long long, CKXListInstance>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CKXListInstance>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CKXListInstance>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, CKXListInstance>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXListInstance>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXListInstance>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXListInstance>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXListInstance>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } fieldTokenToListInstance;
}

- (void)commit;
- (BOOL)isMutable;
- (void)reset;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })mutableListInstanceForField:(unsigned long long)a0;

@end
