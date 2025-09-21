@class NSString, NSTimer, SSNotificationOverlayViewController, NSObject;
@protocol SSFadeViewDelegate;

@interface SSFadeView : NSView {
    float currentAlpha;
    BOOL wantsSpinner;
}

@property (retain) NSTimer *animationTimer;
@property (retain) SSNotificationOverlayViewController *overlayNotificationViewController;
@property NSObject<SSFadeViewDelegate> *delegate;
@property BOOL wantsSpinner;
@property float maxAlpha;
@property (retain) NSString *message;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)addStaticViewWithMessage:(id)a0 image:(id)a1;
- (void)animateFadeOut:(id)a0;
- (void)addOverlayBoxWithMessage:(id)a0;
- (void)addSpinnerView;
- (void)animateFadeIn:(id)a0;
- (void)updateFrameAndRedraw;
- (void)viewDidBecomeOverlay;
- (void)viewWillResignOverlay:(BOOL)a0;

@end
