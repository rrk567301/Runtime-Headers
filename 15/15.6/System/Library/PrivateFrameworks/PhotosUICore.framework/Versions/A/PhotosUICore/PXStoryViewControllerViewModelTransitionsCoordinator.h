@class PXRegionOfInterest, PXStoryViewModeTransition, PXStoryViewModel, PXGViewControllerTransition, UXViewController, PXNumberAnimator;

@interface PXStoryViewControllerViewModelTransitionsCoordinator : PXStoryController

@property (readonly, nonatomic) PXNumberAnimator *dismissalPreviewFraction;
@property (nonatomic) char isDismissalPreviewFractionInitialized;
@property (retain, nonatomic) PXGViewControllerTransition *dismissalTransition;
@property (retain, nonatomic) PXStoryViewModeTransition *viewModeTransition;
@property (nonatomic) double viewModeTransitionStartTime;
@property (retain, nonatomic) PXRegionOfInterest *fullsizeContentBoundingBox;
@property (nonatomic) char isDismisallTriggered;
@property (nonatomic) char isPreparedForDismissal;
@property (nonatomic) char isFinishingDismissal;
@property (nonatomic) char shouldFinish;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, weak, nonatomic) UXViewController *viewController;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_dismissalTransition:(id)a0 didEnd:(char)a1;
- (void)_endDismissal:(char)a0;
- (void)_forceDismissViewController;
- (void)_handleViewModeTransitionStartDelay;
- (void)_invalidateDesiredDismissalState;
- (void)_invalidateFractionCompleted;
- (void)_invalidateFullsizeContentBoundingBox;
- (void)_invalidateShouldFinish;
- (void)_invalidateSummaryItemPlacementOverride;
- (void)_invalidateSwipeDownDismissalPreview;
- (void)_invalidateSwipeDownTriggeringDismissal;
- (void)_invalidateViewControllerDismissalTargetPlacement;
- (void)_invalidateViewModeTransition;
- (void)_tryDismissingViewController;
- (void)_updateDesiredDismissalState;
- (void)_updateFractionCompleted;
- (void)_updateFullsizeContentBoundingBox;
- (void)_updateShouldFinish;
- (void)_updateSummaryItemPlacementOverride;
- (void)_updateSwipeDownDismissalPreview;
- (void)_updateSwipeDownTriggeringDismissal;
- (void)_updateViewControllerDismissalTargetPlacement;
- (void)_updateViewModeTransition;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;
- (id)initWithViewModel:(id)a0 viewController:(id)a1;

@end
