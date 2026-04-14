@interface NSFontPanelTableView : NSTableView

- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)_accessibilitySelectRowsFromAccessibilityRows:(id)a0;
- (BOOL)_wantsUserCancelledOperation;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)dragImage:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGSize { double x0; double x1; })a2 event:(id)a3 pasteboard:(id)a4 source:(id)a5 slideBack:(BOOL)a6;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;

@end
