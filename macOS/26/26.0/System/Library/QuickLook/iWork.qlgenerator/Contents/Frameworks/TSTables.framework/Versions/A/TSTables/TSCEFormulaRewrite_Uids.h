@class NSIndexSet;

@interface TSCEFormulaRewrite_Uids : NSObject {
    struct unordered_map<TSKUIDStruct, unsigned int, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, unsigned int>>> { struct __hash_table<std::__hash_value_type<TSKUIDStruct, unsigned int>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, unsigned int>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>, std::allocator<std::__hash_value_type<TSKUIDStruct, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _indexesForUids;
    struct unordered_map<unsigned int, TSKUIDStruct, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSKUIDStruct>>> { struct __hash_table<std::__hash_value_type<unsigned int, TSKUIDStruct>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSKUIDStruct>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, TSKUIDStruct>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSKUIDStruct>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _uidsForIndexes;
}

@property (readonly) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct TSKUIDStruct *__cap_; } uids;
@property (readonly) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct TSKUIDStruct *__cap_; } viewOrderUids;
@property (readonly) NSIndexSet *indexes;

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)containsIndex:(unsigned int)a0;
- (void)saveToMessage:(void *)a0;
- (id)initFromMessage:(const void *)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct TSKUIDStruct *x2; })uidsForIndexes:(id)a0;
- (unsigned int)rowIndexForUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (unsigned short)columnIndexForUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)indexSetBySubtractingOurIndexesFromIndexSet:(id)a0;
- (id)initWithUids:(const void *)a0;
- (id)initWithUids:(const void *)a0 atIndexes:(const void *)a1;
- (void)loadIndexesForTable:(id)a0 isRows:(BOOL)a1 shuffleMap:(id)a2;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })uidForIndex:(unsigned int)a0;
- (void)unloadIndexes;

@end
