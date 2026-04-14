@class PXStoryViewModel, PXStoryModel;

@interface PXStoryViewPointerVisibilityController : PXStoryController

@property (weak, nonatomic) PXStoryViewModel *viewModel;
@property (weak, nonatomic) PXStoryModel *mainModel;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)configureUpdater:(id)a0;
- (void)_updateMainModel;
- (void)_invalidateMainModel;
- (void)_updateShouldHideAfterFirstSegment;
- (void)_updateShouldHideAfterChromeHide;
- (void)_updateShouldShowAfterViewModeChange;
- (void)_invalidateShouldHideAfterFirstSegment;
- (void)_invalidateShouldHideAfterChromeHide;
- (void)_invalidateShouldShowAfterViewModeChange;
- (void)_hideCursorIfOnPlayerAndNotMoving;

@end
