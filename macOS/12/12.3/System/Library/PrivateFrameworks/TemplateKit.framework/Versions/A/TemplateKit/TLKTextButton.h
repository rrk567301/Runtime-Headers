@class TLKRichText, TLKImage, TLKImageView;

@interface TLKTextButton : TLKSButton

@property BOOL attributedTitleExplicitlySet;
@property (retain, nonatomic) TLKImageView *tlkImageView;
@property (nonatomic) unsigned long long prominence;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (copy, nonatomic) TLKImage *tlkImage;
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property BOOL matchesHeightForAlignmentRectWithIntrinsicContentSize;
@property (nonatomic) BOOL shadowDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)setAttributedTitle:(id)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)setAlignment:(long long)a0;
- (void)layout;
- (BOOL)allowsVibrancy;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)font;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)setMinimumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMaximumLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })minimumLayoutSize;
- (struct CGSize { double x0; double x1; })maximumLayoutSize;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)isImageMode;
- (void)updateAttributedTitle;
- (BOOL)hasTemplateUIImage;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;

@end
