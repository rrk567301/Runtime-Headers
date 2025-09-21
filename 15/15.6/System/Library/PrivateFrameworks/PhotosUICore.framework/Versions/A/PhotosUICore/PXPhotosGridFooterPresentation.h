@class PXPhotosLayout, NSString, PXPhotosViewModel, UXView, NSTimer, PXPhotosGlobalFooterView, PXGView;
@protocol PXPhotosGridFooterPresentationDelegate;

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, _PXPhotosGridFooterMaskViewDelegate, PXScrollViewControllerObserver> {
    PXPhotosViewModel *_viewModel;
    PXGView *_gridView;
    PXPhotosLayout *_layout;
    char _hasAppearedOnce;
    char _hasReachedInitialPosition;
    PXPhotosGlobalFooterView *_reusableFooterView;
    double _lastUserScrollTime;
    char _didAutoReveal;
    NSTimer *_autoRevealMinimumIdleTimer;
}

@property (nonatomic) char shouldAutoReveal;
@property (nonatomic) char wantsFooter;
@property (nonatomic) char wantsFooterMask;
@property (retain, nonatomic) UXView *footerMaskView;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } footerMaskPadding;
@property (nonatomic, getter=isFooterFullyMasked) char footerFullyMasked;
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
- (double)_footerVisibleAmountIncludingSafeAreaInsets:(char)a0;
- (char)_shouldAutoRevealFooterView;
- (void)_updateFooterAndMaskVisibility;
- (void)_updateFooterMaskPadding;
- (void)_updateFooterMaskViewFrame;
- (void)_updateFooterMaskViewOrder;
- (void)_updateFooterView;
- (void)_updateWantsFooter;
- (void)footerMaskViewDidMoveToWindow:(id)a0;
- (id)initWithViewModel:(id)a0 gridView:(id)a1 layout:(id)a2;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (void)photosGlobalFooterViewDidMoveToWindow:(id)a0;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)viewDidScrollToInitialPosition;

@end
