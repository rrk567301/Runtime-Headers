@class ITMediaItem;

@interface ITMediaCollection : ITMediaEntity {
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _persistentIDSet;
    unsigned long long _representativeItemPersistentID;
    ITMediaItem *_representativeItem;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) ITMediaItem *representativeItem;

- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (id).cxx_construct;
- (void)addIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)enumerateMediaItemsUsingBlock:(id /* block */)a0;
- (BOOL)hasIdentifier:(unsigned long long)a0;

@end
