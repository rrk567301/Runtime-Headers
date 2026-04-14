@class CALayer, NSWindow;

@interface FI_TBrowserViewSwitchAnimator : NSObject {
    NSWindow *_parentWindow;
    NSWindow *_coverWindow;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> { struct CGImage *fRef; } _initialBrowserImage;
    CALayer *_initialBrowserLayer;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> { struct CGImage *fRef; } _finalBrowserImage;
    CALayer *_finalBrowserLayer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setParentWindow:(id)a0;
- (void)aboutToTearDown;
- (void)hideCoverWindow;
- (id)createCoverWindowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initialBrowserLayer;
- (void)setInitialBrowserImage:(struct CGImage { } *)a0;
- (void)setFinalBrowserImage:(struct CGImage { } *)a0;
- (id)finalBrowserLayer;
- (void)showCoverWindowWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateTransition;

@end
