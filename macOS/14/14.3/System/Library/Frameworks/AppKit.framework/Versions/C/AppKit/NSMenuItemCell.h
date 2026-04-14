@class NSMenuItem;

@interface NSMenuItemCell : NSButtonCell {
    id _extraData;
    struct CGSize { double width; double height; } _stateImageSize;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _titleSize;
    struct CGSize { double width; double height; } _size;
    struct __micFlags { unsigned char needsSizing : 1; unsigned char reserved : 1; unsigned char needsDisplay : 1; unsigned short keyEquivGlyphWidth : 16; unsigned char uniqueAgainstMain : 1; unsigned short RESERVED : 12; } _micFlags;
}

@property (retain) NSMenuItem *menuItem;
@property BOOL needsSizing;
@property BOOL needsDisplay;
@property (readonly) double stateImageWidth;
@property (readonly) double imageWidth;
@property (readonly) double titleWidth;
@property (readonly) double keyEquivalentWidth;
@property long long tag;

+ (void)initialize;
+ (id)_dimmedImage:(id)a0;
+ (void)_systemColorsChanged:(id)a0;
+ (BOOL)prefersTrackingUntilMouseUp;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)state;
- (void)setTag:(long long)a0;
- (void)setRepresentedObject:(id)a0;
- (id)image;
- (id)title;
- (BOOL)_obeysHiddenBit;
- (void)drawStateImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (long long)tag;
- (BOOL)_preferAlternateContentForImage;
- (id)_sharedTextCell;
- (struct CGSize { double x0; double x1; })_borderInset;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_characterRangeForPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (id)_currentImageInView:(id)a0;
- (BOOL)_disabledForDrawingContent;
- (BOOL)_drawsVerticallyCenteredTitle;
- (void)_effectiveFontDidChangeTo:(id)a0;
- (long long)_interiorContentStateInView:(id)a0;
- (long long)_interiorContentValueInView:(id)a0;
- (short)_keyEquivalentGlyphWidth;
- (id)_keyEquivalentUniquerCreatingIfNecessary:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_menuCellScaledImageAlignmentRectForImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_preferAlternateContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)_rectsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resetMeasuredCell;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorRectForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFlipped:(BOOL)a1;
- (id)_specialControlView;
- (void)calcSize;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawKeyEquivalentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawSeparatorItemWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (BOOL)isOpaque;
- (id)keyEquivalentAttributedString;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyEquivalentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuView;
- (unsigned long long)mnemonicLocation;
- (id)representedObject;
- (void)setBordered:(BOOL)a0;
- (void)setMenuView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stateImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
