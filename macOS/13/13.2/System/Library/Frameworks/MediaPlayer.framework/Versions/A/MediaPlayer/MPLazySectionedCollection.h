@class _MPLazySectionedCollectionStorage;
@protocol MPLazySectionedCollectionDataSource;

@interface MPLazySectionedCollection : MPSectionedCollection {
    _MPLazySectionedCollectionStorage *_storage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<MPLazySectionedCollectionDataSource> dataSource;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)firstItem;
- (id)firstSection;
- (id)lastSection;
- (id)itemAtIndexPath:(id)a0;
- (id)lastItem;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)allItems;
- (id)sectionAtIndex:(long long)a0;
- (id)allSections;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)_safeStateDumpObject;
- (id)_cachedObjectAtIndexPath:(id)a0;
- (void)_updateCacheWithObject:(id)a0 atIndexPath:(id)a1;

@end
