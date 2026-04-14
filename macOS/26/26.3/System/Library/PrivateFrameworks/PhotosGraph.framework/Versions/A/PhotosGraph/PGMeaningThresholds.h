@interface PGMeaningThresholds : NSObject

@property (nonatomic, readonly) double highRecallThreshold;
@property (nonatomic, readonly) double highPrecisionThreshold;

- (id)init;

@end
