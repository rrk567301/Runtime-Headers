@interface GESSAlgSDSmoothOptions : NSObject

@property float lambdaWeight;
@property float eta;
@property float mu;
@property float nu;
@property float closenessWeight;
@property unsigned int normalSmoothMaxIterations;
@property unsigned int meshUpdateIterations;
@property BOOL fixBoundary;

- (id)init;

@end
