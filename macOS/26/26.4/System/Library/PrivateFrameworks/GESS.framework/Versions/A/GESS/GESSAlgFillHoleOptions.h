@interface GESSAlgFillHoleOptions : NSObject

@property long long fillHoleMethod;
@property float maxBoundaryLengthRatio;
@property unsigned int maxBoundaryVertexSize;
@property BOOL enableVertexNormalInitialization;
@property BOOL enableFilledTrianglesRemeshing;
@property float narrowHoleThresholdRatio;

- (id)init;

@end
