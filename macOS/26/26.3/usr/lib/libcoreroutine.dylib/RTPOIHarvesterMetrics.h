@interface RTPOIHarvesterMetrics : NSObject

@property (nonatomic) unsigned long long harvestType;
@property (nonatomic) unsigned long long referenceLocationsCount;
@property (nonatomic) unsigned long long settledFingerprintCountWithoutTimeWindowFallback;
@property (nonatomic) unsigned long long settledFingerprintCountWithTimeWindowFallback;
@property (nonatomic) unsigned long long unsettledFingerprintCountWithoutTimeWindowFallback;
@property (nonatomic) unsigned long long unsettledFingerprintCountWithTimeWindowFallback;
@property (nonatomic) unsigned long long fingerprintErrorCount;
@property (nonatomic) unsigned long long mapItemCopyErrorCount;
@property (nonatomic) unsigned long long totalAccessPointCount;
@property (nonatomic) unsigned long long totalAccessPointErrorCount;
@property (nonatomic) unsigned long long totalFetchedFingerprintLocationsCount;
@property (nonatomic) unsigned long long totalFetchedFingerprintLocationsErrorCount;
@property (nonatomic) unsigned long long totalEstimatedFingerprintLocationsCount;
@property (nonatomic) unsigned long long totalEstimatedFingerprintLocationsErrorCount;
@property (nonatomic) unsigned long long totalMotionActivitiesCount;
@property (nonatomic) unsigned long long totalMotionActivitiesErrorCount;
@property (nonatomic) unsigned long long harvestCreationCount;
@property (nonatomic) unsigned long long harvestSubmissionCount;
@property (nonatomic) unsigned long long harvestSubmissionErrorCount;

- (void)submit;

@end
