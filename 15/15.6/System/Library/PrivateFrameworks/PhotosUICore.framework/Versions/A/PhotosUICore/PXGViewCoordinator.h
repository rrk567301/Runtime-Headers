@class PXGLayout, UXView, PXGTransitioningLayout, NSMapTable, PXMediaProvider, PXGView;

@interface PXGViewCoordinator : NSObject <PXGViewCoordinatorConfiguration> {
    NSMapTable *_backgroundColorByViewBeforeTransition;
}

@property (readonly, weak, nonatomic) UXView *containerView;
@property (readonly, weak, nonatomic) UXView *belowSubview;
@property (readonly, nonatomic) PXGTransitioningLayout *transitionLayout;
@property (nonatomic) char isPreparedForTransition;
@property (readonly, nonatomic) PXGLayout *contentLayout;
@property (readonly, nonatomic) PXGView *tungstenView;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) char showsHorizontalScrollIndicator;
@property (nonatomic) char showsVerticalScrollIndicator;
@property (nonatomic) long long contentInsetAdjustmentBehavior;
@property (nonatomic) char shouldEmbedContentLayout;
@property (nonatomic) char shouldMoveTungstenViewDuringTransition;
@property (nonatomic) unsigned char presentationType;

+ (id)tungstenViewCoordinatorInContainerViewController:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addTungstenViewToContainerView;
- (id)initWithContentLayout:(id)a0 containerView:(id)a1 belowSubview:(id)a2 containerViewController:(id)a3 configuration:(id /* block */)a4;
- (void)prepareForTransitionInContainerView:(id)a0 withContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)restoreAfterTransition;

@end
