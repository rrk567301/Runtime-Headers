@protocol PCDynamicsScaleFactorEstimator;

@interface PCDynamicsWeightingConfig : NSObject

@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> directionScaleFactorEstimator;
@property (retain, nonatomic) id<PCDynamicsScaleFactorEstimator> etaScaleFactorEstimator;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
