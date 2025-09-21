@interface GEOTileCacheReserved : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _reservedLock;
    struct list<CacheItem, std::allocator<CacheItem>> { struct __list_node_base<CacheItem, void *> { void *__prev_; void *__next_; } __end_; unsigned long long __size_; } _reservedList;
    struct unordered_map<_GEOTileKey, std::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::allocator<std::pair<const _GEOTileKey, std::__list_iterator<CacheItem, void *>>>> { struct __hash_table<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, hashkey, eqkey>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, eqkey, hashkey>, std::allocator<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::__list_iterator<CacheItem, void *>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _reservedMap;
    unsigned long long _reservedMaxCapacity;
    unsigned long long _reservedMaxCost;
    unsigned long long _reservedCurrentCost;
    unsigned long long _reservedCurrentCount;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
