@interface PCObservedSpeedETAEstimatorConfig : NSObject

@property (nonatomic) double minTravelTimeSec;
@property (nonatomic) double fullEffectTimeSec;
@property (nonatomic) double minDistanceToDestinationM;
@property (nonatomic) double minReliableSpeedM_Sec;
@property (nonatomic) double maxLocationUncertaintyM;
@property (nonatomic) double etaPenaltyTriggerRatio;
@property (nonatomic) double etaPenaltyRatioRange;

- (id)initWithMinTravelTimeSec:(double)a0 fullEffectTimeSec:(double)a1 minDistanceToDestinationM:(double)a2 minReliableSpeedM_Sec:(double)a3 maxLocationUncertaintyM:(double)a4 etaPenaltyTriggerRatio:(double)a5 etaPenaltyRatioRange:(double)a6;

@end
