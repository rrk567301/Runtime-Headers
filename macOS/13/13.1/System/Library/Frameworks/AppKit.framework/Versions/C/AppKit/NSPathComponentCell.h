@class NSImage, NSURL;

@interface NSPathComponentCell : NSTextFieldCell {
    NSImage *_image;
    double _minWidth;
    double _fullWidth;
    double _resizedWidth;
    double _currentWidth;
    NSURL *_url;
    struct { unsigned char shouldDrawArrow : 1; unsigned char drawsAsNavigationBar : 1; unsigned char isFirstItem : 1; unsigned char isLastItem : 1; unsigned char isDropTarget : 1; unsigned int reserved : 27; } _flags;
    NSImage *_originalImage;
}

@property (retain) NSImage *image;
@property (copy) NSURL *URL;

+ (struct CGSize { double x0; double x1; })_iconSizeForControlSize:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setBaseWritingDirection:(long long)a0;
- (long long)interiorBackgroundStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;
- (id)_imageToDisplay;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initTextCell:(id)a0;
- (id)initImageCell:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_shouldDrawHighlightRect;
- (id)_textAttributes;
- (id)_controlContentStyleInView:(id)a0;
- (long long)_contentBacking;
- (long long)_interiorContentStateInView:(id)a0;
- (long long)_interiorContentValueInView:(id)a0;
- (BOOL)_textDimsWhenDisabled;
- (BOOL)_shouldDrawRTL;
- (double)_fullWidth;
- (double)_minWidth;
- (BOOL)_shouldStyleUneditableTextInView:(id)a0;
- (long long)_compareToCell:(id)a0;
- (struct CGSize { double x0; double x1; })_iconSize;
- (BOOL)_isDropTarget;
- (void)_setIsDropTarget:(BOOL)a0;
- (BOOL)_drawsAsNavigationBar;
- (void)_setDrawsAsNavigationBar:(BOOL)a0;
- (BOOL)_isFirstItem;
- (void)_setIsFirstItem:(BOOL)a0;
- (BOOL)_isLastItem;
- (void)_setIsLastItem:(BOOL)a0;
- (BOOL)_shouldDrawArrow;
- (void)_setShouldDrawArrow:(BOOL)a0;
- (void)_setShouldDrawArrowYes;
- (double)_overlapAmount;
- (double)_resizedWidth;
- (void)_setResizedWidth:(double)a0;
- (double)_currentWidth;
- (void)_setCurrentWidth:(double)a0;
- (void)_drawNavigationBarBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_shouldHighlightDropTarget;
- (id)_effectiveContentStyleForArrowInView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
