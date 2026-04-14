@interface NSScrubberOutlineSelectionOverlayView : NSScrubberSelectionView {
    unsigned char _previousDrawSelected : 1;
    unsigned char _previousDrawHighlight : 1;
    unsigned char _allowsHighlight : 1;
    unsigned int _reservedOverlayFlags : 29;
}

@property BOOL showsHighlight;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct __CFDictionary { } *)_coreUIDrawOptions;
- (double)itemCornerRadius;
- (void)_outlineCommonInit;
- (void)_previousDrawStateSelected:(BOOL *)a0 highlighted:(BOOL *)a1;
- (BOOL)_shouldDraw;
- (void)_setPreviousDrawStateSelected:(BOOL)a0 highlighted:(BOOL)a1;

@end
