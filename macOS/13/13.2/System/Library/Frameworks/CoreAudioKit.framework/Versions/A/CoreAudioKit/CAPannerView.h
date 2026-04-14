@class NSImage, NSColor;

@interface CAPannerView : NSView {
    double mAngle;
    struct CGPoint { double x; double y; } mCenterPoint;
    double mRadius;
    NSImage *backgroundImage;
    double indicatorWidth;
    NSColor *indicatorColor;
    BOOL mIsEnabled;
    BOOL mIsHighlighted;
}

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)isFlipped;
- (void)mouseUp:(id)a0;
- (void)setBackgroundImage:(id)a0;
- (double)angle;
- (void)setAngle:(double)a0;
- (void)setAngleIndicatorWidth:(double)a0;
- (void)setAngleIndicatorColor:(id)a0;
- (void)drawKnobValueIndicator;

@end
