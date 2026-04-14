@class ASCOfferTheme, NSString, ASCOfferMetadata, CAAnimation, ASCUILabel, ASCModalViewInteraction, ASCOfferButtonBackgroundImageView, ASCUIViewPropertyAnimator;
@protocol ASCOfferButtonDelegate;

@interface ASCOfferButton : ASCUIControl

@property (retain, nonatomic) NSString *size;
@property (readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView;
@property (readonly, nonatomic) ASCUILabel *titleLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *titleLabel;
@property (readonly, nonatomic) ASCUILabel *subtitleLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *subtitleLabel;
@property (retain, nonatomic) ASCModalViewInteraction *modalInteraction;
@property (retain, nonatomic) CAAnimation *imageAnimation;
@property (retain, nonatomic) ASCUIViewPropertyAnimator *currentTransition;
@property (retain, nonatomic) ASCOfferTheme *theme;
@property (retain, nonatomic) ASCOfferMetadata *metadata;
@property (weak, nonatomic) id<ASCOfferButtonDelegate> delegate;
@property (nonatomic) long long subtitlePosition;
@property (nonatomic, getter=isFixedHeight) BOOL fixedHeight;
@property (nonatomic) BOOL shouldTopAlign;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL shouldExpandBackground;

+ (id)smallTitleFontForText:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (BOOL)adjustsTitleFontSizeToFitWidthForSize:(id)a0;
+ (id)progressStateImageFittingSize:(id)a0 forTheme:(id)a1 startPercent:(double)a2 endPercent:(double)a3 useFullImageSize:(BOOL)a4;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityTitle;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHelp;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)a0;
- (id)makeLayout;
- (void)setTitleLabelIfLoaded:(id)a0;
- (void)setSubtitleLabelIfLoaded:(id)a0;
- (void)updateImageStyleProperties;
- (void)updateLabelStyleProperties;
- (void)updateFocusState;
- (void)beginModalStateWithCancelBlock:(id /* block */)a0;
- (void)endModalState;
- (BOOL)canTransitionToMetadata:(id)a0;
- (BOOL)shouldTransitionImageViewFromMetadata:(id)a0 toMetadata:(id)a1;
- (BOOL)chainTransitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (id)transitionImageForMetadata:(id)a0;
- (id)transitionColorForMetadata:(id)a0;
- (void)transitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (void)transitionToMetadata:(id)a0 withCompletion:(id /* block */)a1;

@end
