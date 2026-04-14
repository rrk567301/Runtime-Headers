@interface AKSmoothPathView_Mac : AKSmoothPathView

- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)handleForwardedEvent:(id)a0;

@end
