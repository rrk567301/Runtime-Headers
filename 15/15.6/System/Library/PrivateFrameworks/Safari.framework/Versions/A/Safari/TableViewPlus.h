@protocol TableViewPlusDelegate, TableViewPlusDataSource, TableViewPlusScrollDelegate;

@interface TableViewPlus : NSTableView {
    char _startEditTimerOnMouseUp;
    long long _clickedRow;
    long long _clickedColumn;
}

@property char preservesSelectionWhenDisplayingContextMenu;
@property (weak, nonatomic) id<TableViewPlusScrollDelegate> scrollDelegate;
@property (weak) id<TableViewPlusDelegate> delegate;
@property (weak) id<TableViewPlusDataSource> dataSource;

- (void).cxx_destruct;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (char)_userCanEditTableColumn:(id)a0 row:(long long)a1;
- (id)accessibilityActionNames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelOperation:(id)a0;
- (void)copy:(id)a0;
- (void)deselectAll:(id)a0;
- (void)deselectRow:(long long)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (unsigned long long)draggingSourceOperationMaskForLocal:(char)a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (char)resignFirstResponder;
- (void)selectAll:(id)a0;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(char)a1;
- (void)sizeToFit;
- (char)validateUserInterfaceItem:(id)a0;
- (void)viewDidEndLiveResize;
- (void)_cancelEditOnMouseUp;
- (void)_editClickedCell:(id)a0;
- (void)_notifyDelegateAboutSelectionChangeIfNeeded:(id)a0;
- (char)shouldEditOnDoubleClick:(id)a0 inRow:(long long)a1 tableColumn:(id)a2;
- (char)shouldEditOnSingleClick:(id)a0 inRow:(long long)a1 tableColumn:(id)a2;

@end
