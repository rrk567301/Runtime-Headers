@class CALayer;

@interface DualMaskedView : NSView

@property (weak, nonatomic) CALayer *leftMaskLayer;
@property (weak, nonatomic) CALayer *middleMaskLayer;
@property (weak, nonatomic) CALayer *rightMaskLayer;
@property (nonatomic) double maskWidth;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)awakeFromNib;
- (id)_createGradientLayerWithLeft:(struct CGColor { } *)a0 right:(struct CGColor { } *)a1;
- (void)_createMasks;
- (void)_updateMaskForWidth;
- (id)propertyKeysForViewSpy;

@end
