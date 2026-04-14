@interface _NSOrderOutAnimationProxyWindow : NSWindow

- (BOOL)accessibilityIsIgnored;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (BOOL)_ignoreForFullScreenTransitionSnapshot;
- (long long)_orderOutAnimationType;
- (id)initWithSnapshotOfWindow:(id)a0;

@end
