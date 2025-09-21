@class NSMutableDictionary;

@interface PHASESoundEventNodeAsset : PHASEAsset {
    struct unique_ptr<Phase::ActionTree, std::default_delete<Phase::ActionTree>> { struct ActionTree *__ptr_; } _actionTreeOwnedAsset;
    const void *_actionTreeReference;
    struct unordered_map<unsigned long long, std::deque<int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::deque<int>>>> { struct __hash_table<std::__hash_value_type<unsigned long long, std::deque<int>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::deque<int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::deque<int>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::deque<int>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _randomHistory;
}

@property (readonly, nonatomic) NSMutableDictionary *streamNodeFormats;

+ (id)new;

- (unsigned long long)sizeInBytes;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)getActionTree;
- (void *)getRandomHistory:(unsigned long long)a0;
- (id)initWithUID:(id)a0 actionTreeWeakReference:(const void *)a1 assetRegistry:(id)a2 weakStringPoolReference:(void *)a3 details:(id)a4;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1 weakStringPoolReference:(void *)a2;
- (id)initWithUID:(id)a0 ownedActionTree:(struct unique_ptr<Phase::ActionTree, std::default_delete<Phase::ActionTree>> { struct ActionTree *x0; })a1 assetRegistry:(id)a2 weakStringPoolReference:(void *)a3 details:(id)a4;

@end
