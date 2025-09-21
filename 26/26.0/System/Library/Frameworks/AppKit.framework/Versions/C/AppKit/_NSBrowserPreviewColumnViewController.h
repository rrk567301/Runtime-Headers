@class NSViewController;

@interface _NSBrowserPreviewColumnViewController : NSBrowserColumnViewController

@property (retain, nonatomic) NSViewController *previewViewController;

- (void)reloadData;
- (unsigned long long)numberOfRows;
- (void)loadView;
- (void)setDrawsBackground:(BOOL)a0;
- (void)setMenu:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setRowHeight:(double)a0;
- (void)dealloc;
- (BOOL)drawsBackground;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (BOOL)allowsMultipleSelection;
- (double)rowHeight;
- (void)setRepresentedObject:(id)a0;
- (BOOL)allowsEmptySelection;
- (BOOL)allowsTypeSelect;
- (id)dragImageForRowsWithIndexes:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)editRow:(long long)a0 withEvent:(id)a1 select:(BOOL)a2;
- (long long)firstValidRowIndex;
- (long long)nextValidRowIndexAfterIndex:(long long)a0;
- (id)preparedCellAtRow:(long long)a0;
- (void)scrollRowToCenter:(long long)a0;
- (id)selectionIndexes;
- (void)setAllowsEmptySelection:(BOOL)a0;
- (void)setAllowsTypeSelect:(BOOL)a0;
- (void)setNeedsDisplayInRow:(long long)a0;
- (void)setSelectionIndexes:(id)a0;
- (id)titleOfSelectedRow;
- (double)widthThatFits;

@end
