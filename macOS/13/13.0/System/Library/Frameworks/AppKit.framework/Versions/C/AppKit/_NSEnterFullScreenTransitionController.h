@class NSString, NSArray, _NSFullScreenTransitionOverlayWindow, _NSFullScreenContentController, NSWindow;

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
@property (copy, nonatomic) NSString *desiredParentUUID;
@property (copy, nonatomic) NSString *placementAnchorSpaceUUID;
@property (nonatomic) long long placementDirection;

+ (id)enterTransitionForWindowID:(unsigned int)a0;
+ (id)enterTransitionForWindow:(id)a0;

- (void)dealloc;
- (void)start;
- (void)interrupt;
- (id)initWithWindow:(id)a0;
- (id)contentController;
- (BOOL)interrupted;
- (BOOL)shouldContentWindowBeVisible;
- (BOOL)usingAppKitTransition;
- (id)gatherParticipatingWindowNumbers;
- (id)maybeFilterParticipatingWindowNumbers:(id)a0 byScreen:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowFrame;
- (BOOL)startCustomTransition;
- (void)orderTransitionedWindowFront;
- (id)participatingWindowNumbers;
- (void)_startFullScreenTransition;
- (id)windowIDsForSnapshot;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateShadowDeltaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basedOnImage:(struct CGImage { } *)a2;
- (void)_captureBeforeSnapshot;
- (void)_captureAfterSnapshot;
- (void)_swapOriginalWindowWithOverlayWindow;
- (id)_gatherAfterTransitionWindowNumbers;
- (id)_getPossibleCustomWindowsForEnteringIntoFullScreen;
- (id)customWindowNumbers;
- (id)fullScreenTitle;
- (void)setupWindowForAfterFullScreenEnter;
- (void)associateWindowWithSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowAnimationTargetFrame;
- (void)doBeforeEnterFullScreen;
- (void)_doFinishedTransition;
- (void)doAfterEnterFullScreen;
- (void)failedToEnterFullScreen;
- (void)_setFloatingWindowTag:(BOOL)a0 forWindowNumbers:(id)a1;
- (void)_performFinalTransitionCleanup;
- (void)_moveWindowsToDestinationSpaceForNoAnimationCase;
- (void)_doSucceededToEnterFullScreen;
- (void)_doFailedToEnterFullScreen;
- (void)_performEnterFullScreen;
- (unsigned long long)_determineStartingSpaceID;

@end
