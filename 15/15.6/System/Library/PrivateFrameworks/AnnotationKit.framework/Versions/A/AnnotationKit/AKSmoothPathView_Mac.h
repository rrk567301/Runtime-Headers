@interface AKSmoothPathView_Mac : AKSmoothPathView

- (char)acceptsFirstMouse:(id)a0;
- (char)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)mouseDownCanMoveWindow;
- (void)viewDidMoveToWindow;
- (void)handleForwardedEvent:(id)a0;

@end
