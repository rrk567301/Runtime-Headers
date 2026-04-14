@class NSArray;

@interface IPAImageTransformSequence : NSObject <IPAImageTransform> {
    NSArray *_transforms;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithTransforms:(id)a0;
- (id)inverseTransform;
- (BOOL)canAlignToPixelsExactly;
- (id)inputGeometry;
- (id)intrinsicGeometry;
- (struct CGPoint { double x0; double x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0;

@end
