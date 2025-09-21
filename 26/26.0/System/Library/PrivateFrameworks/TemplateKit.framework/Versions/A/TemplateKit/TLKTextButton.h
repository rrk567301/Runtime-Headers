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
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)font;
- (BOOL)allowsVibrancy;
- (void)setAlignment:(long long)a0;
- (void)setImage:(id)a0;
- (void)layout;
- (BOOL)hasTemplateUIImage;
- (void)setFont:(id)a0;
- (id)init;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateTrackingAreas;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (void)viewDidMoveToWindow;
- (void)updateImageViewAlignment;
- (void)setTitle:(id)a0;
- (BOOL)isImageMode;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateAttributedTitle;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (void).cxx_destruct;

@end
