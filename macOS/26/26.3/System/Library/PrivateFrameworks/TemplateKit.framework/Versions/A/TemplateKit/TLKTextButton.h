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

- (void)mouseExited:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFont:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)setAttributedTitle:(id)a0;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateImageViewAlignment;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateAttributedTitle;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)layout;
- (id)init;
- (BOOL)canBecomeKeyView;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)hasTemplateUIImage;
- (void)viewDidMoveToWindow;
- (void)setImage:(id)a0;
- (void)setAlignment:(long long)a0;
- (BOOL)isImageMode;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTitle:(id)a0;
- (BOOL)allowsVibrancy;
- (id)font;

@end
