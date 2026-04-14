@class NSViewController;

@interface _NSBrowserPreviewColumnViewController : NSBrowserColumnViewController

@property (retain, nonatomic) NSViewController *previewViewController;

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)reloadData;
- (void)setDrawsBackground:(BOOL)a0;
- (void)loadView;
- (double)rowHeight;
- (void)setRowHeight:(double)a0;
- (void)setMenu:(id)a0;
- (id)selectionIndexes;
- (void)setSelectionIndexes:(id)a0;
- (void)setAllowsTypeSelect:(BOOL)a0;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (void)setAllowsEmptySelection:(BOOL)a0;
- (BOOL)allowsTypeSelect;
- (void)setNeedsDisplayInRow:(long long)a0;
- (id)preparedCellAtRow:(long long)a0;
- (id)titleOfSelectedRow;
- (unsigned long long)numberOfRows;
- (void)scrollRowToCenter:(long long)a0;
- (long long)firstValidRowIndex;
- (long long)nextValidRowIndexAfterIndex:(long long)a0;
- (double)widthThatFits;
- (id)dragImageForRowsWithIndexes:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)editRow:(long long)a0 withEvent:(id)a1 select:(BOOL)a2;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsEmptySelection;
- (BOOL)drawsBackground;

@end
