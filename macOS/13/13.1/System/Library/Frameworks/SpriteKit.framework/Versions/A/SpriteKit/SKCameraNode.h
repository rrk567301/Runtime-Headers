@interface SKCameraNode : SKNode

+ (BOOL)supportsSecureCoding;

- (BOOL)containsNode:(id)a0;
- (id)containedNodeSet;
- (struct { void /* unknown type, empty encoding */ x0[4]; })cameraBoundingBox;
- (struct { void /* unknown type, empty encoding */ x0[4]; })cameraBoundingBoxOverridingSceneSize:(struct CGSize { double x0; double x1; })a0;

@end
