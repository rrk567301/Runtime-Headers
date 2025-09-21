@interface NSFontPanelTableView : NSTableView {
    char _itemIsRemovable;
}

- (char)_shouldSlideBackAfterDragFailed;
- (void)_accessibilitySelectRowsFromAccessibilityRows:(id)a0;
- (char)_wantsUserCancelledOperation;
- (char)acceptsFirstMouse:(id)a0;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(char)a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (char)needsPanelToBecomeKey;
- (char)shouldDelayWindowOrderingForEvent:(id)a0;

@end
