@interface AKSmoothPathView_Mac : AKSmoothPathView

- (BOOL)acceptsFirstResponder;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)handleForwardedEvent:(id)a0;

@end
