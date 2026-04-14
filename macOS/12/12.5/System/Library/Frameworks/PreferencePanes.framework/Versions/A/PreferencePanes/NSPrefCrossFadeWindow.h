@class NSMutableArray, NSPrefCrossFadeWindowMoveHelper;

@interface NSPrefCrossFadeWindow : NSWindow {
    NSMutableArray *mAnimatedViews;
    NSPrefCrossFadeWindowMoveHelper *mMoveHelper;
}

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 animate:(BOOL)a2;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addAnimatedView:(id)a0;
- (void)removeAnimatedView:(id)a0;
- (id)animatedViews;

@end
