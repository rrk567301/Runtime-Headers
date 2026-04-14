@class PXStoryViewControllerTransition, PXStoryViewModeTransition, PXRegionOfInterest, PXStoryViewModel, UXViewController, PXNumberAnimator;

@interface PXStoryViewControllerViewModelTransitionsCoordinator : PXStoryController

@property (readonly, nonatomic) PXNumberAnimator *dismissalPreviewFraction;
@property (nonatomic) BOOL isDismissalPreviewFractionInitialized;
@property (retain, nonatomic) PXStoryViewControllerTransition *dismissalTransition;
@property (retain, nonatomic) PXStoryViewModeTransition *viewModeTransition;
@property (nonatomic) double viewModeTransitionStartTime;
@property (retain, nonatomic) PXRegionOfInterest *fullsizeContentBoundingBox;
@property (nonatomic) BOOL isDismisallTriggered;
@property (nonatomic) BOOL isPreparedForDismissal;
@property (nonatomic) BOOL isFinishingDismissal;
@property (nonatomic) BOOL shouldFinish;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, weak, nonatomic) UXViewController *viewController;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_updateViewModeTransition;
- (void)_invalidateViewModeTransition;
- (void)_updateDesiredDismissalState;
- (void)_updateViewControllerDismissalTargetPlacement;
- (void)_updateFullsizeContentBoundingBox;
- (void)_updateSummaryItemPlacementOverride;
- (void)_updateSwipeDownTriggeringDismissal;
- (void)_updateSwipeDownDismissalPreview;
- (void)_updateFractionCompleted;
- (void)_updateShouldFinish;
- (void)_invalidateFullsizeContentBoundingBox;
- (void)_handleViewModeTransitionStartDelay;
- (void)_invalidateDesiredDismissalState;
- (void)_invalidateSummaryItemPlacementOverride;
- (void)_invalidateSwipeDownTriggeringDismissal;
- (void)_invalidateSwipeDownDismissalPreview;
- (void)_dismissalTransition:(id)a0 didEnd:(BOOL)a1;
- (void)_forceDismissViewController;
- (void)_tryDismissingViewController;
- (void)_endDismissal:(BOOL)a0;
- (void)_invalidateFractionCompleted;
- (void)_invalidateViewControllerDismissalTargetPlacement;
- (void)_invalidateShouldFinish;
- (id)initWithViewModel:(id)a0 viewController:(id)a1;

@end
