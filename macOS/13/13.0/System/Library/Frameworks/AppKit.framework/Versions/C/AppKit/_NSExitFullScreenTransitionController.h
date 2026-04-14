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
    unsigned long long _dockDestinationSpaceID;
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

+ (id)exitTransitionForSpace:(id)a0;
+ (id)exitTransitionForWindow:(id)a0;

- (void)dealloc;
- (void)start;
- (void)interrupt;
- (id)contentController;
- (unsigned int)contentWindowID;
- (id)initForExitingContentController:(id)a0;
- (BOOL)interrupted;
- (BOOL)shouldContentWindowBeVisible;
- (BOOL)usingAppKitTransition;
- (void)prepareToExitFullScreenMode;
- (void)setupWindowForAfterFullScreenExit;
- (id)_getPossibleCustomWindowsForExitingFullScreen;
- (id)gatherParticipatingWindowNumbers;
- (id)maybeFilterParticipatingWindowNumbers:(id)a0 byScreen:(id)a1;
- (void)doBeforeExitFullScreen;
- (void)_clearFullScreenBits;
- (void)_doAfterExitFullScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowFrame;
- (BOOL)startCustomTransition;
- (void)failedToExitFullScreen;
- (id)fullScreenStorage;
- (void)orderTransitionedWindowFront;
- (id)participatingWindowNumbers;
- (void)_startFullScreenTransition;
- (void)_doSucceededToExitFullScreen;
- (void)_doFailedToExitFullScreen;
- (void)_performExitFullScreen;
- (id)windowIDsForSnapshot;
- (id)_windowIDsForBeforeSnapshot;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowOffset;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowRadius;
- (unsigned long long)destinationSpaceID;
- (unsigned long long)_desktopPictureSpaceID;
- (struct CGImage { } *)captureBeforeSnapshot;
- (struct CGImage { } *)captureAfterSnapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateShadowDeltaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basedOnImage:(struct CGImage { } *)a2;
- (void)_captureBeforeSnapshot;
- (void)_captureAfterSnapshot;
- (void)_swapOriginalWindowWithOverlayWindow;
- (id)_gatherAfterTransitionWindowNumbers;
- (void)configureBeforeStarting;

@end
