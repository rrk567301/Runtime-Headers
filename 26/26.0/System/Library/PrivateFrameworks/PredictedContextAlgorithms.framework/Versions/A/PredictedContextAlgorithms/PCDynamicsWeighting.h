@protocol PCDynamicsScaleFactorEstimator;

@interface PCDynamicsWeighting : NSObject

@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> directionScaleFactorEstimator;
@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> etaScaleFactorEstimator;

- (void).cxx_destruct;
- (id)initWithDirectionScaleFactorEstimator:(id)a0 ETAScaleFactorEstimator:(id)a1;
- (void)modifyCandidateProbabilities:(id)a0 atTime:(double)a1 visitHistory:(id)a2 locationHistory:(id)a3 motionActivity:(id)a4;

@end
