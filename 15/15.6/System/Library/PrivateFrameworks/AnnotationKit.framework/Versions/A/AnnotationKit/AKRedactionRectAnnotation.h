@interface AKRedactionRectAnnotation : AKRectangularShapeAnnotation

@property char isOpaque;
@property char isHighlighted;

+ (char)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;
- (char)shouldBurnIn;

@end
