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
- (void)_updateMainModel;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_invalidateMainModel;
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
- (void)_invalidateChromeItems;
- (void)_invalidateRelatedOverlayVisible;
- (void)_invalidateChromeVisibilityFractionAnimator;
- (void)_invalidateChromeVisibilityFraction;
- (void)_invalidateScrubberVisibilityFractionAnimator;
- (void)_invalidateStyleSwitcherVisibilityFractionAnimator;
- (void)_invalidateFadeOutOverlayVisibilityFractionAnimator;
- (void)_invalidateFadeOutOverlayVisibilityFraction;
- (void)_invalidateInfoPanelVisibilityFractionAnimator;
- (void)_invalidateInfoPanelVisibilityFraction;
- (void)_updateAnimator:(id)a0 endValue:(double)a1 animated:(BOOL)a2;
- (void)_invalidateScrubberVisibilityFraction;
- (void)_invalidateStyleSwitcherVisibilityFraction;
- (void)_invalidateRelatedOverlayVisibilityFractionAnimator;
- (void)_invalidateRelatedOverlayVisibilityFraction;

@end
