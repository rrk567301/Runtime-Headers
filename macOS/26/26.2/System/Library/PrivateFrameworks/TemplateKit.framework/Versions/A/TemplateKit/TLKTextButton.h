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

- (void)setAttributedTitle:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)setImage:(id)a0;
- (void)setAlignment:(long long)a0;
- (BOOL)isImageMode;
- (void)viewDidMoveToWindow;
- (void)mouseExited:(id)a0;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (id)font;
- (BOOL)canBecomeKeyView;
- (void)setFont:(id)a0;
- (void).cxx_destruct;
- (void)updateAttributedTitle;
- (void)updateImageViewAlignment;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTitle:(id)a0;
- (BOOL)hasTemplateUIImage;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)allowsVibrancy;
- (void)updateTrackingAreas;
- (id)init;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (void)viewDidChangeEffectiveAppearance;

@end
