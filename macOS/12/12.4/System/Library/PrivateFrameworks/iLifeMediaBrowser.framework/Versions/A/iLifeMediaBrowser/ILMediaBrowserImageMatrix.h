@class NSString, NSMutableArray;

@interface ILMediaBrowserImageMatrix : NSMatrix {
    NSMutableArray *selectedCells;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRect;
    BOOL mAllowMultipleSelection;
    BOOL mDisplaysToolTips;
    BOOL mDrawTitles;
    struct CGSize { double width; double height; } mImageCellSize;
    NSMutableArray *_contents;
    NSMutableArray *_contentImages;
    NSMutableArray *_contentTitles;
    id _observedObjectForContent;
    NSString *_observedKeyPathForContent;
    id _observedObjectForContentImages;
    NSString *_observedKeyPathForContentImages;
    id _observedObjectForContentTitles;
    NSString *_observedKeyPathForContentTitles;
}

+ (void)initialize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)resetCursorRects;
- (void)reloadData;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)copy:(id)a0;
- (id)selectionIndexes;
- (void)unbind:(id)a0;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (id)selectedCell;
- (id)selectedCells;
- (void)selectCellAtRow:(long long)a0 column:(long long)a1;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (void)selectAll:(id)a0;
- (void)selectCell:(id)a0;
- (BOOL)allowsMultipleSelection;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (void)deselectAllCells;
- (void)deselectAll:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (id)cellAtIndex:(unsigned long long)a0;
- (id)exposedBindings;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mode:(long long)a1 cellClass:(Class)a2 numberOfRows:(long long)a3 numberOfColumns:(long long)a4;
- (void)setCellsHaveTitle:(BOOL)a0;
- (void)setDisplaysToolTips:(BOOL)a0;
- (void)setImageCellSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsMouseMovedEventsForSkimming;
- (BOOL)wantsFlagsChangedEventsForSkimming;
- (BOOL)displaysToolTips;
- (void)selectNone:(id)a0;
- (long long)clickedIndex;
- (struct CGSize { double x0; double x1; })imageCellSize;
- (void)_dragSelectionWithEvent:(id)a0;
- (void)updateLayoutUsingMaxWidth:(long long)a0;
- (void)setDrawsTitles:(BOOL)a0;
- (id)realCells;
- (void)refreshCellsToContent;
- (void)viewBoundsDidChange:(id)a0;
- (long long)indexOfCell:(id)a0;
- (void)_selectCell:(id)a0;
- (void)deselectCell:(id)a0;
- (id)cellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_sortedSelectedCells;
- (id)_dragImageForCell:(id)a0 withBadgeCount:(long long)a1;
- (long long)numberOfColumnsForCurrentBounds;
- (BOOL)drawsTitles;

@end
