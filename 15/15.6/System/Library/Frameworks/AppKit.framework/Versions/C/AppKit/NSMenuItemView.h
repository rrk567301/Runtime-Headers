@class NSImageView, NSString, NSTextField, NSLayoutConstraint, NSMenuItem;

@interface NSMenuItemView : NSView <NSMenuItemViewProtocol> {
    NSImageView *_imageView;
    NSTextField *_titleTextField;
    NSLayoutConstraint *_drawingViewWidthConstraint;
    double _titleTextFieldHorizontalOffset;
}

@property (nonatomic, setter=setHighlighted:) char isHighlighted;
@property (weak, nonatomic) NSMenuItem *menuItem;
@property (readonly, nonatomic) char canBeHighlighted;
@property (readonly, nonatomic) char wantsSelectionMaterial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_imageSizeForItem:(id)a0;
+ (void)closeAllToolTips;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (id)_applicableImage;
- (void)_applyAttributedTitle:(id)a0;
- (void)_applyChangesForNoImage;
- (void)_applyImage:(id)a0 withImageSize:(struct CGSize { double x0; double x1; })a1;
- (char)_applyStandardColorsToTitle:(id)a0 output:(id *)a1 menuState:(unsigned int)a2 usingDarkTheme:(char)a3;
- (void)_commonInit;
- (void)_didChangeAttributedTitleFrom:(id)a0 to:(id)a1;
- (void)_didChangeBadgeFrom:(id)a0 to:(id)a1;
- (void)_didChangeEnabledStateFrom:(char)a0 to:(char)a1;
- (void)_didChangeFontFrom:(id)a0 to:(id)a1;
- (void)_didChangeGroupHeaderFrom:(char)a0 to:(char)a1;
- (void)_didChangeHiddenFrom:(char)a0 to:(char)a1;
- (void)_didChangeImageFrom:(id)a0 to:(id)a1;
- (void)_didChangeIndentFrom:(long long)a0 to:(long long)a1;
- (void)_didChangeStateImageFrom:(id)a0 to:(id)a1;
- (void)_didChangeSubtitleFrom:(id)a0 to:(id)a1;
- (void)_didChangeTitleFrom:(id)a0 to:(id)a1;
- (void)_didChangeTooltipFrom:(id)a0 to:(id)a1;
- (id)_effectiveFont;
- (char)_hasAttributedTitle;
- (char)_hasSubtitle;
- (char)_imageAllowsTinting;
- (struct CGPoint { double x0; double x1; })_imageViewOriginPointForSize:(struct CGSize { double x0; double x1; })a0;
- (double)_imageViewTrailingMargin;
- (void)_initImageViewIfNeeded;
- (char)_isAppleMenu;
- (char)_isContainedInMenu;
- (char)_isTitleEmpty;
- (id)_menuImpl;
- (char)_needsLayoutEngine;
- (id)_processedAttributedTitle:(id)a0;
- (void)_setExcludesState:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleFieldFrameRect;
- (struct CGSize { double x0; double x1; })_titleIntrinsicSize;
- (void)_updateAttributesFromItemIncludingFont:(char)a0 includingColor:(char)a1;
- (void)_updateImage;
- (void)_updateImageSync;
- (void)_updateKeyEquivalentIncludingAppearance:(char)a0;
- (char)_updateSpecialCaseAttributes;
- (void)_updateStateImage;
- (void)_updateTitleOffsetForImageWithPaddingDelta:(double)a0;
- (void)_updateTitleTextFieldSize;
- (char)_usesDarkTheme;
- (char)_usesRightToLeftLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_verticalTitleAlignment;
- (char)acceptsFirstMouse:(id)a0;
- (void)addSubview:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithItem:(id)a0;
- (void)layoutImageViewIfNeeded;
- (void)layoutStateImageViewIfNeeded;
- (void)layoutTitleIfNeeded;
- (double)maxTitleWidth;
- (struct CGSize { double x0; double x1; })preferredImageSize;
- (double)targetImageViewHeight;
- (void)updateAppearance;
- (void)updateBadgeColor:(id)a0 keyEquivalentColor:(id)a1 highlightingState:(char)a2;
- (char)updateToolTips;

@end
