@class _NSFullScreenContentController, NSWindowController, _NSFullScreenStorage, NSArray, NSScreen, _NSFullScreenTransitionOverlayWindow, NSMutableArray, NSWindow;

@interface _NSExitFullScreenTransitionController : _NSFullScreenTransitionController {
    NSWindow *_window;
    NSWindowController *_windowController;
    _NSFullScreenContentController *_contentController;
    NSArray *_customWindows;
    _NSFullScreenStorage *_fullScreenStorage;
    char _calledOutDidExitFullScreen;
    char _didReenterDoAfterExitFullScreen;
    char _isPrincipalInSpace;
    char _reducedMotion;
    unsigned long long _dockDestinationSpaceID;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _transitionedWindowBeforeSnapshotFrame;
    NSMutableArray *_backgroundWindowIDs;
    _NSFullScreenTransitionOverlayWindow *_overlayWindow;
    unsigned long long _destinationSpaceID;
    char _beforeSnapshotIncludesWindowIDs;
    id _beforeContents;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beforeSnapshotFrame;
    NSScreen *_screen;
    char _interrupted;
    char _notifiedWillExitFS;
    char _configuredForAfterFS;
    char _didPrepareToPerformExit;
    char _dockRepliedToExit;
    char _didDoAfterExitFullScreen;
}

@property (nonatomic) char doInProcessAnimation;
@property (nonatomic) double duration;
@property (nonatomic) char dockInitiated;
@property (nonatomic) char exitForClose;
@property (nonatomic) char skipCleaningUpSpaceOnClose;
@property (nonatomic) char exitForTabMove;
@property (nonatomic) char lastTabShouldCleanUpSpace;

+ (id)exitTransitionForSpace:(id)a0;
+ (id)exitTransitionForWindow:(id)a0;
+ (char)tracksActiveSpaceChanges;

- (void)dealloc;
- (void)start;
- (void)interrupt;
- (unsigned int)contentWindowID;
- (void)_captureAfterSnapshot;
- (void)_captureBeforeSnapshot;
- (void)_clearFullScreenBits;
- (unsigned long long)_desktopPictureSpaceID;
- (void)_doAfterExitFullScreen;
- (void)_doFailedToExitFullScreen;
- (void)_doSucceededToExitFullScreen;
- (id)_gatherAfterTransitionWindowNumbers;
- (id)_getPossibleCustomWindowsForExitingFullScreen;
- (void)_performExitFullScreen;
- (void)_startFullScreenTransition;
- (void)_swapOriginalWindowWithOverlayWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateShadowDeltaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basedOnImage:(struct CGImage { } *)a2;
- (id)_windowIDsForBeforeSnapshot;
- (struct CGImage { } *)captureAfterSnapshot;
- (struct CGImage { } *)captureBeforeSnapshot;
- (void)configureBeforeStarting;
- (id)contentController;
- (unsigned long long)destinationSpaceID;
- (void)doBeforeExitFullScreen;
- (void)failedToExitFullScreen;
- (id)fullScreenStorage;
- (id)gatherParticipatingWindowNumbers;
- (id)initForExitingContentController:(id)a0;
- (char)interrupted;
- (id)maybeFilterParticipatingWindowNumbers:(id)a0 byScreen:(id)a1;
- (void)orderTransitionedWindowFront;
- (id)participatingWindowNumbers;
- (void)prepareToExitFullScreenMode;
- (void)setupWindowForAfterFullScreenExit;
- (char)shouldContentWindowBeVisible;
- (char)startCustomTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowFrame;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowOffset;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowRadius;
- (char)usingAppKitTransition;
- (char)wantsExtendedDynamicRange;
- (id)windowIDsForSnapshot;

@end
