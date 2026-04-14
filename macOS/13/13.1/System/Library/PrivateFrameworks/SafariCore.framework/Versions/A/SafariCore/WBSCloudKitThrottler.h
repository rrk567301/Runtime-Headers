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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPolicyString:(id)a0;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (void)setPolicyString:(id)a0;
- (void)reloadRecordOfPastOperations;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (BOOL)_throttlerIsActive;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (void)_pruneExpiredOrInvalidOperations;
- (void)_addOperationAtDate:(id)a0;
- (void)_loadRecordOfPastOperations;
- (void)_saveRecordOfPastOperations;
- (double)_test_numberOfSecondsToMonitor;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;

@end
