@class PXStoryViewModel, PXStoryModel;

@interface PXStoryViewPointerVisibilityController : PXStoryController

@property (retain, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) PXStoryModel *mainModel;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)configureUpdater:(id)a0;
- (void)_invalidateMainModel;
- (void)_updateMainModel;
- (void)_updateShouldHideAfterFirstSegment;
- (void)_updateShouldHideAfterChromeHide;
- (void)_updateShouldShowAfterViewModeChange;
- (void)_hideCursorIfOnPlayerAndNotMoving;
- (void)_invalidateShouldHideAfterFirstSegment;
- (void)_invalidateShouldHideAfterChromeHide;
- (void)_invalidateShouldShowAfterViewModeChange;

@end
