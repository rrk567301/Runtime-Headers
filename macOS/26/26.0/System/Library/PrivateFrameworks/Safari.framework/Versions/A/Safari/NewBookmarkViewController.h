@class NSTextField, NSString, NSScrollView, NSArray, NSOutlineView, NSStackView, SafariWebBookmarkList, BookmarkFolderPickerMenuController, WebBookmarkLeaf;

@interface NewBookmarkViewController : NSViewController <BookmarkFolderPickerMenuControllerDelegate, BookmarksTableCellViewDelegate, NSOutlineViewDataSource, NSOutlineViewDelegate> {
    NSStackView *_mainStack;
    NSOutlineView *_outlineView;
    NSScrollView *_scrollView;
    NSTextField *_nameField;
    NSTextField *_addressField;
    NSTextField *_descriptionField;
    WebBookmarkLeaf *_addedBookmark;
    NSArray *_folderLocations;
    SafariWebBookmarkList *_selectedFolder;
    BookmarkFolderPickerMenuController *_folderPickerMenuController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear;
- (void)_setUp;
- (void).cxx_destruct;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (void)outlineView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 rowViewForItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)viewDidDisappear;
- (void)_closeWindow;
- (id)_allBookmarkRows;
- (id)_allRegisteredTokens;
- (void)_cancelAllPendingMetadataRequests;
- (long long)_cellTypeForFolder:(id)a0;
- (id)_cellViewForRow:(long long)a0;
- (void)_handleCancelButtonClick;
- (void)_handleDeleteButtonClick;
- (void)_handleDoneButtonClick;
- (id)_makeTextFieldWithPlaceholder:(id)a0;
- (void)_outlineRowWasClicked:(id)a0;
- (void)_setUpButtons;
- (void)_setUpEditBookmarkSection;
- (void)_setUpFolderChooserSection;
- (void)bookmarkFolderPickerMenuController:(id)a0 didPickBookmarkFolder:(id)a1;
- (void)bookmarksTableCellViewShouldReleaseMetadataRequest:(id)a0;
- (id)initWithBookmark:(id)a0 folderSuggestions:(id)a1;

@end
