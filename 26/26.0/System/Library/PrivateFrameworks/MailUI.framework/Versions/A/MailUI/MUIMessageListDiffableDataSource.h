@protocol MUIMessageListProxyTableViewDataSource;

@interface MUIMessageListDiffableDataSource : NSTableViewDiffableDataSource

@property (weak, nonatomic) id<MUIMessageListProxyTableViewDataSource> proxyTableViewDataSource;

- (id)itemIdentifierForIndexPath:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (long long)indexForSectionIdentifier:(id)a0;
- (id)sectionIdentifierForIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 writeRowsWithIndexes:(id)a1 toPasteboard:(id)a2;
- (id)indexPathForRow:(long long)a0;
- (void)applySnapshotUsingReloadData:(id)a0 completion:(id /* block */)a1;
- (id)_indexPathForRow:(long long)a0 itemIdentifier:(id)a1;
- (id)indexPathsForPreparedItemsInCollectionView:(id)a0;
- (id)indexPathsForSelectedItemsInCollectionView:(id)a0;
- (id)itemIdentifiersForPreparedItemsInCollectionView:(id)a0;
- (id)sortedIndexPathsForPreparedItemsInCollectionView:(id)a0;

@end
