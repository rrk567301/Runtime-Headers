@interface GESSAlgSmoothOptions : NSObject

@property float lambda;
@property unsigned int iterations;
@property char fixBoundary;
@property char enableTangentialRelaxation;

- (id)init;

@end
