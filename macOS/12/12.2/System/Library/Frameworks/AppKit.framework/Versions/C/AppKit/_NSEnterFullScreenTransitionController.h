@class NSArray, _NSFullScreenTransitionOverlayWindow, _NSFullScreenContentController, NSWindow;

@interface _NSEnterFullScreenTransitionController : _NSFullScreenTransitionController {
    NSWindow *_window;
    _NSFullScreenContentController *_contentController;
    NSArray *_customWindows;
    double _duration;
    BOOL _reducedMotion;
    BOOL _suppressImplicitFullScreenForOtherWindows;
    _NSFullScreenTransitionOverlayWindow *_overlayWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beforeSnapshotFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beforeShadowDelta;
    id _beforeContents;
    BOOL _interrupted;
    BOOL _configuredWindowForFS;
    BOOL _haveSpaceFromDock;
    BOOL _haveEnteredFS;
}

@property (nonatomic) unsigned long long toSpid;
@property (nonatomic) BOOL activeOverride;
@property (nonatomic) BOOL doInProcessAnimation;
@property (nonatomic) BOOL activate;
@property (nonatomic) BOOL enterForRestoration;
@property (nonatomic) BOOL nonAnimatingSlideAnimation;

+ (id)enterTransitionForWindowID:(unsigned int)a0;
+ (id)enterTransitionForWindow:(id)a0;

- (void)dealloc;
- (void)start;
- (void)interrupt;
- (id)participatingWindowNumbers;
- (id)contentController;
- (id)initWithWindow:(id)a0;
- (BOOL)usingAppKitTransition;
- (BOOL)interrupted;
- (void)orderTransitionedWindowFront;
- (BOOL)startCustomTransition;
- (void)_startFullScreenTransition;
- (void)_rebindAndReleaseDockAppointedAllSpaceWindows;
- (BOOL)shouldContentWindowBeVisible;
- (id)gatherParticipatingWindowNumbers;
- (id)maybeFilterParticipatingWindowNumbers:(id)a0 byScreen:(id)a1;
- (id)windowIDsForSnapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowFrame;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateShadowDeltaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basedOnImage:(struct CGImage { } *)a2;
- (void)_captureBeforeSnapshot;
- (void)_swapOriginalWindowWithOverlayWindow;
- (void)_captureAfterSnapshot;
- (id)_gatherAfterTransitionWindowNumbers;
- (void)_setFloatingWindowTag:(BOOL)a0 forWindowNumbers:(id)a1;
- (void)_doFinishedTransition;
- (void)_setOrClearAllSpaceBindings:(BOOL)a0;
- (void)_performFinalTransitionCleanup;
- (void)doAfterEnterFullScreen;
- (id)customWindowNumbers;
- (void)associateWindowWithSpace;
- (void)_moveWindowsToDestinationSpaceForNoAnimationCase;
- (void)failedToEnterFullScreen;
- (id)_createDockAppointedAllSpaceWindowNumsFromParticipatingWindowNumbers:(id)a0;
- (void)doBeforeEnterFullScreen;
- (void)_doSucceededToEnterFullScreen;
- (id)fullScreenTitle;
- (void)_doFailedToEnterFullScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowAnimationTargetFrame;
- (id)_getPossibleCustomWindowsForEnteringIntoFullScreen;
- (unsigned long long)_determineStartingSpaceID;
- (void)setupWindowForAfterFullScreenEnter;
- (void)_performEnterFullScreen;

@end
