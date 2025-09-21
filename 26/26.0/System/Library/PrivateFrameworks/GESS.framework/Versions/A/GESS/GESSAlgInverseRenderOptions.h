@interface GESSAlgInverseRenderOptions : NSObject

@property unsigned int iterations;
@property unsigned int parameterizeTextureResolution;
@property BOOL textureBorderConstraint;

- (id)init;

@end
