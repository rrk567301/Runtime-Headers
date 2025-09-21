@class NSString, NSCache;

@interface _MPLazySectionedCollectionStorage : NSObject <NSObject> {
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; long long *__cap_; } _cachedNumberOfItemsInSections;
    long long _cachedNumberOfSections;
    BOOL _hasValidCachedNumberOfSections;
    NSCache *_itemsCache;
    struct map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> { struct __tree<std::__value_type<long, MPIdentifierSet *>, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>>, std::allocator<std::__value_type<long, MPIdentifierSet *>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _itemIdentifierSetMap;
    NSCache *_sectionsCache;
    struct map<long, MPIdentifierSet *, std::less<long>, std::allocator<std::pair<const long, MPIdentifierSet *>>> { struct __tree<std::__value_type<long, MPIdentifierSet *>, std::__map_value_compare<long, std::__value_type<long, MPIdentifierSet *>, std::less<long>>, std::allocator<std::__value_type<long, MPIdentifierSet *>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _sectionIdentifierSetMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_stateDumpObject;

@end
