@interface VMUSimpleSerializer : VMUAbstractSerializer {
    struct unordered_map<const char *, unsigned int, cstring_callbacks, cstring_callbacks, std::allocator<std::pair<const char *const, unsigned int>>> { struct __hash_table<std::__hash_value_type<const char *, unsigned int>, std::__unordered_map_hasher<const char *, std::__hash_value_type<const char *, unsigned int>, cstring_callbacks, cstring_callbacks>, std::__unordered_map_equal<const char *, std::__hash_value_type<const char *, unsigned int>, cstring_callbacks, cstring_callbacks>, std::allocator<std::__hash_value_type<const char *, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<const char *, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _internMap;
    unsigned int _internCursor;
}

- (unsigned int)serializeString:(id)a0;
- (void)dealloc;
- (void)_serializeValues:(unsigned int *)a0 count:(unsigned int)a1;
- (unsigned int)serializeNullTerminatedBytes:(const char *)a0;
- (id).cxx_construct;
- (void)serialize32:(unsigned int)a0;
- (void)serialize64:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyContiguousData;

@end
