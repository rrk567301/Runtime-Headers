@interface NSFontPanelTableView : NSTableView

- (void)mouseDown:(id)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (BOOL)_wantsUserCancelledOperation;
- (void)_accessibilitySelectRowsFromAccessibilityRows:(id)a0;
- (void)dragImage:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGSize { double x0; double x1; })a2 event:(id)a3 pasteboard:(id)a4 source:(id)a5 slideBack:(BOOL)a6;

@end
