@class NSString, NSMutableArray, NSIndexSet;

@interface _NSBrowserTableColumnViewController : NSBrowserColumnViewController <NSTableViewDataSource, NSTableViewDelegate> {
    NSMutableArray *_selectedItems;
    NSIndexSet *_selectedIndexes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setView:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)reloadData;
- (id)tableView;
- (double)rowHeight;
- (void)setRowHeight:(double)a0;
- (void)setSelectionIndexes:(id)a0;
- (id)selectionIndexes;
- (void)synchSelectionCache;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (void)setAllowsEmptySelection:(BOOL)a0;
- (BOOL)allowsEmptySelection;
- (BOOL)allowsTypeSelect;
- (void)setAllowsTypeSelect:(BOOL)a0;
- (id)currentTypeSelectSearchString;
- (BOOL)_autoExpandItemUnderCursor;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)a0;
- (unsigned long long)numberOfRows;
- (long long)firstValidRowIndex;
- (long long)nextValidRowIndexAfterIndex:(long long)a0;
- (void)willBeginResizingColumn:(long long)a0;
- (void)didEndResizingColumn:(long long)a0;
- (void)didChangeColumnSize;
- (id)selectedItems;
- (void)reloadDataForRowIndexes:(id)a0;
- (void)scrollRowToCenter:(long long)a0;
- (id)titleOfSelectedRow;
- (id)preparedCellAtRow:(long long)a0;
- (void)editRow:(long long)a0 withEvent:(id)a1 select:(BOOL)a2;
- (void)setNeedsDisplayInRow:(long long)a0;
- (long long)rowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfRow:(long long)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (double)widthThatFits;
- (void)noteHeightOfRowsWithIndexesChanged:(id)a0;
- (BOOL)shouldAddColumnForSelection;
- (void)loadView;
- (void)_autoExpandFlashOnce;
- (void)_startAutoExpandingItemFlash;
- (void)_expandItemUnderMouse:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (BOOL)tableView:(id)a0 writeRowsWithIndexes:(id)a1 toPasteboard:(id)a2;
- (unsigned long long)tableView:(id)a0 validateDrop:(id)a1 proposedRow:(long long)a2 proposedDropOperation:(unsigned long long)a3;
- (BOOL)tableView:(id)a0 acceptDrop:(id)a1 row:(long long)a2 dropOperation:(unsigned long long)a3;
- (id)tableView:(id)a0 namesOfPromisedFilesDroppedAtDestination:(id)a1 forDraggedRowsWithIndexes:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (BOOL)tableView:(id)a0 shouldEditTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldShowCellExpansionForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 typeSelectStringForTableColumn:(id)a1 row:(long long)a2;
- (long long)tableView:(id)a0 nextTypeSelectMatchFromRow:(long long)a1 toRow:(long long)a2 forString:(id)a3;
- (BOOL)tableView:(id)a0 shouldTypeSelectForEvent:(id)a1 withCurrentSearchString:(id)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)_effectiveBranchImage;
- (void)_stopAutoExpandingFlash;
- (void)_cancelExpandItemUnderMouse;

@end
