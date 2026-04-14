@class NSArray, NSMutableArray;
@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject {
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
}

@property (weak, nonatomic) id<WBSCloudKitThrottlerDataStore> dataStore;

+ (id)_distributionBucketsFromConfiguration:(id)a0;
+ (BOOL)policyStringRepresentsValidPolicy:(id)a0;

- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (BOOL)_throttlerIsActive;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (void)reloadRecordOfPastOperations;
- (void)_saveRecordOfPastOperations;
- (void)_addOperationAtDate:(id)a0;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (void)_pruneExpiredOrInvalidOperations;
- (id)init;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (id)description;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (double)_test_numberOfSecondsToMonitor;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (void)setPolicyString:(id)a0;
- (void)_loadRecordOfPastOperations;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (void).cxx_destruct;
- (id)initWithPolicyString:(id)a0;

@end
