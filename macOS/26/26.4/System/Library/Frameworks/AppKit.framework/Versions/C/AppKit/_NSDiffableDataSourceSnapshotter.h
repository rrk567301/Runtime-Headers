@interface _NSDiffableDataSourceSnapshotter : _NSDiffableDataSource

- (id)emptySnapshot;
- (id)snapshot;
- (void)applySnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;

@end
