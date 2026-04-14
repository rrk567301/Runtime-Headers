@protocol IPAImageGeometry;

@interface IPAImageTransform : NSObject <IPAImageTransform> {
    id<IPAImageGeometry> _inputGeometry;
    id<IPAImageGeometry> _intrinsicGeometry;
}

+ (id)identityTransformForGeometry:(id)a0;
+ (id)compositeTransforms:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)inverseTransform;
- (id)initWithInputGeometry:(id)a0 intrinsicGeometry:(id)a1;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (struct Vector2d { double x0; double x1; })mapVector:(struct Vector2d { double x0; double x1; })a0;
- (BOOL)canAlignToPixelsExactly;
- (struct CGPoint { double x0; double x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0;

@end
