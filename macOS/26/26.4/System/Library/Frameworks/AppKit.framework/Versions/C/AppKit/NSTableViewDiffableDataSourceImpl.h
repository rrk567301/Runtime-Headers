@class __NSDiffableDataSourceSnapshot;
@protocol NSTableViewDiffableDataSourceProtocol;

@interface NSTableViewDiffableDataSourceImpl : __NSDiffableDataSource {
    __NSDiffableDataSourceSnapshot *_appliedSnapshot;
    __NSDiffableDataSourceSnapshot *_tableViewSnapshot;
    BOOL _hasSectionHeaders;
}

@property id<NSTableViewDiffableDataSourceProtocol> dataSource;

- (id)initWithTableView:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (BOOL)hasSectionHeaderProvider;
- (id)itemIdentifierForRow:(long long)a0;
- (long long)numberOfItemsInSnapshot;
- (long long)rowForItemIdentifier:(id)a0;
- (long long)rowForSectionIdentifier:(id)a0;
- (id)sectionIdentifierForRow:(long long)a0;
- (void)setAppliedSnapshot:(id)a0;
- (void)setTableViewSnapshot:(id)a0;
- (id)tableViewSnapshot;

@end
