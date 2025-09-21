@class NSString;

@interface NSMenuBarItemView : NSMenuItemView {
    NSString *_appearance;
    struct __CTLine { } *_cachedLine;
    double _cachedLineWidth;
    double _explicitWidth;
    double _titleExtra;
    char _prefersMinJustification;
    char _prefersCondensedFont;
    char _prefersReducedFontSize;
    char _didTruncateLine;
}

@property double titleExtra;
@property double explicitWidth;
@property char isMagicAppleMenu;
@property char prefersMinJustification;
@property char prefersCondensedFont;
@property char prefersReducedFontSize;

+ (char)clipsToBounds;

- (void)dealloc;
- (void).cxx_destruct;
- (id)effectiveAppearance;
- (id)_baseAppearance;
- (id)_applicableTitle;
- (void)_commonInit;
- (void)_didChangeTitleFrom:(id)a0 to:(id)a1;
- (id)_effectiveFont;
- (char)_imageAllowsTinting;
- (struct CGPoint { double x0; double x1; })_imageViewOriginPointForSize:(struct CGSize { double x0; double x1; })a0;
- (double)_imageViewTrailingMargin;
- (char)_isAppleMenu;
- (char)_isTitleEmpty;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleFieldFrameRect;
- (id)_untintedPreferredAppearance;
- (void)_updateAttributesFromItemIncludingFont:(char)a0 includingColor:(char)a1;
- (void)_updateImage;
- (char)_updateSpecialCaseAttributes;
- (void)_updateTitleOffsetForImageWithPaddingDelta:(double)a0;
- (void)_updateTitleTextFieldSize;
- (char)_usesDarkTheme;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_verticalTitleAlignment;
- (id)appearance;
- (char)canBeHighlighted;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)idealWidth;
- (id)initWithItem:(id)a0 appearance:(id)a1;
- (void)layoutImageViewIfNeeded;
- (void)layoutTitleIfNeeded;
- (double)maxTitleWidth;
- (void)setAppearance:(id)a0;
- (void)updateAppearance;

@end
