@interface _NSBrowserMatrixColumnViewController : NSBrowserColumnViewController

- (void)setView:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)reloadData;
- (void)setDrawsBackground:(BOOL)a0;
- (void)loadView;
- (id)selectionIndexes;
- (void)setSelectionIndexes:(id)a0;
- (void)setAllowsTypeSelect:(BOOL)a0;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (void)setAllowsEmptySelection:(BOOL)a0;
- (BOOL)allowsTypeSelect;
- (long long)selectedRow;
- (void)setNeedsDisplayInRow:(long long)a0;
- (id)preparedCellAtRow:(long long)a0;
- (id)titleOfSelectedRow;
- (unsigned long long)numberOfRows;
- (void)scrollRowToCenter:(long long)a0;
- (BOOL)isExpandableRow:(long long)a0;
- (BOOL)isLeafRow:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfRow:(long long)a0;
- (long long)rowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)firstValidRowIndex;
- (long long)nextValidRowIndexAfterIndex:(long long)a0;
- (id)currentTypeSelectSearchString;
- (void)sizeToFitWidth:(double)a0;
- (void)didChangeColumnSize;
- (void)willBeginResizingColumn:(long long)a0;
- (void)didEndResizingColumn:(long long)a0;
- (double)widthThatFits;
- (id)dragImageForRowsWithIndexes:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsEmptySelection;
- (BOOL)drawsBackground;
- (id)matrix;
- (void)_matrixSelectAll:(id)a0;

@end
