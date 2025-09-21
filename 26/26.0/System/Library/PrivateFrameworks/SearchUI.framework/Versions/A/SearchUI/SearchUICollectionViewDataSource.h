@class SearchUICollectionViewController, NSMutableSet, NSString;

@interface SearchUICollectionViewDataSource : NSCollectionViewDiffableDataSource <SearchUIAsyncSectionLoaderDelegate>

@property (retain, nonatomic) NSMutableSet *registeredCellIdentifiers;
@property (copy, nonatomic) id /* block */ updateCompletionBlock;
@property (weak) SearchUICollectionViewController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)indexForSectionIdentifier:(id)a0;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)initWithController:(id)a0;
- (id)currentSnapshotLayoutConfiguration;
- (id)cellForRowModel:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)reloadModel;
- (void)rebuildSnapshotForAsyncLoaders:(id)a0;
- (void)applySnapshot:(id)a0 animated:(BOOL)a1 skipsDiffing:(BOOL)a2 completion:(id /* block */)a3;
- (id)customAccessibilityIdentifier:(id)a0 rowModel:(id)a1 axIdentifier:(id)a2 atIndexPath:(id)a3;
- (BOOL)deviceIsAuthenticated;
- (id)layoutSectionForSectionModel:(id)a0 layoutEnvironment:(id)a1 attributes:(id)a2;
- (id)pointerStringFrom:(id)a0;
- (id)rebuildAsyncLoaderResult:(id)a0 forCardSections:(id)a1;
- (id)rebuildSnapshot:(id)a0 replacingSectionModel:(id)a1 newSectionModel:(id)a2;
- (void)registerAllViewsForSnapshot:(id)a0;
- (void)registerCellForRowModel:(id)a0;
- (void)registerSupplementaryViews;
- (void)reloadSection:(id)a0 animated:(BOOL)a1;
- (void)reloadSection:(id)a0 animated:(BOOL)a1 reconfigureExisting:(BOOL)a2;
- (void)reloadSectionWithIdentifier:(id)a0 animated:(BOOL)a1 reconfigureExisting:(BOOL)a2;
- (void)removeRowModel:(id)a0 completion:(id /* block */)a1;
- (void)removeSectionContaining:(id)a0 completion:(id /* block */)a1;
- (void)removeSectionModel:(id)a0 completion:(id /* block */)a1;
- (id)reuseIdentifierForRowModel:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionsInsetsForSection:(id)a0 sectionIndex:(unsigned long long)a1 totalNumberOfSections:(long long)a2 attributes:(id)a3;
- (void)updateWithSnapshot:(id)a0;
- (void)updateWithSnapshot:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
