@class NSColor;

@interface ILMediaBrowserOutlineView : NSOutlineView {
    NSColor *_ILMBCellHighlightColor;
    NSColor *_ILMBCellTriangleColor;
    BOOL _isInRestore;
    BOOL _isInReload;
}

- (void)dealloc;
- (id)backgroundColor;
- (void)reloadData;
- (BOOL)acceptsFirstResponder;
- (void)copy:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (id)menuForEvent:(id)a0;
- (id)_highlightColorForCell:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)_highlightOutlineCell:(id)a0 highlight:(BOOL)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (BOOL)_shouldAnimateExpandCollapse;
- (void)_drawOutlineCell:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (BOOL)_shouldUseSecondaryHighlightColor;
- (void)effectiveAppearanceDidChange;
- (void)setCustomHighlightColor:(id)a0;
- (void)setCustomTriangleColor:(id)a0;
- (void)selectNone:(id)a0;
- (long long)clickedIndex;
- (id)_validateIndexes:(id)a0;
- (id)expandedState;
- (BOOL)restoreExpandedStateWithArray:(id)a0;
- (BOOL)isInRestore;
- (void)setIsInReload:(BOOL)a0;
- (BOOL)isInReload;
- (BOOL)restoreSelectedItemWithIdentifier:(id)a0;

@end
