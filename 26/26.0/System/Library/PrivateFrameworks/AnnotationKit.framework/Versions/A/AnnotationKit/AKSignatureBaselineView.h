@interface AKSignatureBaselineView : NSView

@property (nonatomic) double baselinePercent;

- (BOOL)_isRTL;
- (double)scaleFactor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)opaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void)_drawBaselineInContext:(struct CGContext { } *)a0;

@end
