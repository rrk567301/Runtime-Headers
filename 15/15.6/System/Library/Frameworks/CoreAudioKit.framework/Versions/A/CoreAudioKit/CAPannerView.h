@class NSImage, NSColor;

@interface CAPannerView : NSView {
    double mAngle;
    struct CGPoint { double x; double y; } mCenterPoint;
    double mRadius;
    NSImage *backgroundImage;
    double indicatorWidth;
    NSColor *indicatorColor;
    char mIsEnabled;
    char mIsHighlighted;
}

- (void)dealloc;
- (void)setEnabled:(char)a0;
- (char)isEnabled;
- (void)setHighlighted:(char)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)isHighlighted;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setBackgroundImage:(id)a0;
- (double)angle;
- (void)setAngle:(double)a0;
- (void)drawKnobValueIndicator;
- (void)setAngleIndicatorColor:(id)a0;
- (void)setAngleIndicatorWidth:(double)a0;

@end
