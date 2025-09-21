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
- (struct CGSize { double x0; double x1; })_adjustFrameSizeToFitSuperview:(struct CGSize { double x0; double x1; })a0;
- (id)_draggingSource;
- (char)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)draggingExited:(id)a0;
- (void)setNextKeyView:(id)a0;
- (void)setShouldSuppressDropHighlight:(char)a0;
- (id)previousKeyView;
- (char)_accessibilityWantsToBeList;
- (char)_columnPositionsTheSame;
- (id)_columnsForDragImage;
- (char)_dataSourceRespondsToNamesOfPromisedFilesDroppedAtDestination;
- (char)_dataSourceRespondsToValidateDrop;
- (char)_dataSourceRespondsToWriteDragData;
- (char)_delegateRespondsToShouldTrackCell;
- (char)_delegateRespondsTo_nextTypeSelectMatchFromRow;
- (char)_delegateRespondsTo_shouldTypeSelectForEvent;
- (char)_delegateRespondsTo_typeSelectStringForTableColumn;
- (void)_doImageDragUsingRowsWithIndexes:(id)a0 event:(id)a1 pasteboard:(id)a2 source:(id)a3 slideBack:(char)a4 startRow:(long long)a5;
- (void)_drawDropHighlight;
- (void)_drawDropHighlightBackgroundForRow:(long long)a0;
- (void)_ivar_setClickedRow:(long long)a0 clickedColumn:(long long)a1;
- (char)_onlyDragOnContent;
- (char)_performTypeSelect:(id)a0;
- (void)_primitiveSetPreviousKeyView:(id)a0;
- (void)_selectRowsFromArrowKey:(unsigned short)a0 withEvent:(id)a1;
- (char)_sendShouldTrackCell:(id)a0 forTableColumn:(id)a1 row:(long long)a2;
- (void)_setUsePrimaryColorForSelection:(char)a0;
- (char)_supportsVariableHeightRows;
- (void)accessibilitySetSelectedChildrenAttribute:(id)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingSourceOperationMaskForLocal:(char)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (id)nextKeyView;
- (char)performDragOperation:(id)a0;
- (char)preservesContentDuringLiveResize;
- (char)resignFirstResponder;
- (void)selectAll:(id)a0;
- (char)selectionShouldUsePrimaryColor;
- (char)shouldSuppressDropHighlight;

@end
