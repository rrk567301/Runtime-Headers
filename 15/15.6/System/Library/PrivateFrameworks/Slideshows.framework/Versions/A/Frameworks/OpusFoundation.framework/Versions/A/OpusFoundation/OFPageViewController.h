@class _OFViewControllerTransitionContext, OFNSViewController;
@protocol OFPageViewControllerDataSource, OFPageViewControllerDelegate;

@interface OFPageViewController : OFNSViewController {
    _OFViewControllerTransitionContext *_currentTransitionContext;
    double _progressOffset;
    char _isInteractive;
    char _isForward;
    struct { unsigned char delegateImplementsInteractionControllerForAnimationController : 1; unsigned char delegateImplementsWillStartTransitioning : 1; unsigned char delegateImplementsDidStartTransitioning : 1; unsigned char delegateImplementsWillFinishTransitioning : 1; unsigned char delegateImplementsDidFinishTransitioning : 1; unsigned char dataSourceSuppliesBeforeViewController : 1; unsigned char dataSourceSuppliesAfterViewController : 1; unsigned char dataSourceSuppliesPageCount : 1; unsigned char dataSourceSuppliesPageNumber : 1; } _flags;
}

@property (nonatomic) id<OFPageViewControllerDataSource> dataSource;
@property (nonatomic) id<OFPageViewControllerDelegate> delegate;
@property (nonatomic) long long navigationOrientation;
@property (readonly) OFNSViewController *viewController;
@property (readonly) char isTransitioning;
@property (nonatomic) char wantsPageControl;

+ (Class)viewClass;

- (void)dealloc;
- (id)_contentView;
- (void)loadView;
- (void)scrollWheel:(id)a0;
- (char)wantsForwardedScrollEventsForAxis:(long long)a0;
- (char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;
- (void)viewWillAppear:(char)a0;
- (void)_contentViewFrameOrBoundsDidChange;
- (id)_pageControl;
- (void)_pageControlValueChanged:(id)a0;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (char)usesPageControl;
- (void)_beginTransitionWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)_customAnimationControllerForDirection:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2;
- (id)_customInteractionControllerForAnimationController:(id)a0;
- (id)_transitionContextForDirection:(long long)a0 fromViewController:(id)a1 toViewController:(id)a2;
- (void)_updateInteractiveTransitionForProgress:(double)a0;
- (void)reportTransitionProgress:(double)a0;
- (void)setViewController:(id)a0 direction:(long long)a1 animated:(char)a2 completionHandler:(id /* block */)a3;

@end
