@class NSArray, NSView, SiriSharedUIViewStack, NSLayoutConstraint, SiriSharedUIRectSet;

@interface SiriSharedUIViewStackContainer : SiriSharedUIStandardView <SiriSharedUIStackableContentDelegate, SiriSharedUIViewStackContainerHosting>

@property (retain, nonatomic) NSView *containingView;
@property (retain, nonatomic) SiriSharedUIViewStack *customConstraintsViewStack;
@property (retain, nonatomic) SiriSharedUIViewStack *bottomViewStack;
@property (retain, nonatomic) SiriSharedUIViewStack *topViewStack;
@property (retain, nonatomic) NSLayoutConstraint *topContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *temporaryTopConstraintForBottomViewStack;
@property (copy, nonatomic, getter=_transitionalContentViewFrames, setter=_setTransitionalContentViewFrames:) SiriSharedUIRectSet *transitionalContentViewFrames;
@property (readonly, nonatomic) NSArray *contentViews;
@property (readonly, nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)bringSubviewToFront:(id)a0;
- (id)hostingView;
- (void)didMoveToWindow;
- (void)addContentView:(id)a0;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_snapshotContentViewFramesForTransition;
- (void)_clearTransitionalContentViewFrameSnapshots;
- (void)relayout;
- (void)stackableContentWillUpdateLayout:(id)a0 withUpdatedContentSize:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)stackableContentDidLayout:(id)a0;
- (double)stackableContentMaximumContainerWidth;
- (void)setBottomPadding:(double)a0 animatedWithDuration:(double)a1 alongsideAnimations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)removeContentView:(id)a0;
- (void)willPresentModalContent;
- (void)willDismissModalContent;
- (void)didDismissModalContent;
- (id)stackableViewsWithAttachment:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentViews:(id)a1;
- (void)_configureContainingView;
- (void)_updateContainingViewConstraints;
- (void)_updateContainingViewTrailingConstraint;
- (void)_updateContainingViewTopConstraint;
- (void)_setContentViews:(id)a0;
- (void)_configureCustomTopAndBottomViews:(id)a0;
- (id)_mostRecentBottomStackViewAnchor;
- (id)_mostRecentTopStackViewAnchor;
- (id)_stackContainingContentView:(id)a0;
- (void)_attachContentView:(id)a0;

@end
