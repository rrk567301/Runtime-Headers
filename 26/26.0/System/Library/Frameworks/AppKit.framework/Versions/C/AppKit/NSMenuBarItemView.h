@class NSString;

@interface NSMenuBarItemView : NSMenuItemView {
    NSString *_appearance;
    struct __CTLine { } *_cachedLine;
    double _cachedLineWidth;
    double _explicitWidth;
    double _titleExtra;
    BOOL _prefersMinJustification;
    BOOL _prefersCondensedFont;
    BOOL _prefersReducedFontSize;
    BOOL _didTruncateLine;
}

@property double titleExtra;
@property double explicitWidth;
@property BOOL isMagicAppleMenu;
@property BOOL prefersMinJustification;
@property BOOL prefersCondensedFont;
@property BOOL prefersReducedFontSize;

+ (BOOL)clipsToBounds;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)idealWidth;
- (void)updateAppearance;
- (void)dealloc;
- (void)_commonInit;
- (void)setAppearance:(id)a0;
- (double)maxTitleWidth;
- (void)_updateImage;
- (id)appearance;
- (void).cxx_destruct;
- (id)effectiveAppearance;
- (id)_baseAppearance;
- (id)_applicableTitle;
- (void)_didChangeTitleFrom:(id)a0 to:(id)a1;
- (id)_effectiveFont;
- (BOOL)_imageAllowsTinting;
- (struct CGPoint { double x0; double x1; })_imageViewOriginPointForSize:(struct CGSize { double x0; double x1; })a0;
- (double)_imageViewTrailingMargin;
- (BOOL)_isAppleMenu;
- (BOOL)_isTitleEmpty;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleFieldFrameRect;
- (id)_untintedPreferredAppearance;
- (void)_updateAttributesFromItemIncludingFont:(BOOL)a0 includingColor:(BOOL)a1;
- (BOOL)_updateSpecialCaseAttributes;
- (void)_updateTitleOffsetForImageWithPaddingDelta:(double)a0;
- (void)_updateTitleTextFieldSize;
- (BOOL)_usesDarkTheme;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_verticalTitleAlignment;
- (BOOL)canBeHighlighted;
- (id)initWithItem:(id)a0 appearance:(id)a1;
- (void)layoutImageViewIfNeeded;
- (void)layoutTitleIfNeeded;

@end
