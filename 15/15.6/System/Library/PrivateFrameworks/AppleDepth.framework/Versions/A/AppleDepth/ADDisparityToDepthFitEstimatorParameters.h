@interface ADDisparityToDepthFitEstimatorParameters : NSObject

@property (nonatomic) unsigned int iterations;
@property (nonatomic) double threshold;
@property (nonatomic) double minInlinersRatio;
@property (nonatomic) char constantSlope;
@property (nonatomic) float minDepth;
@property (nonatomic) float maxDepth;
@property (nonatomic) char smoothing;
@property (nonatomic) float smoothingWeight;
@property (nonatomic) unsigned int seed;
@property (nonatomic) char errorCalculationOnDisparity;
@property (nonatomic) unsigned long long retainedWorldPointsCapacity;
@property (nonatomic) float retainedWorldPointsConfidenceThreshold;

- (id)init;

@end
