@class DualMaskLayer;

@interface DualMaskedView : NSView

@property (retain, nonatomic) DualMaskLayer *baseMaskLayer;
@property (nonatomic) double maskWidth;
@property (nonatomic) BOOL leftMaskActive;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)propertyKeysForViewSpy;

@end
