@class NSBrowserColumnViewController, NSBrowser;

@interface NSBrowserTableView : NSTableView {
    NSBrowserColumnViewController *_columnController;
    unsigned char _shouldSuppressDropHighlight : 1;
    unsigned char _isColumnControllerRetained : 1;
    unsigned char _usePrimaryColorForSelection : 1;
}

@property (readonly) NSBrowser *browser;
@property (readonly) long long columnIndex;
@property (nonatomic) NSBrowserColumnViewController *columnController;

- (void)dealloc;
- (void)mouseDown:(id)a0;
- (void)setNextKeyView:(id)a0;
- (BOOL)_onlyDragOnContent;
- (id)nextKeyView;
- (id)previousKeyView;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)preservesContentDuringLiveResize;
- (void)selectAll:(id)a0;
- (BOOL)_performTypeSelect:(id)a0;
- (void)_drawDropHighlight;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)draggingExited:(id)a0;
- (void)draggingEnded:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (id)_columnsForDragImage;
- (void)setShouldSuppressDropHighlight:(BOOL)a0;
- (void)_setUsePrimaryColorForSelection:(BOOL)a0;
- (BOOL)selectionShouldUsePrimaryColor;
- (void)_selectRowsFromArrowKey:(unsigned short)a0 withEvent:(id)a1;
- (void)_ivar_setClickedRow:(long long)a0 clickedColumn:(long long)a1;
- (struct CGSize { double x0; double x1; })_adjustFrameSizeToFitSuperview:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)_doImageDragUsingRowsWithIndexes:(id)a0 event:(id)a1 pasteboard:(id)a2 source:(id)a3 slideBack:(BOOL)a4 startRow:(long long)a5;
- (void)_drawDropHighlightBackgroundForRow:(long long)a0;
- (BOOL)_columnPositionsTheSame;
- (void)_primitiveSetPreviousKeyView:(id)a0;
- (BOOL)shouldSuppressDropHighlight;
- (BOOL)_delegateRespondsTo_nextTypeSelectMatchFromRow;
- (BOOL)_delegateRespondsTo_typeSelectStringForTableColumn;
- (BOOL)_delegateRespondsTo_shouldTypeSelectForEvent;
- (BOOL)_supportsVariableHeightRows;
- (id)_draggingSource;
- (BOOL)_dataSourceRespondsToWriteDragData;
- (BOOL)_dataSourceRespondsToNamesOfPromisedFilesDroppedAtDestination;
- (BOOL)_dataSourceRespondsToValidateDrop;
- (BOOL)_delegateRespondsToShouldTrackCell;
- (BOOL)_sendShouldTrackCell:(id)a0 forTableColumn:(id)a1 row:(long long)a2;
- (BOOL)_accessibilityWantsToBeList;
- (void)accessibilitySetSelectedChildrenAttribute:(id)a0;

@end
