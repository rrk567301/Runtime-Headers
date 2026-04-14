@class NSImage, NSTrackingArea, NSColorList, NSColor;
@protocol NSColorPickerMatrixViewDelegate;

@interface NSColorPickerMatrixView : NSView {
    NSImage *_image;
    struct CGSize { double width; double height; } _swatchSize;
    unsigned long long _numColumns;
    unsigned long long _numRows;
    unsigned long long _selectedIndex;
    NSTrackingArea *_trackArea;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _trackingSwatchRect;
    struct { unsigned char _emptyEnabled : 1; unsigned char _hasEmptyColorCell : 1; unsigned int _reserved : 30; } _flags;
}

@property (readonly) NSColor *color;
@property (retain) NSColorList *colorList;
@property struct CGSize { double x0; double x1; } swatchSize;
@property unsigned long long numberOfColumns;
@property id<NSColorPickerMatrixViewDelegate> delegate;
@property (getter=isEmptyColorEnabled) BOOL emptyColorEnabled;

+ (BOOL)clipsToBounds;
+ (id)defaultColorList;
+ (BOOL)hasEmptyColorForDefaultList;

- (unsigned long long)numberOfRows;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)color;
- (BOOL)isFlipped;
- (id)image;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)a0;
- (id)_accessibilityAttributeValue:(id)a0 forIndexedChild:(id)a1;
- (id)_accessibilityChildren;
- (unsigned long long)_accessibilityIndexOfChildInNavigationOrder:(id)a0;
- (BOOL)_hasEmptyColorCell;
- (void)_updateConfigs;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)colorAtIndex:(unsigned long long)a0;
- (unsigned long long)colorIndexAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawColorPickerHighlightForView:(id)a0;
- (void)mouseMoved:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForColorAtIndex:(unsigned long long)a0;
- (void)selectColorAtIndex:(unsigned long long)a0;
- (void)setEmptyColorEnabled:(BOOL)a0;

@end
