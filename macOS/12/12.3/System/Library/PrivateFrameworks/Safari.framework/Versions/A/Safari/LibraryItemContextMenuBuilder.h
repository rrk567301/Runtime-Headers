@interface LibraryItemContextMenuBuilder : NSObject

@property (copy, nonatomic) id /* block */ renameHandler;
@property (copy, nonatomic) id /* block */ deleteHandler;
@property (copy, nonatomic) id /* block */ createTabGroupFromThisWindowHandler;
@property (copy, nonatomic) id /* block */ tabOverviewHandler;
@property (copy, nonatomic) id /* block */ copyLinksHandler;
@property (copy, nonatomic) id /* block */ goToTabHandler;
@property (copy, nonatomic) id /* block */ canGoToTabHandler;
@property (copy, nonatomic) id /* block */ userFacingTabCountForTabGroup;
@property (nonatomic) BOOL hideTabOverview;

- (void).cxx_destruct;
- (id)_renameMenuItem;
- (id)_deleteMenuItem;
- (id)buildLibraryItemMenuWithTabGroup:(id)a0;
- (id)_copyLinksMenuItemWithCount:(unsigned long long)a0;
- (id)_createTabGroupFromThisWindowMenuItem:(unsigned long long)a0;
- (id)_tabOverviewMenuItem;

@end
