@class NSPopUpButtonCell, NSColor, NSImage, NSButtonCell, NSString, NSPopUpButtonBezelConfiguration, NSPopUpIndicatorView;

@interface NSPopUpButtonAppearanceBasedVisualProvider : NSButtonAppearanceBasedVisualProvider <NSPopUpButtonVisualProvider> {
    NSPopUpIndicatorView *_indicatorView;
    BOOL _inContentLayout;
}

@property (readonly) NSPopUpButtonCell *popUpButtonCell;
@property (readonly) NSPopUpIndicatorView *indicatorView;
@property (readonly) NSPopUpButtonBezelConfiguration *currentPopUpBezelConfiguration;
@property (readonly, nonatomic) NSImage *_indicatorImage;
@property (readonly, copy) NSImage *indicatorImage;
@property (weak) NSButtonCell *buttonCell;
@property (readonly) BOOL hasBezelTint;
@property (readonly) BOOL hasSubviews;
@property (readonly) long long interiorBackgroundStyle;
@property (readonly) int blendModeForImageContent;
@property (readonly) NSColor *preferredTemplateImageFillColor;
@property (readonly) BOOL hasRolloverAppearance;
@property (readonly) BOOL hasInactiveAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct __CFDictionary { } *)coreUIBezelDrawOptionsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1 drawingFocusRing:(BOOL)a2 bezelConfiguration:(id)a3;
+ (id)coreUIWidgetNameForConfiguration:(id)a0;
+ (unsigned long long)invalidationsForBezelConfigurationChange:(id)a0 oldConfiguration:(id)a1;
+ (double)popupIndicatorToContentPaddingOffsetForButtonStyle:(long long)a0;
+ (BOOL)shouldDrawIndicatorOnlyForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bezelConfiguration:(id)a1;

- (void)layout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_labelOffsetInCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (double)_preferredPopupHeightIsFlipped:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)_drawIndicatorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_availableContentRectForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_defaultIndicatorSize;
- (void)_drawCircumscribedFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (long long)_effectiveAlignment;
- (double)_extraWidthForCellHeight:(double)a0;
- (double)_horzOffsetForTitleInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAlignment:(long long)a1 direction:(long long)a2 font:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageAlignmentRectInImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1 coordinateSpace:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyTitleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (double)_menuLocationHorizontalOffsetWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (struct CGSize { double x0; double x1; })_popupImageSizeForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (struct CGSize { double x0; double x1; })_titleSpacing;
- (BOOL)_wantsToDrawSeparateIndicator;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsetsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (double)artworkBaselineOffsetFromFrameInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (struct CGSize { double x0; double x1; })autolayoutCellSizeWithinSize:(struct CGSize { double x0; double x1; })a0 coordinateSpace:(id)a1;
- (double)autolayout_preferredPopupToolbarMinimumWidth;
- (double)autolayout_preferredSmallPopupToolbarMinimumWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })availableIndicatorRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1 compressionOptions:(id)a2;
- (long long)contentBacking;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawSeparatorItemWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawTitle:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGSize { double x0; double x1; })effectiveIndicatorSize;
- (void)idealContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a0 maximumContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 flipped:(BOOL)a3;
- (void)imageOrProgressRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 titleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 coordinateSpace:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })indicatorFrameForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })menuLocationForEvent:(id)a0 inCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coordinateSpace:(id)a2;
- (id)popUpMenuOptionsForFlags:(unsigned long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)removeIndicatorView;
- (void)removeSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (void)updateBackgroundViewIfNeccessary;
- (void)updateImageViewIfNecessary;
- (void)updateIndicatorViewIfNecessary;
- (void)updateSubviewsIncludeTitleTextField:(BOOL)a0;

@end
