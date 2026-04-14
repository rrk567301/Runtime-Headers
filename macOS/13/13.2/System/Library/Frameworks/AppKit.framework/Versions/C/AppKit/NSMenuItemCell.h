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
+ (BOOL)prefersTrackingUntilMouseUp;
+ (void)_systemColorsChanged:(id)a0;
+ (id)_dimmedImage:(id)a0;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)state;
- (void)setRepresentedObject:(id)a0;
- (void)setTag:(long long)a0;
- (id)image;
- (id)title;
- (BOOL)isOpaque;
- (long long)tag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initTextCell:(id)a0;
- (id)initImageCell:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setBordered:(BOOL)a0;
- (long long)_interiorContentStateInView:(id)a0;
- (long long)_interiorContentValueInView:(id)a0;
- (id)_currentImageInView:(id)a0;
- (BOOL)_preferAlternateContent;
- (BOOL)_preferAlternateContentForImage;
- (BOOL)_disabledForDrawingContent;
- (BOOL)_drawsVerticallyCenteredTitle;
- (id)representedObject;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_characterRangeForPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)calcSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorRectForCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFlipped:(BOOL)a1;
- (void)drawSeparatorItemWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (unsigned long long)mnemonicLocation;
- (id)_sharedTextCell;
- (void)setMenuView:(id)a0;
- (id)menuView;
- (id)_specialControlView;
- (id)_keyEquivalentUniquerCreatingIfNecessary:(BOOL)a0;
- (BOOL)_obeysHiddenBit;
- (struct CGSize { double x0; double x1; })_borderInset;
- (short)_keyEquivalentGlyphWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)_rectsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resetMeasuredCell;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stateImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyEquivalentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawStateImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_menuCellScaledImageAlignmentRectForImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)keyEquivalentAttributedString;
- (void)drawKeyEquivalentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
