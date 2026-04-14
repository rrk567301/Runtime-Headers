@interface _NSOrderOutAnimationProxyWindow : NSWindow

- (BOOL)accessibilityIsIgnored;
- (id)initWithSnapshotOfWindow:(id)a0;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (long long)_orderOutAnimationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (BOOL)_ignoreForFullScreenTransitionSnapshot;

@end
