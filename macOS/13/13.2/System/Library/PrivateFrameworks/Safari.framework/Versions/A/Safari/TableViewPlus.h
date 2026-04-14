@protocol TableViewPlusDelegate, TableViewPlusDataSource, TableViewPlusScrollDelegate;

@interface TableViewPlus : NSTableView {
    BOOL _startEditTimerOnMouseUp;
    long long _clickedRow;
    long long _clickedColumn;
}

@property BOOL preservesSelectionWhenDisplayingContextMenu;
@property (weak, nonatomic) id<TableViewPlusScrollDelegate> scrollDelegate;
@property (weak) id<TableViewPlusDelegate> delegate;
@property (weak) id<TableViewPlusDataSource> dataSource;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)accessibilityActionNames;
- (void)sizeToFit;
- (void)copy:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (void)selectAll:(id)a0;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (id)menuForEvent:(id)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)cancelOperation:(id)a0;
- (void)viewDidEndLiveResize;
- (BOOL)_userCanEditTableColumn:(id)a0 row:(long long)a1;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)deselectAll:(id)a0;
- (void)deselectRow:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldEditOnDoubleClick:(id)a0 inRow:(long long)a1 tableColumn:(id)a2;
- (BOOL)shouldEditOnSingleClick:(id)a0 inRow:(long long)a1 tableColumn:(id)a2;
- (void)_editClickedCell:(id)a0;
- (void)_cancelEditOnMouseUp;
- (void)_notifyDelegateAboutSelectionChangeIfNeeded:(id)a0;

@end
