@class UXView, NSString, PXStoryViewControllerTransition, PXSwipeDownTracker, PXUpdater, PXNumberAnimator, PXPointAnimator, PXStoryItemPlacement, PXStoryViewModel;

@interface PXStoryViewDismissalController : NSObject <PXChangeObserver>

@property (readonly, nonatomic) PXUpdater *updater;
@property (nonatomic) long long state;
@property (retain, nonatomic) PXStoryViewControllerTransition *viewControllerTransition;
@property (retain, nonatomic) UXView *referenceView;
@property (nonatomic) struct CGPoint { double x; double y; } initialGestureLocation;
@property (nonatomic) struct CGPoint { double x; double y; } currentGestureLocation;
@property (nonatomic) struct CGPoint { double x; double y; } currentGestureVelocity;
@property (retain, nonatomic) PXStoryItemPlacement *initialItemPlacement;
@property (retain, nonatomic) PXSwipeDownTracker *swipeDownTracker;
@property (retain, nonatomic) PXNumberAnimator *releaseAnimationProgressAnimator;
@property (retain, nonatomic) PXNumberAnimator *releaseAnimationDismissalProgressAnimator;
@property (retain, nonatomic) PXPointAnimator *centerOffsetAnimator;
@property (nonatomic) struct CGPoint { double x; double y; } targetCenter;
@property (nonatomic) struct CGSize { double width; double height; } sourceSize;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) BOOL targetCancelled;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateInitialItemPlacement;
- (void)_updateSwipeDownTracker;
- (void)_updateCurrentPlacement;
- (void)_invalidateInitialItemPlacement;
- (void)_invalidateSwipeDownTracker;
- (void)_invalidateCurrentPlacement;

@end
