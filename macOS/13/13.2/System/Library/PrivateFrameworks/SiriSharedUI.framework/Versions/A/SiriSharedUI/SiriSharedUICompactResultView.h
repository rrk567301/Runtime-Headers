@class SiriSharedUIViewStackConstraints, NSArray, NSString, SiriSharedUIAnimationContext, SiriSharedUIContentPlatterView, NSButton, SiriSharedUIPanDismissalGestureRecognizer;
@protocol SiriSharedUIStackableContentDelegate, SiriSharedUICompactResultViewDelegate;

@interface SiriSharedUICompactResultView : SiriSharedUIStandardView <SiriSharedUIContentPlatterViewDelegate, SiriSharedUICompactResultViewHosting>

@property (nonatomic) BOOL snippetNeedsSizing;
@property (retain, nonatomic, getter=_overlayButton) NSButton *overlayButton;
@property (nonatomic) struct CGSize { double width; double height; } previousContentSize;
@property (nonatomic) double previousSeparatorContentHeight;
@property (weak, nonatomic) id<SiriSharedUICompactResultViewDelegate> delegate;
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *snippetView;
@property (retain, nonatomic) SiriSharedUIPanDismissalGestureRecognizer *dismissalGestureRecognizer;
@property (weak, nonatomic) id<SiriSharedUIStackableContentDelegate> stackContainerDelegate;
@property (nonatomic) long long attachmentType;
@property (nonatomic) double attachmentYOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } portraitContentSize;
@property (retain, nonatomic) SiriSharedUIViewStackConstraints *stackConstraints;
@property (nonatomic) BOOL useLowerPriorityHeightConstraint;
@property (retain, nonatomic) NSArray *customAttachmentConstraints;
@property (retain, nonatomic) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate;
@property (nonatomic) double darkenIntensity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsLayout;
- (id)hostingView;
- (void)setOffersDismissal:(BOOL)a0 actionHandler:(id)a1;
- (id)preferredAccessibilityElementToFocus;
- (void)setShowSnippetView:(BOOL)a0 animated:(BOOL)a1;
- (void)setSnippetView:(id)a0 completion:(id /* block */)a1;
- (void)relayout;
- (void)snippetContentDidUpdate;
- (void)_overlayButtonWasTouchedUpInside:(id)a0;
- (void)contentPlatterView:(id)a0 didScrollWithContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)contentPlatterViewScrolledToContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setShowDimmingView:(BOOL)a0 animated:(BOOL)a1;
- (void)setDarkenIntensity:(double)a0 animated:(BOOL)a1;
- (BOOL)_snippetViewIsLoading;
- (struct CGSize { double x0; double x1; })_maxSizeForSnippet;
- (BOOL)_isSnippetAnimatingInsertionOrRemoval;
- (id)_snippetInsertAnimation;
- (id)_snippetRemovalAnimation;

@end
