@interface CCDifferentialUpdateCache : NSObject {
    struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<long long, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _unmodified_set;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addUnmodifiedSourceItemIdHash:(id)a0;
- (BOOL)hasUnmodifiedSourceItemIdHash:(id)a0;
- (unsigned long long)unmodifiedItemCount;

@end
