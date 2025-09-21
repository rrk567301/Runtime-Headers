@class NSImage;

@interface SFEntropyBarView : NSView {
    BOOL _isBezeled;
    double _minimum;
    double _maximum;
    unsigned long long _controlTint;
    NSImage *_gradient;
    double _value;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDoubleValue:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)doubleValue;
- (void)setMaxValue:(double)a0;
- (void)setMinValue:(double)a0;
- (double)maxValue;
- (double)minValue;
- (void)setControlTint:(unsigned long long)a0;
- (unsigned long long)controlTint;
- (void)incrementBy:(double)a0;
- (BOOL)isBezeled;
- (void)setBezeled:(BOOL)a0;

@end
