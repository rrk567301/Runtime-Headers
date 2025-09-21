@class NSMutableDictionary, NSMutableArray;

@interface TSTCSEData : NSObject {
    struct unordered_map<unsigned long, TSTCSENodeData, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSTCSENodeData>>> { struct __hash_table<std::__hash_value_type<unsigned long, TSTCSENodeData>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, TSTCSENodeData>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _nodesToData;
    NSMutableDictionary *_hashesToNodeSets;
    NSMutableArray *_retainedExpressions;
}

- (id)init;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)expressionSize:(id)a0;
- (id)expressionsIdenticalToExpression:(id)a0;
- (id)expressionsMatchingCSENodeData:(struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })a0 forNode:(id)a1;
- (void)recordExpression:(id)a0 data:(struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })a1;

@end
