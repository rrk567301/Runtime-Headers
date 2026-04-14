@interface MUIMessageListDiffableDataSource : NSTableViewDiffableDataSource

- (id)indexPathForItemIdentifier:(id)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)indexForSectionIdentifier:(id)a0;
- (id)sectionIdentifierForIndex:(long long)a0;
- (void)applySnapshotUsingReloadData:(id)a0 completion:(id /* block */)a1;

@end
