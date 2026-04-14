@interface EntityLimits : NSObject

@property (nonatomic, readonly) long long overallAppEntityLimit;
@property (nonatomic, readonly) long long overallEntityExtractionLimit;
@property (nonatomic, readonly) long long entityExtractionCategoryLimit;
@property (nonatomic, readonly) double entityExtractionExecutionTimeoutSec;
@property (nonatomic, readonly) long long perAppEntityMinimum;
@property (nonatomic, readonly) long long perAppIncrementalLimit;

@end
