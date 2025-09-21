@class NSBitmapImageRep, NSColor;

@interface NSColorScaleSliderCell : NSSliderCell {
    long long _scaleType;
    NSBitmapImageRep *_scaleBitmap;
    char _scaleBitmapValid;
    NSColor *_scaleColor;
    char _flippedHorizontally;
}

@property char flippedHorizontally;

- (void)setColor:(id)a0;
- (void)_computeColorScaleIfNecessaryWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawBarInside:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(char)a1;
- (void)drawTickMarks;
- (char)isOpaque;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectFlipped:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTickMarkAtIndex:(long long)a0;
- (void)setDrawsTrackAsColorScaleType:(long long)a0;

@end
