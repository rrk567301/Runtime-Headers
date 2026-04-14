@interface AKSignatureBaselineView : NSView

@property (nonatomic) double baselinePercent;

- (void)_commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)scaleFactor;
- (BOOL)opaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isRTL;
- (id)initWithCoder:(id)a0;
- (void)_drawBaselineInContext:(struct CGContext { } *)a0;

@end
