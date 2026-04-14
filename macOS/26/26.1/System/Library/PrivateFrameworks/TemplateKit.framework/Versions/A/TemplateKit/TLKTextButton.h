@class TLKImageView, NSTrackingArea, TLKRichText, TLKImage;

@interface TLKTextButton : TLKSButton

@property BOOL attributedTitleExplicitlySet;
@property (retain, nonatomic) TLKImageView *tlkImageView;
@property (nonatomic) BOOL inHoverState;
@property (retain) NSTrackingArea *hoverTrackingArea;
@property (nonatomic) unsigned long long prominence;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (copy, nonatomic) TLKImage *tlkImage;
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property BOOL matchesHeightForAlignmentRectWithIntrinsicContentSize;
@property (nonatomic) BOOL shadowDisabled;

- (void)setFont:(id)a0;
- (void)layout;
- (void)setAttributedTitle:(id)a0;
- (BOOL)canBecomeKeyView;
- (void)mouseExited:(id)a0;
- (void)updateAttributedTitle;
- (void)setTitle:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAlignment:(long long)a0;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (id)font;
- (void)tlk_updateForAppearance:(id)a0;
- (void)setImage:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (void)updateImageViewAlignment;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasTemplateUIImage;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (id)init;
- (BOOL)allowsVibrancy;
- (BOOL)isImageMode;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
