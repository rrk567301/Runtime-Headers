@protocol PCDynamicsScaleFactorEstimator;

@interface PCDynamicsWeightingConfig : NSObject

@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> directionScaleFactorEstimator;
@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> etaScaleFactorEstimator;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
