@class ASCUIViewPropertyAnimator, ASCOfferMetadata, CAAnimation, ASCOfferButtonBackgroundImageView, ASCModalViewInteraction, ASCOfferTheme, ASCUILabel;
@protocol ASCOfferButtonDelegate;

@interface ASCOfferButton : ASCUIControl

@property (readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView;
@property (readonly, nonatomic) ASCUILabel *titleLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *titleLabel;
@property (readonly, nonatomic) ASCUILabel *subtitleLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *subtitleLabel;
@property (retain, nonatomic) ASCModalViewInteraction *modalInteraction;
@property (retain, nonatomic) CAAnimation *imageAnimation;
@property (retain, nonatomic) ASCUIViewPropertyAnimator *currentTransition;
@property (nonatomic) long long subtitlePosition;
@property (retain, nonatomic) ASCOfferTheme *theme;
@property (retain, nonatomic) ASCOfferMetadata *metadata;
@property (weak, nonatomic) id<ASCOfferButtonDelegate> delegate;
@property (nonatomic, getter=isFixedHeight) BOOL fixedHeight;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityTitle;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHelp;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)setTitleLabelIfLoaded:(id)a0;
- (void)updateLabelStyleProperties;
- (void)setSubtitleLabelIfLoaded:(id)a0;
- (void)updateImageStyleProperties;
- (void)transitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (BOOL)canTransitionToMetadata:(id)a0;
- (BOOL)chainTransitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (id)transitionImageForMetadata:(id)a0;
- (id)transitionColorForMetadata:(id)a0;
- (BOOL)shouldTransitionImageViewFromMetadata:(id)a0 toMetadata:(id)a1;
- (void)updateFocusState;
- (id)makeLayout;
- (void)beginModalStateWithCancelBlock:(id /* block */)a0;
- (void)endModalState;
- (void)transitionToMetadata:(id)a0 withCompletion:(id /* block */)a1;

@end
