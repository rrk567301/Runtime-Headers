@interface GESSAlgParameterizeOptions : NSObject

@property long long packingMethod;
@property long long overlapCheckMode;
@property BOOL enableUVUtilizationOptimization;
@property unsigned int textureResolution;
@property unsigned int numOfTextures;
@property float gutter;

- (id)init;

@end
