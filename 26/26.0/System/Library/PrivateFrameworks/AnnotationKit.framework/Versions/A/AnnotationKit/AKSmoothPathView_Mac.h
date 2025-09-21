@interface AKSmoothPathView_Mac : AKSmoothPathView

- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)handleForwardedEvent:(id)a0;

@end
