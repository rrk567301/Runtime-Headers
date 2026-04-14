@class PXStoryModel, PXMediaProvider, PXUpdater, NSObject, NSMutableArray, PXStoryViewDismissalController, PXStoryViewLayout, NSString, PXStoryTransitionableTungstenViewManager, PXGView, NSTrackingArea, PXApplicationDisabledIdleTimerToken, PXStoryViewModel;
@protocol OS_dispatch_queue, PXStoryPacingTimeSource;

@interface PXStoryView : UXView <PXStoryQueueParticipant, PXChangeObserver, PXTapToRadarDiagnosticProvider>

@property (class, readonly, nonatomic) NSString *allDiagnosticDescriptions;

@property (retain, nonatomic) PXStoryModel *mainModel;
@property (readonly, nonatomic) id<PXStoryPacingTimeSource> timeSource;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXStoryViewLayout *viewLayout;
@property (nonatomic) BOOL shouldPreventDisplaySleep;
@property (retain, nonatomic) PXApplicationDisabledIdleTimerToken *preventedDisplaySleepToken;
@property (nonatomic) BOOL isTouching;
@property (readonly, nonatomic) NSMutableArray *lastDemotedDisplayAssets;
@property (readonly, nonatomic) BOOL shouldAppyBackgroundColorToTungstenView;
@property (readonly, nonatomic) PXStoryViewDismissalController *dismissalController;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) PXGView *tungstenView;
@property (readonly, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager;
@property (readonly, nonatomic) id mainItemReference;
@property (nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)dumpTapToRadarDiagnosticAttachmentsToURL:(id)a0;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (void)keyDown:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)insertNewline:(id)a0;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (void)mouseUp:(id)a0;
- (void)insertText:(id)a0;
- (BOOL)_isRTL;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)layoutSubviews;
- (void)togglePlayback:(id)a0;
- (void)_updateBackgroundColor;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateGestureRecognizers;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)_invalidateMainModel;
- (void)_updateMainModel;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)_initializeGestureRecognizers;
- (void)_moveLeftAfterEdgeTap:(BOOL)a0;
- (void)_moveRightAfterEdgeTap:(BOOL)a0;
- (void)_skipToSegmentWithOffset:(long long)a0 afterEdgeTap:(BOOL)a1;
- (BOOL)_handlePrimaryInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleRelatedKeyboardNavigation:(unsigned long long)a0;
- (void)_handleEdgeTap:(unsigned long long)a0;
- (id)_storyHitTestResultAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_togglePlayback;
- (void)_toggleChrome;
- (void)_hideRelatedOverlay;
- (void)_changeStyle;
- (void)_changeColorGrade;
- (void)_changeOverallDuration:(long long)a0;
- (void)_invalidateGestureRecognizers;
- (void)_invalidateShouldPreventDisplaySleep;
- (void)_updateShouldPreventDisplaySleep;
- (void)_invalidateBackgroundColor;
- (void)_startTrackingMouse;

@end
