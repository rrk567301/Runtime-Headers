@class NSTimer;
@protocol OutlineViewPlusDelegate, OutlineViewPlusDataSource;

@interface OutlineViewPlus : NSOutlineView <FieldEditorDFRAccessoryDisabling> {
    char _lockSelection;
    int _doubleClickTimerAction;
    NSTimer *_doubleClickTimer;
    long long _clickedRow;
    long long _clickedColumn;
}

@property (weak) id<OutlineViewPlusDelegate> delegate;
@property (weak) id<OutlineViewPlusDataSource> dataSource;
@property (nonatomic) char hidesSideSeparators;
@property (nonatomic) char acceptsFirstMouse;
@property (readonly, nonatomic) char wantsDFRAccessoriesInFieldEditor;

- (void)dealloc;
- (void).cxx_destruct;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)_updateSeparatorPositions;
- (char)_userCanEditTableColumn:(id)a0 row:(long long)a1;
- (char)acceptsFirstMouse:(id)a0;
- (id)accessibilityActionNames;
- (void)cancelOperation:(id)a0;
- (void)deselectRow:(long long)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(char)a0;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfOutlineCellAtRow:(long long)a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(char)a1;
- (void)sizeToFit;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_performDoubleClickTimerAction:(id)a0;
- (void)_cancelDoubleClickTimerAction;
- (char)selectionShouldChangeFromMouseDownInRow:(long long)a0 tableColumn:(id)a1;
- (char)shouldEditOnDoubleClick:(id)a0 inRow:(long long)a1 tableColumn:(id)a2;
- (char)shouldEditOnSingleClick:(id)a0 inRow:(long long)a1 tableColumn:(id)a2;

@end
