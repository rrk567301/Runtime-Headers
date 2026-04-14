@class NSString, ReadingListTableViewController, BrowserWindowController;

@interface ReadingListSidebarViewControllerBase : NSViewController <SidebarContentViewController>

@property (retain, nonatomic) ReadingListTableViewController *tableViewController;
@property (weak, nonatomic) BrowserWindowController *windowController;
@property (readonly, nonatomic) BOOL canSelectAnyReadingListItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)wasInstalledBySidebarViewController:(id)a0;
- (void)selectNextReadingListItem;
- (void)selectPreviousReadingListItem;
- (id)_readingListTableView;
- (void)selectCurrentlyLoadedReadingListItem;
- (void)_selectReadingListItemWithRowIndexFromBlock:(id /* block */)a0;

@end
