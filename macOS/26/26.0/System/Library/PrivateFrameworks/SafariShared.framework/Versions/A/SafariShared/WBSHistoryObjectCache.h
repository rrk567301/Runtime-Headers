@interface WBSHistoryObjectCache : NSObject {
    struct unordered_map<long long, WBSHistoryItem *, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryItem *>>> { struct __hash_table<std::__hash_value_type<long long, WBSHistoryItem *>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryItem *>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, WBSHistoryItem *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryItem *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _itemsByDatabaseID;
    struct unordered_map<long long, WBSHistoryVisit *__weak, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, WBSHistoryVisit *__weak>>> { struct __hash_table<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, WBSHistoryVisit *__weak>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _weakVisitsByDatabaseID;
}

- (void)clear;
- (id)allItems;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)changeVisitIDs:(id)a0;
- (void)setVisit:(id)a0 forID:(long long)a1;
- (void)_clearNilReferences;
- (void)changeItemIDs:(id)a0;
- (id)itemForID:(long long)a0;
- (void)removeItemWithID:(long long)a0;
- (void)reserveItemCapacity:(long long)a0;
- (void)setItem:(id)a0 forID:(long long)a1;
- (id)visitForID:(long long)a0;

@end
