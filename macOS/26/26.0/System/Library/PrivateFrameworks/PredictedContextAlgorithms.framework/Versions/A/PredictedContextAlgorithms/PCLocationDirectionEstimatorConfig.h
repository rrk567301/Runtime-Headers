@interface PCLocationDirectionEstimatorConfig : NSObject

@property (readonly, nonatomic) double minTravelTimeSec;
@property (readonly, nonatomic) double fullEffectTimeSec;
@property (readonly, nonatomic) double minDistanceToDestinationM;
@property (readonly, nonatomic) double minReliableDistanceM;
@property (readonly, nonatomic) double maxLocationUncertaintyM;

- (id)initWithMinTravelTimeSec:(double)a0 fullEffectTimeSec:(double)a1 minDistanceToDestinationM:(double)a2 minReliableDistanceM:(double)a3 maxLocationUncertaintyM:(double)a4;

@end
