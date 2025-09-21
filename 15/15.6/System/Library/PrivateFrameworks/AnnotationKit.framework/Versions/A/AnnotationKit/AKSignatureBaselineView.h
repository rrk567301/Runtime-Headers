@interface AKSignatureBaselineView : NSView

@property (nonatomic) double baselinePercent;

- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (char)_isRTL;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)scaleFactor;
- (char)opaque;
- (void)_drawBaselineInContext:(struct CGContext { } *)a0;

@end
