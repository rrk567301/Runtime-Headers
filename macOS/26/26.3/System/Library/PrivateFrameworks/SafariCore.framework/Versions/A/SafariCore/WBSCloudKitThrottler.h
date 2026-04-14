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

- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (BOOL)_throttlerIsActive;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (id)description;
- (id)init;
- (id)initWithPolicyString:(id)a0;
- (void)setPolicyString:(id)a0;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (double)_test_numberOfSecondsToMonitor;
- (void).cxx_destruct;
- (void)_saveRecordOfPastOperations;
- (void)reloadRecordOfPastOperations;
- (void)_loadRecordOfPastOperations;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (void)_pruneExpiredOrInvalidOperations;
- (void)_addOperationAtDate:(id)a0;

@end
