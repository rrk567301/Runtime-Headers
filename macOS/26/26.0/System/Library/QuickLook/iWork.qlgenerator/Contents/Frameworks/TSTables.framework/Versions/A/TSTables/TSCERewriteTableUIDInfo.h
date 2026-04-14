@interface TSCERewriteTableUIDInfo : NSObject {
    struct TSKUIDStructMap { struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _tableUIDMap;
}

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0;
- (const void *)tableUIDMap;
- (id)initFromMessage:(const void *)a0;
- (id)extendMappingWithTableUIDs:(const void *)a0 calcEngine:(id)a1;
- (id)initWithTableUIDMap:(const void *)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct TSKUIDStruct *x2; })originalTableUIDs;
- (void)rollbackMappings:(id)a0;
- (void)tableWasAdded:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;

@end
