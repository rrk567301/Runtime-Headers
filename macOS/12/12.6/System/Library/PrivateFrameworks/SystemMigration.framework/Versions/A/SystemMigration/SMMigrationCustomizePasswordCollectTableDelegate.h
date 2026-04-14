@class SMMigrationCustomizeViewController;

@interface SMMigrationCustomizePasswordCollectTableDelegate : IASCommonViewBasedTableDelegate

@property SMMigrationCustomizeViewController *controller;

- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)makeNewCellViewWithIdentifier:(id)a0 forTableView:(id)a1;
- (id)viewIdenfierForTableView:(id)a0 andRow:(long long)a1;
- (void)pressedPasswordButton:(id)a0;
- (void)pressedPromoteToAdminButton:(id)a0;

@end
