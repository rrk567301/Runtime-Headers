@interface RTEventHistogramOptions : NSObject

@property (nonatomic) double highProbabilityItemMinProbability;
@property (nonatomic) double relativeHighProbabilityItemMinDifference;
@property (nonatomic) int highProbabilityItemMinNumOfEvents;
@property (nonatomic) BOOL allowPredictionsToHome;

- (id)init;

@end
