@interface GESSAlgFillHoleOptions : NSObject

@property int fillHoleMethod;
@property float maxBoundaryLengthRatio;
@property unsigned int maxBoundaryVertexSize;
@property BOOL enableVertexNormalInitialization;
@property BOOL enableFilledTrianglesRemeshing;

- (id)init;

@end
