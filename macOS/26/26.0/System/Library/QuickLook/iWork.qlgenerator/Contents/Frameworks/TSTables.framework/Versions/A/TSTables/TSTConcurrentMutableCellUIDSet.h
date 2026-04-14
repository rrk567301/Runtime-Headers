@interface TSTConcurrentMutableCellUIDSet : NSObject {
    struct unordered_map<TSKUIDStruct, TSCEMutableUIDSet *, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCEMutableUIDSet *>>> { struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSCEMutableUIDSet *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _rowUIDToColumnUIDSetMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)addCellUIDRange:(const void *)a0;
- (void)p_addCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)reapAccumulatedCellRegionWithTable:(id)a0;

@end
