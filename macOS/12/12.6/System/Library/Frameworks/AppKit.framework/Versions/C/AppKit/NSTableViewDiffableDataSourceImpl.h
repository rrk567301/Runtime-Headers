@class __NSDiffableDataSourceSnapshot;
@protocol NSTableViewDiffableDataSourceProtocol;

@interface NSTableViewDiffableDataSourceImpl : __NSDiffableDataSource {
    __NSDiffableDataSourceSnapshot *_appliedSnapshot;
    __NSDiffableDataSourceSnapshot *_tableViewSnapshot;
    BOOL _hasSectionHeaders;
}

@property id<NSTableViewDiffableDataSourceProtocol> dataSource;

- (void)dealloc;
- (id)initWithTableView:(id)a0;
- (id)tableViewSnapshot;
- (void)applyDifferencesFromSnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)itemIdentifierForRow:(long long)a0;
- (long long)rowForItemIdentifier:(id)a0;
- (id)sectionIdentifierForRow:(long long)a0;
- (long long)rowForSectionIdentifier:(id)a0;
- (long long)numberOfItemsInSnapshot;
- (void)setTableViewSnapshot:(id)a0;
- (BOOL)hasSectionHeaderProvider;
- (void)setAppliedSnapshot:(id)a0;

@end
