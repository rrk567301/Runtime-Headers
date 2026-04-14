@class NSArray, __NSDiffableDataSource;

@interface _NSDiffableDataSource : NSObject {
    __NSDiffableDataSource *_dsImpl;
}

@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *itemIdentifiers;

- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (void)insertSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)appendSectionWithIdentifier:(id)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (void)insertSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (id)snapshot;
- (void)deleteAllItems;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (void)appendItemsWithIdentifiers:(id)a0;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;
- (long long)indexOfSectionIdentifier:(id)a0;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (long long)numberOfItemsInSection:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)reconfigureItemsWithIdentifiers:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (long long)indexOfItemIdentifier:(id)a0;
- (void)applySnapshot:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (id)_impl;
- (void).cxx_destruct;
- (id)initWithViewUpdatesSink:(id)a0;
- (void)reloadFromSnapshot:(id)a0;
- (id)emptySnapshot;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (id)dsImpl;
- (id)initWithDiffableDataSource:(id)a0;
- (id)initWithNSCollectionView:(id)a0 itemProvider:(id /* block */)a1;

@end
