@interface UINSFullScreenSceneWindowController : UINSSceneWindowController {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finalWindowFrameForEnteringFullscreen_WithTitlebar;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finalWindowFrameForExitingFullscreen;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _savedPreFullScreenFrame;
    char _zoomToFitWhenFullScreen;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFullScreenFrame;

- (id)initWithWindow:(id)a0;
- (id)customWindowsToEnterFullScreenForWindow:(id)a0 onScreen:(id)a1;
- (id)customWindowsToExitFullScreenForWindow:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (void)window:(id)a0 startCustomAnimationToEnterFullScreenOnScreen:(id)a1 withDuration:(double)a2;
- (void)window:(id)a0 startCustomAnimationToExitFullScreenWithDuration:(double)a1;
- (struct CGSize { double x0; double x1; })window:(id)a0 willUseFullScreenContentSize:(struct CGSize { double x0; double x1; })a1;
- (Class)windowClass;
- (void)UINS_toggleZoomToFit:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForExitingFullScreen;
- (void)_prepareWindowPostLoadIsFirstWindow:(char)a0 transitionContext:(id)a1;
- (void)_showWindowPostLoadIsFirstWindow:(char)a0 transitionContext:(id)a1;
- (void)_updateForFullscreen:(char)a0 phase:(long long)a1;
- (void)_updateZoomingIsFullscreen:(char)a0;
- (double)_windowCornerRadius;

@end
