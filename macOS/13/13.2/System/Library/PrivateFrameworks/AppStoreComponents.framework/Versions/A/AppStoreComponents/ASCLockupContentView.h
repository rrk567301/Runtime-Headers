@class NSString, ASCLockupDisplayContext, ASCArtworkView, ASCOfferButton, NSColor, ASCSkeletonLabel, ASCUILabel, ASCOfferTheme;
@protocol ASCLockupTheme;

@interface ASCLockupContentView : ASCUIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView>

@property (readonly, nonatomic) BOOL isOfferButtonOnlyLockup;
@property (readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext;
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel;
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel;
@property (readonly, nonatomic) ASCOfferButton *offerButton;
@property (readonly, nonatomic) ASCUILabel *headingLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *headingLabel;
@property (readonly, nonatomic) ASCUILabel *offerStatusLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *offerStatusLabel;
@property (retain, nonatomic) NSString *size;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (retain, nonatomic) id<ASCLockupTheme> lockupTheme;
@property (copy, nonatomic) NSColor *loadingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredIconSize;

+ (BOOL)isSmallOfferButtonLockupForSize:(id)a0;
+ (BOOL)isOfferButtonFixedHeightForSize:(id)a0;
+ (BOOL)offerButtonShouldTopAlignForSize:(id)a0;
+ (double)offerButtonTopPaddingForSize:(id)a0;
+ (BOOL)offerButtonShouldExpandBackgroundForSize:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityChildrenInNavigationOrder;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHeading:(id)a0;
- (void)setLoading:(BOOL)a0;
- (void)layoutSubviews;
- (void)setDisplayContext:(id)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)offerButton:(id)a0 willTransitionToMetadata:(id)a1 usingAnimator:(id)a2;
- (void)setIconImage:(id)a0 withDecoration:(id)a1;
- (void)setPrefersRightToLeftLayout:(BOOL)a0;
- (id)saveOfferState;
- (void)setOfferMetadata:(id)a0;
- (void)setOfferEnabled:(BOOL)a0;
- (void)setOfferInteractive:(BOOL)a0;
- (void)setOfferStatus:(id)a0;
- (void)beginOfferModalStateWithCancelBlock:(id /* block */)a0;
- (void)endOfferModalState;
- (BOOL)isSmallOfferButtonOnlyLockup;
- (BOOL)isMiniLockup;
- (BOOL)shouldHideIconArtwork;
- (BOOL)shouldHideHeading;
- (BOOL)shouldHideTitle;
- (BOOL)shouldHideSubtitle;
- (BOOL)shouldHideOfferStatus;
- (id)makeLayout;
- (double)minimumLockupHeight;
- (void)addOfferTarget:(id)a0 action:(SEL)a1;
- (void)removeOfferTarget:(id)a0 action:(SEL)a1;

@end
