@class NSString, NSArray, NSTableView, NSOutlineView, WBSFaviconRequestsController;

@interface BookmarkChooser : NSWindowController <NSOutlineViewDataSource, NSOutlineViewDelegate, NSTableViewDataSource, NSTableViewDelegate> {
    WBSFaviconRequestsController *_tableRequestsController;
    WBSFaviconRequestsController *_outlineRequestsController;
    NSArray *_rootWebBookmarks;
}

@property (retain, nonatomic) NSTableView *collectionsTable;
@property (retain, nonatomic) NSOutlineView *contentsOutline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bookmarkChooser;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginSheetModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)tableViewSelectionIsChanging:(id)a0;
- (void)_cancel:(id)a0;
- (id)_chosenBookmark;
- (BOOL)_canChooseBookmark:(id)a0;
- (id)_collectionAtRow:(long long)a0;
- (void)_confirm:(id)a0;
- (void)_refreshAllFromNotification:(id)a0;
- (void)_refreshContentsFromCollectionChange;
- (void)_refreshDataPreservingSelection:(BOOL)a0;
- (id)_rootWebBookmarks;
- (id)_selectedCollection;
- (BOOL)_shouldEnableRowAtIndex:(unsigned long long)a0;
- (void)_startObservingBookmarkAndIconChanges;
- (void)_stopObservingBookmarkAndIconChanges;

@end
