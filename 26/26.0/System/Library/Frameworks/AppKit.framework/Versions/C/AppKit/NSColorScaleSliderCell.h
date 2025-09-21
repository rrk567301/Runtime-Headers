@class NSBitmapImageRep, NSColor;

@interface NSColorScaleSliderCell : NSSliderCell {
    long long _scaleType;
    NSBitmapImageRep *_scaleBitmap;
    BOOL _scaleBitmapValid;
    NSColor *_scaleColor;
    BOOL _flippedHorizontally;
}

@property BOOL flippedHorizontally;

+ (Class)_visualProviderClassForDrawingState:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; long long x4; double x5; double x6; BOOL x7; BOOL x8; BOOL x9; long long x10; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x11; double x12; BOOL x13; id x14; id x15; BOOL x16; long long x17; BOOL x18; double x19; double x20; double x21; double x22; BOOL x23; long long x24; BOOL x25; unsigned long long x26; BOOL x27; })a0;

- (BOOL)isOpaque;
- (void)setColor:(id)a0;
- (void)_computeColorScaleIfNecessaryWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawBarInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (void)drawTickMarks;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkAtIndex:(long long)a0;
- (void)setDrawsTrackAsColorScaleType:(long long)a0;

@end
