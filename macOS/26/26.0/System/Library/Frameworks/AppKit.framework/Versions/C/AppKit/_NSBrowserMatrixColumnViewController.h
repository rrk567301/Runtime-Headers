@interface _NSBrowserMatrixColumnViewController : NSBrowserColumnViewController

- (void)reloadData;
- (unsigned long long)numberOfRows;
- (void)loadView;
- (void)setDrawsBackground:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (BOOL)drawsBackground;
- (void)setView:(id)a0;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (BOOL)allowsMultipleSelection;
- (void)sizeToFitWidth:(double)a0;
- (void)_matrixSelectAll:(id)a0;
- (BOOL)allowsEmptySelection;
- (BOOL)allowsTypeSelect;
- (id)currentTypeSelectSearchString;
- (void)didChangeColumnSize;
- (void)didEndResizingColumn:(long long)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (long long)firstValidRowIndex;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfRow:(long long)a0;
- (BOOL)isExpandableRow:(long long)a0;
- (BOOL)isLeafRow:(long long)a0;
- (id)matrix;
- (long long)nextValidRowIndexAfterIndex:(long long)a0;
- (id)preparedCellAtRow:(long long)a0;
- (long long)rowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollRowToCenter:(long long)a0;
- (long long)selectedRow;
- (id)selectionIndexes;
- (void)setAllowsEmptySelection:(BOOL)a0;
- (void)setAllowsTypeSelect:(BOOL)a0;
- (void)setNeedsDisplayInRow:(long long)a0;
- (void)setSelectionIndexes:(id)a0;
- (id)titleOfSelectedRow;
- (double)widthThatFits;
- (void)willBeginResizingColumn:(long long)a0;

@end
