@class NSNumber;

@interface APSponsorshipPlacementConfig : APConfiguration

@property (readonly, nonatomic) NSNumber *sendTimeSpentMetric;
@property (readonly, nonatomic) NSNumber *timeSpentMetricTTL;

+ (id)path;

@end
