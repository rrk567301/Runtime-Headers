@class NSColor;

@interface ILMediaBrowserOutlineView : NSOutlineView {
    NSColor *_ILMBCellHighlightColor;
    NSColor *_ILMBCellTriangleColor;
    char _isInRestore;
    char _isInReload;
}

- (void)dealloc;
- (void)_drawOutlineCell:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (id)_highlightColorForCell:(id)a0;
- (void)_highlightOutlineCell:(id)a0 highlight:(char)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (char)_shouldAnimateExpandCollapse;
- (char)_shouldUseSecondaryHighlightColor;
- (char)acceptsFirstMouse:(id)a0;
- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;
- (void)copy:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)effectiveAppearanceDidChange;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (char)needsPanelToBecomeKey;
- (void)reloadData;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(char)a1;
- (void)selectNone:(id)a0;
- (id)_validateIndexes:(id)a0;
- (long long)clickedIndex;
- (id)expandedState;
- (char)isInReload;
- (char)isInRestore;
- (char)restoreExpandedStateWithArray:(id)a0;
- (char)restoreSelectedItemWithIdentifier:(id)a0;
- (void)setCustomHighlightColor:(id)a0;
- (void)setCustomTriangleColor:(id)a0;
- (void)setIsInReload:(char)a0;

@end
