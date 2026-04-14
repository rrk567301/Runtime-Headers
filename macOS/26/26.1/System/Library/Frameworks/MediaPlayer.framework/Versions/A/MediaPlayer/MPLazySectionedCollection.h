@class _MPLazySectionedCollectionStorage;
@protocol MPLazySectionedCollectionDataSource;

@interface MPLazySectionedCollection : MPSectionedCollection {
    _MPLazySectionedCollectionStorage *_storage;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    BOOL _disableMissingIdentifiersFaults;
}

@property (retain, nonatomic) id<MPLazySectionedCollectionDataSource> dataSource;

+ (BOOL)supportsSecureCoding;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allItems;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (id)firstItem;
- (long long)numberOfSections;
- (unsigned long long)hash;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)dealloc;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataSource:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)lastItem;
- (id)firstSection;
- (id)itemAtIndexPath:(id)a0;
- (id)lastSection;
- (id)sectionAtIndex:(long long)a0;
- (id)allSections;
- (id)allElementsEnumerator;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (void)_disableMissingIdentifiersFaults;
- (id)_safeStateDumpObject;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;

@end
