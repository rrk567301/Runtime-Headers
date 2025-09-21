@class NSString, __NSDiffableDataSource;

@interface NSCollectionViewDiffableDataSource : NSObject <NSCollectionViewDataSource>

@property (retain, nonatomic) __NSDiffableDataSource *impl;
@property (copy) id /* block */ supplementaryViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)snapshot;
- (id)collectionView;
- (BOOL)_isDiffableDataSource;
- (void).cxx_destruct;
- (void)_applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (id)initWithCollectionView:(id)a0 itemProvider:(id /* block */)a1;

@end
