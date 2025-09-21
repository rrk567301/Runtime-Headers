@class TLKImageView, NSTrackingArea, TLKRichText, TLKImage;

@interface TLKTextButton : TLKSButton

@property char attributedTitleExplicitlySet;
@property (retain, nonatomic) TLKImageView *tlkImageView;
@property (nonatomic) char inHoverState;
@property (retain) NSTrackingArea *hoverTrackingArea;
@property (nonatomic) unsigned long long prominence;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (copy, nonatomic) TLKImage *tlkImage;
@property (nonatomic) char alwaysShowPlaceholderView;
@property char matchesHeightForAlignmentRectWithIntrinsicContentSize;
@property (nonatomic) char shadowDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (void)setAttributedTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)layout;
- (char)allowsVibrancy;
- (id)font;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateTrackingAreas;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (char)hasTemplateUIImage;
- (char)isImageMode;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateAttributedTitle;
- (void)updateImageViewAlignment;

@end
