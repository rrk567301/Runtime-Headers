@class PXStoryViewModel, PXStoryModel, PXNumberAnimator;

@interface PXStoryOverlayController : PXStoryController

@property (retain, nonatomic) PXStoryModel *mainModel;
@property (readonly, nonatomic) PXNumberAnimator *chromeVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *scrubberVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *styleSwitcherVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *relatedOverlayVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *fadeOutOverlayVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *infoPanelVisibilityFractionAnimator;
@property (nonatomic) BOOL preventAnimatingNextRelatedOverlayVisibilityFractionChange;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_invalidateMainModel;
- (void)_updateMainModel;
- (void)_invalidateRelatedOverlayVisible;
- (void)_invalidateChromeItems;
- (void)_updateRelatedOverlayVisible;
- (void)_updateChromeItems;
- (void)_updateChromeVisibilityFractionAnimator;
- (void)_updateChromeVisibilityFraction;
- (void)_updateScrubberVisibilityFractionAnimator;
- (void)_updateScrubberVisibilityFraction;
- (void)_updateStyleSwitcherVisibilityFractionAnimator;
- (void)_updateStyleSwitcherVisibilityFraction;
- (void)_updateRelatedOverlayVisibilityFractionAnimator;
- (void)_updateRelatedOverlayVisibilityFraction;
- (void)_updateFadeOutOverlayVisibilityFractionAnimator;
- (void)_updateFadeOutOverlayVisibilityFraction;
- (void)_updateInfoPanelVisibilityFractionAnimator;
- (void)_updateInfoPanelVisibilityFraction;
- (void)_invalidateFadeOutOverlayVisibilityFractionAnimator;
- (void)_invalidateStyleSwitcherVisibilityFractionAnimator;
- (void)_updateAnimator:(id)a0 endValue:(double)a1 animated:(BOOL)a2;
- (void)_invalidateChromeVisibilityFraction;
- (void)_invalidateChromeVisibilityFractionAnimator;
- (void)_invalidateScrubberVisibilityFractionAnimator;
- (void)_invalidateRelatedOverlayVisibilityFractionAnimator;
- (void)_invalidateRelatedOverlayVisibilityFraction;
- (void)_invalidateScrubberVisibilityFraction;
- (void)_invalidateStyleSwitcherVisibilityFraction;
- (void)_invalidateFadeOutOverlayVisibilityFraction;
- (void)_invalidateInfoPanelVisibilityFraction;
- (void)_invalidateInfoPanelVisibilityFractionAnimator;

@end
