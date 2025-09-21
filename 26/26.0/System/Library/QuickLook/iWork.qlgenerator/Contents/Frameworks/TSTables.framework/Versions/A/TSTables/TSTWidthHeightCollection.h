@interface TSTWidthHeightCollection : NSObject {
    struct vector<std::pair<TSUCellCoord, double>, std::allocator<std::pair<TSUCellCoord, double>>> { void *__begin_; void *__end_; void *__cap_; } _fittingHeights;
    struct unordered_map<unsigned short, double, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> { struct __hash_table<std::__hash_value_type<unsigned short, double>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>>, std::allocator<std::__hash_value_type<unsigned short, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _columnToMaxFittingWidths;
}

@property (readonly, nonatomic) BOOL hasWorkItems;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFittingHeight:(double)a0 forCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)addFittingWidth:(double)a0 forCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (void)enumerateFittingHeightsUsingBlock:(id /* block */)a0;
- (void)enumerateFittingWidthsUsingBlock:(id /* block */)a0;

@end
