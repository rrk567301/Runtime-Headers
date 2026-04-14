@class PXPhotosLayout, NSString, PXPhotosViewModel, NSTimer, PXPhotosGlobalFooterView, PXGView;
@protocol PXPhotosGridFooterPresentationDelegate;

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver> {
    PXPhotosViewModel *_viewModel;
    PXGView *_gridView;
    PXPhotosLayout *_layout;
    BOOL _hasAppearedOnce;
    BOOL _hasReachedInitialPosition;
    PXPhotosGlobalFooterView *_reusableFooterView;
    double _lastUserScrollTime;
    BOOL _didAutoReveal;
    NSTimer *_autoRevealMinimumIdleTimer;
}

@property (nonatomic) BOOL shouldAutoReveal;
@property (nonatomic) BOOL wantsFooter;
@property (weak, nonatomic) id<PXPhotosGridFooterPresentationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_conditionallyAutoRevealFooterView;
- (void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)a0;
- (double)_footerVisibleAmountIncludingSafeAreaInsets:(BOOL)a0;
- (BOOL)_shouldAutoRevealFooterView;
- (void)_updateFooterView;
- (void)_updateWantsFooter;
- (id)initWithViewModel:(id)a0 gridView:(id)a1 layout:(id)a2;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)viewDidScrollToInitialPosition;

@end
