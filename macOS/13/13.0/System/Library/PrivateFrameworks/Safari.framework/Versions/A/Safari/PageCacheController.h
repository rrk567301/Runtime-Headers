@class NSMutableArray, NSOutlineView, NSButton, NSMatrix;

@interface PageCacheController : NSWindowController <ReopensAtLaunch> {
    NSMatrix *pageCacheStatisticsMatrix;
    NSOutlineView *outlineView;
    NSButton *pageCacheEnabledCheckbox;
    NSMutableArray *frameItems;
}

+ (id)sharedPageCacheController;
+ (void)reopen;

- (void).cxx_destruct;
- (id)windowNibName;
- (void)windowDidLoad;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)showWindow:(id)a0;
- (void)togglePageCacheEnabled:(id)a0;
- (void)forceAutorelease:(id)a0;
- (void)refreshCacheability:(id)a0;
- (void)refreshOverview:(id)a0;

@end
