@interface _NSBrowserMatrixColumnViewController : NSBrowserColumnViewController

- (void)setView:(id)a0;
- (char)drawsBackground;
- (void)sizeToFitWidth:(double)a0;
- (void)_matrixSelectAll:(id)a0;
- (char)allowsEmptySelection;
- (char)allowsMultipleSelection;
- (char)allowsTypeSelect;
- (id)currentTypeSelectSearchString;
- (void)didChangeColumnSize;
- (void)didEndResizingColumn:(long long)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (long long)firstValidRowIndex;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfRow:(long long)a0;
- (char)isExpandableRow:(long long)a0;
- (char)isLeafRow:(long long)a0;
- (void)loadView;
- (id)matrix;
- (long long)nextValidRowIndexAfterIndex:(long long)a0;
- (unsigned long long)numberOfRows;
- (id)preparedCellAtRow:(long long)a0;
- (void)reloadData;
- (long long)rowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollRowToCenter:(long long)a0;
- (long long)selectedRow;
- (id)selectionIndexes;
- (void)setAllowsEmptySelection:(char)a0;
- (void)setAllowsMultipleSelection:(char)a0;
- (void)setAllowsTypeSelect:(char)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setDrawsBackground:(char)a0;
- (void)setNeedsDisplayInRow:(long long)a0;
- (void)setSelectionIndexes:(id)a0;
- (id)titleOfSelectedRow;
- (double)widthThatFits;
- (void)willBeginResizingColumn:(long long)a0;

@end
