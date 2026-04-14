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

- (void)_loadRecordOfPastOperations;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (double)_test_numberOfSecondsToMonitor;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (void)_saveRecordOfPastOperations;
- (void)_pruneExpiredOrInvalidOperations;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (id)initWithPolicyString:(id)a0;
- (void).cxx_destruct;
- (void)_addOperationAtDate:(id)a0;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (id)init;
- (void)reloadRecordOfPastOperations;
- (id)description;
- (BOOL)_throttlerIsActive;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (void)setPolicyString:(id)a0;
- (double)_currentMinimumTimeIntervalBetweenOperations;

@end
