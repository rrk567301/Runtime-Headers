@interface _NSDiffableDataSourceSnapshotter : _NSDiffableDataSource

- (id)emptySnapshot;
- (void)reloadFromSnapshot:(id)a0;
- (id)snapshot;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (void)applySnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;

@end
