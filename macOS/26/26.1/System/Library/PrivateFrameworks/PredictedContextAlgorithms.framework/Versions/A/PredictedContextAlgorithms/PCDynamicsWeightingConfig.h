@protocol PCDynamicsScaleFactorEstimator;

@interface PCDynamicsWeightingConfig : NSObject

@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> directionScaleFactorEstimator;
@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> etaScaleFactorEstimator;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
