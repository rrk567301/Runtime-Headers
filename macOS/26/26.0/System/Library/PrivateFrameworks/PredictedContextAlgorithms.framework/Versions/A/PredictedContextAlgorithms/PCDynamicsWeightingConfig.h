@protocol PCDynamicsScaleFactorEstimator;

@interface PCDynamicsWeightingConfig : NSObject

@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> directionScaleFactorEstimator;
@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> etaScaleFactorEstimator;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
