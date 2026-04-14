@interface WebAppWindow : Window

- (long long)animationBehavior;
- (void)awakeFromNib;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)_matchFrameWithOverrideRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })overrideFrameToStaggerFrom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })overrideWindowRect;

@end
