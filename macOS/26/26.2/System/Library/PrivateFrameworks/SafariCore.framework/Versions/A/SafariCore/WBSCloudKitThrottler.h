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

- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (void).cxx_destruct;
- (id)initWithPolicyString:(id)a0;
- (void)_saveRecordOfPastOperations;
- (void)_addOperationAtDate:(id)a0;
- (id)description;
- (void)_pruneExpiredOrInvalidOperations;
- (void)_loadRecordOfPastOperations;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (void)setPolicyString:(id)a0;
- (double)_test_numberOfSecondsToMonitor;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (id)init;
- (BOOL)_throttlerIsActive;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (void)reloadRecordOfPastOperations;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;

@end
