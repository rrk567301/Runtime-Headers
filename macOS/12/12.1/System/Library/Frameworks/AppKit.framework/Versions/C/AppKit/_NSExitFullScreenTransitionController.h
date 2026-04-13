@class _NSFullScreenContentController, NSWindowController, _NSFullScreenStorage, NSArray, NSScreen, _NSFullScreenTransitionOverlayWindow, NSMutableArray, NSWindow;

@interface _NSExitFullScreenTransitionController : _NSFullScreenTransitionController {
    NSWindow *_window;
    NSWindowController *_windowController;
    _NSFullScreenContentController *_contentController;
    NSArray *_customWindows;
    _NSFullScreenStorage *_fullScreenStorage;
    BOOL _calledOutDidExitFullScreen;
    BOOL _didReenterDoAfterExitFullScreen;
    BOOL _isPrincipalInSpace;
    BOOL _reducedMotion;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _transitionedWindowBeforeSnapshotFrame;
    NSMutableArray *_backgroundWindowIDs;
    _NSFullScreenTransitionOverlayWindow *_overlayWindow;
    unsigned long long _destinationSpaceID;
    BOOL _beforeSnapshotIncludesWindowIDs;
    id _beforeContents;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beforeSnapshotFrame;
    NSScreen *_screen;
    BOOL _interrupted;
    BOOL _notifiedWillExitFS;
    BOOL _configuredForAfterFS;
    BOOL _didPrepareToPerformExit;
    BOOL _dockRepliedToExit;
    BOOL _didDoAfterExitFullScreen;
}

@property (nonatomic) BOOL doInProcessAnimation;
@property (nonatomic) double duration;
@property (nonatomic) BOOL dockInitiated;
@property (nonatomic) BOOL exitForClose;
@property (nonatomic) BOOL skipCleaningUpSpaceOnClose;
@property (nonatomic) BOOL exitForTabMove;
@property (nonatomic) BOOL lastTabShouldCleanUpSpace;

+ (id)exitTransitionForWindow:(id)a0;
+ (id)exitTransitionForSpace:(id)a0;

- (void)dealloc;
- (void)start;
- (void)interrupt;
- (id)participatingWindowNumbers;
- (id)contentController;
- (unsigned int)contentWindowID;
- (id)fullScreenStorage;
- (id)initForExitingContentController:(id)a0;
- (BOOL)usingAppKitTransition;
- (void)_clearFullScreenBits;
- (BOOL)interrupted;
- (void)orderTransitionedWindowFront;
- (void)_doAfterExitFullScreen;
- (BOOL)startCustomTransition;
- (void)_startFullScreenTransition;
- (void)_rebindAndReleaseDockAppointedAllSpaceWindows;
- (void)failedToExitFullScreen;
- (BOOL)shouldContentWindowBeVisible;
- (id)gatherParticipatingWindowNumbers;
- (id)maybeFilterParticipatingWindowNumbers:(id)a0 byScreen:(id)a1;
- (void)doBeforeExitFullScreen;
- (void)_doSucceededToExitFullScreen;
- (void)_doFailedToExitFullScreen;
- (id)windowIDsForSnapshot;
- (id)_windowIDsForBeforeSnapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowFrame;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowOffset;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowRadius;
- (unsigned long long)_desktopPictureSpaceID;
- (struct CGImage { } *)captureBeforeSnapshot;
- (struct CGImage { } *)captureAfterSnapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateShadowDeltaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basedOnImage:(struct CGImage { } *)a2;
- (unsigned long long)destinationSpaceID;
- (id)_getPossibleCustomWindowsForExitingFullScreen;
- (void)configureBeforeStarting;
- (void)_captureBeforeSnapshot;
- (void)prepareToExitFullScreenMode;
- (void)_swapOriginalWindowWithOverlayWindow;
- (void)setupWindowForAfterFullScreenExit;
- (void)_captureAfterSnapshot;
- (void)_performExitFullScreen;
- (id)_gatherAfterTransitionWindowNumbers;

@end
