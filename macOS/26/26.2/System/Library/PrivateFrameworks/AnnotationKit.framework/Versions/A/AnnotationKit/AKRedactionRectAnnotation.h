@interface AKRedactionRectAnnotation : AKRectangularShapeAnnotation

@property BOOL isOpaque;
@property BOOL isHighlighted;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;
- (BOOL)shouldBurnIn;

@end
