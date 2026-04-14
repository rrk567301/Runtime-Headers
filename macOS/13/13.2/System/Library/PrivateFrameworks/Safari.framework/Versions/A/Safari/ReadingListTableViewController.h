@class NSView, NSString, NSArray, NSTimer, NSDate, SidebarTableCellView, ReadingListTableView, NSMenu, NSLayoutConstraint;
@protocol ReadingListTableViewContentProvider, ReadingListTableViewControllerDelegate;

@interface ReadingListTableViewController : NSViewController <SidebarSearchFieldDelegate, SidebarTableCellViewDelegate, ReadingListTableViewLiveResizeDelegate, ReadingListTableCellViewDelegate, TableViewPlusDelegate, TableViewPlusDataSource> {
    ReadingListTableView *_tableView;
    NSArray *_displayedItems;
    NSDate *_dateOfLastInitialContentUpdate;
    SidebarTableCellView *_tableCellViewForRowHeightCalculation;
    NSTimer *_coalescedTableViewReloadTimer;
    NSView *_spacerView;
    NSLayoutConstraint *_spacerViewHeightConstraint;
    NSMenu *_contextMenu;
}

@property (nonatomic) BOOL showsSearchFieldWrapperView;
@property (nonatomic) BOOL showAsOffline;
@property (weak, nonatomic) id<ReadingListTableViewControllerDelegate> delegate;
@property (weak, nonatomic) id<ReadingListTableViewContentProvider> contentProvider;
@property (readonly, nonatomic) unsigned long long displayedItemsCount;
@property (nonatomic, getter=isEditingTableView) BOOL editingTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldTypeSelectForEvent:(id)a1 withCurrentSearchString:(id)a2;
- (id)tableView:(id)a0 rowActionsForRow:(long long)a1 edge:(long long)a2;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (BOOL)tableView:(id)a0 shouldEditOnDoubleClick:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (BOOL)tableView:(id)a0 shouldEditOnSingleClick:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (id)tableView:(id)a0 menuForEvent:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (void)sidebarWillClose:(id)a0;
- (void)sidebarSearchFieldDidBecomeFirstResponder:(id)a0;
- (void)didPressTableCellView:(id)a0;
- (void)actionButtonClickedInTableCellView:(id)a0;
- (void)readingListTableCellViewDidChangeTitleOrPreviewText:(id)a0;
- (void)_rowClicked:(id)a0;
- (void)_itemsInDataSourceDidChange:(id)a0;
- (id)accessibilityDescriptionForTableCellView:(id)a0;
- (id)initWithContentProvider:(id)a0 initialSidebarBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)activateItemAtIndex:(long long)a0;
- (void)highlightRowByURLString:(id)a0;
- (void)highlightRowByItem:(id)a0;
- (void)reloadRowForItem:(id)a0;
- (void)scrollToBeginningOfContent;
- (id)_spacerViewAtAdjustedHeight;
- (void)openInNewWindow:(id)a0;
- (void)openInNewTab:(id)a0;
- (void)_setContentProvider:(id)a0 limitingDisplayedItemsBasedOnSidebarBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_itemForRow:(long long)a0;
- (id)_contextMenuBuilderForRow:(long long)a0 item:(id *)a1;
- (void)_notifyDelegateTableViewDidMoveToWindow;
- (id)_makeTableCellViewOfClass:(Class)a0;
- (void)_updateItemsWithAnimation:(BOOL)a0;
- (BOOL)_hasFinishedDisplayingInitialContent;
- (unsigned long long)_indexOfItemForURLString:(id)a0;
- (void)_highlightRowByIndex:(long long)a0;
- (id)_performDiffWithOldItems:(id)a0 newItems:(id)a1;
- (void)_updateTableView:(id)a0 withNewDisplayedItems:(id)a1;
- (BOOL)_isValidRowIndex:(long long)a0;
- (id)_adjustedIndexSetAccountingForDummyRow:(id)a0;
- (long long)_rowIndexOfItem:(id)a0;

@end
