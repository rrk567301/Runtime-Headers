@interface TSCEPartialResultMapByOffset : NSObject {
    struct unordered_map<unsigned int, TSCEPartialResult *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, TSCEPartialResult *>>> { struct __hash_table<std::__hash_value_type<unsigned int, TSCEPartialResult *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, TSCEPartialResult *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, TSCEPartialResult *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, TSCEPartialResult *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSCEPartialResult *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSCEPartialResult *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSCEPartialResult *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, TSCEPartialResult *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _mapByOffset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPartialResultTree:(id)a0;
- (id)partialResultForOffset:(unsigned int)a0;

@end
