@class NSViewController, NSScrollView, SSCallTrackingView, NSLayoutConstraint, NSVisualEffectView, NSWindow;

@interface SSCallTrackingWindow : NSWindow <SSCallTrackingViewDelegate>

@property (retain) NSWindow *window;
@property (retain) NSViewController *callViewController;
@property (retain) NSLayoutConstraint *remoteContentLeading;
@property (retain) NSLayoutConstraint *remoteContentTrailing;
@property (retain) NSLayoutConstraint *remoteContentTop;
@property (retain) NSLayoutConstraint *remoteContentBottom;
@property double wfLeadingAdjust;
@property double wfTrailingAdjust;
@property double wfTopAdjust;
@property double wfBottomAdjust;
@property double rcLeadingAdjust;
@property double rcTrailingAdjust;
@property double rcTopAdjust;
@property double rcBottomAdjust;
@property (retain) NSLayoutConstraint *trackingAreaLeading;
@property (retain) NSLayoutConstraint *trackingAreaTrailing;
@property (retain) NSLayoutConstraint *trackingAreaTop;
@property (retain) NSLayoutConstraint *trackingAreaBottom;
@property BOOL setInitialSize;
@property BOOL exitFullScreenTransition;
@property NSVisualEffectView *backgroundView;
@property NSLayoutConstraint *backgroundViewTop;
@property (retain) NSScrollView *scrollView;
@property (retain) SSCallTrackingView *trackingView;
@property BOOL persistentChrome;
@property BOOL slowAnimation;
@property double contentCornerRadius;

- (void)dealloc;
- (void)close;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })scrollPosition;
- (void)setActualSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)scrollbarActive;
- (void)scrollToPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollToCenter;
- (void)disableScrollbars;
- (void)showTitlebar;
- (void)hideTitlebar;
- (void)setupWithCallViewController:(id)a0;
- (void)disallowSharePlaySelection;
- (BOOL)isWindowFullScreen;
- (BOOL)isWindowTiledFullScreen;
- (void)setEffectFullScreen:(BOOL)a0;
- (void)setEffectHovering:(BOOL)a0;
- (BOOL)hasExtraChrome;
- (BOOL)isTitlebarShowing;
- (void)setConstraintValues;
- (void)prepareToExitFullScreen;
- (void)finishExitFullScreen;
- (void)setConstraintAdjustmentValuesForShowTitlebar;
- (void)setConstraintAdjustmentValuesForChromeless;
- (void)setConstraintAdjustmentForChromeless;
- (void)setCornerRadiusForContentSize:(struct CGSize { double x0; double x1; })a0 zoomFactor:(double)a1 zoomToFit:(BOOL)a2;
- (long long)scrollbarWidth;
- (void)postResizeSetScrollbars:(struct CGSize { double x0; double x1; })a0 zoomToFit:(BOOL)a1 zoomFactorChanged:(BOOL)a2;
- (void)setRemoteContentSize:(struct CGSize { double x0; double x1; })a0 inOutProposedWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 zoomToFit:(BOOL)a2 zoomFactor:(double)a3;
- (struct CGSize { double x0; double x1; })whatWouldZoomToFitDoWithSize:(struct CGSize { double x0; double x1; })a0;

@end
