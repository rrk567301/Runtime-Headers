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

- (void)tlk_updateForAppearance:(id)a0;
- (void)setTitle:(id)a0;
- (void)layout;
- (void)setImage:(id)a0;
- (void)setFont:(id)a0;
- (BOOL)isImageMode;
- (id)font;
- (void)mouseEntered:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)mouseExited:(id)a0;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (void)updateImageViewAlignment;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)canBecomeKeyView;
- (id)init;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateAttributedTitle;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (void)updateTrackingAreas;
- (BOOL)hasTemplateUIImage;
- (void)setAttributedTitle:(id)a0;
- (BOOL)allowsVibrancy;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;

@end
