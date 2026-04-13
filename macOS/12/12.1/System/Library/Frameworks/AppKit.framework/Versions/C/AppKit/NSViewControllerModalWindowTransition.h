@interface NSViewControllerModalWindowTransition : NSViewControllerWindowTransition

- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (id)_makeWindowWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
