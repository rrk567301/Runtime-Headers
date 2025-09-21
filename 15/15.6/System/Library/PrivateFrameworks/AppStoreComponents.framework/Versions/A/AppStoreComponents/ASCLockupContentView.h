@class NSView, NSString, ASCLockupDisplayContext, ASCArtworkView, ASCOfferButton, NSColor, ASCSkeletonLabel, ASCUILabel, ASCOfferTheme;
@protocol ASCLockupTheme;

@interface ASCLockupContentView : ASCUIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView>

@property (readonly, nonatomic) char isOfferButtonOnlyLockup;
@property (readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext;
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel;
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel;
@property (readonly, nonatomic) ASCOfferButton *offerButton;
@property (readonly, nonatomic) ASCUILabel *headingLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *headingLabel;
@property (readonly, nonatomic) ASCUILabel *offerStatusLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *offerStatusLabel;
@property (retain, nonatomic) NSView *badgeView;
@property (retain, nonatomic) NSString *lockupSize;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (retain, nonatomic) id<ASCLockupTheme> lockupTheme;
@property (copy, nonatomic) NSColor *loadingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredIconSize;

+ (char)isOfferButtonFixedHeightForSize:(id)a0;
+ (char)isSmallOfferButtonLockupForSize:(id)a0;
+ (char)offerButtonShouldExpandBackgroundForSize:(id)a0;
+ (char)offerButtonShouldTopAlignForSize:(id)a0;
+ (double)offerButtonTopPaddingForSize:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setHighlighted:(char)a0;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (char)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setBadge:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHeading:(id)a0;
- (void)setLoading:(char)a0;
- (void)setDisplayContext:(id)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (char)shouldHideTitle;
- (void)setOfferStatus:(id)a0;
- (char)shouldHideBadge;
- (void)addOfferTarget:(id)a0 action:(SEL)a1;
- (void)beginOfferModalStateWithCancelBlock:(id /* block */)a0;
- (void)endOfferModalState;
- (char)isMiniLockup;
- (char)isSmallOfferButtonOnlyLockup;
- (id)makeLayout;
- (double)minimumLockupHeight;
- (void)offerButton:(id)a0 willTransitionToMetadata:(id)a1 usingAnimator:(id)a2;
- (void)removeOfferTarget:(id)a0 action:(SEL)a1;
- (id)saveOfferState;
- (void)setIconImage:(id)a0 withDecoration:(id)a1;
- (void)setOfferEnabled:(char)a0;
- (void)setOfferInteractive:(char)a0;
- (void)setOfferMetadata:(id)a0;
- (void)setPrefersRightToLeftLayout:(char)a0;
- (char)shouldHideHeading;
- (char)shouldHideIconArtwork;
- (char)shouldHideOfferStatus;
- (char)shouldHideSubtitle;

@end
