@class NSArray, __UIDiffableDataSourceSnapshot;

@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying>

@property (readonly, nonatomic) __UIDiffableDataSourceSnapshot *impl;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedSectionIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedItemIdentifiers;
@property (readonly, nonatomic) NSArray *reconfiguredItemIdentifiers;

- (long long)indexOfItemIdentifier:(id)a0;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (void)reconfigureItemsWithIdentifiers:(id)a0;
- (long long)numberOfItemsInSection:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0;
- (id)initWithState:(id)a0;
- (void)deleteAllItems;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (id)description;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (id)init;
- (long long)indexOfSectionIdentifier:(id)a0;
- (id)state;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (void)validateIdentifiers;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (id)indexPathForIdentifier:(id)a0;
- (id)_identifierBeforeIdentifier:(id)a0;
- (id)initWithImpl:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sectionGlobalItemRangeForSection:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)identifierForIndexPath:(id)a0;
- (id)_identifierAfterIdentifier:(id)a0;

@end
