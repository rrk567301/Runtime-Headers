@class NSArray, NSMutableArray;
@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject {
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
}

@property (weak, nonatomic) id<WBSCloudKitThrottlerDataStore> dataStore;

+ (BOOL)policyStringRepresentsValidPolicy:(id)a0;
+ (id)_distributionBucketsFromConfiguration:(id)a0;

- (BOOL)_loadDistributionConfiguration:(id)a0;
- (void)_loadRecordOfPastOperations;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (void)_addOperationAtDate:(id)a0;
- (id)initWithPolicyString:(id)a0;
- (void)_saveRecordOfPastOperations;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (void)setPolicyString:(id)a0;
- (id)description;
- (BOOL)_throttlerIsActive;
- (void)_pruneExpiredOrInvalidOperations;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (void).cxx_destruct;
- (void)reloadRecordOfPastOperations;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (double)_test_numberOfSecondsToMonitor;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (id)init;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;

@end
