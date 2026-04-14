@class NSMutableDictionary, NSMutableArray, LBFTrialStatusDetector;

@interface LBFAggregator : NSObject

@property (readonly, nonatomic) LBFTrialStatusDetector *trialStatusDetector;
@property (readonly, nonatomic) NSMutableArray *buckets;
@property (readonly, nonatomic) NSMutableDictionary *stateDict;

- (id)init;
- (void).cxx_destruct;
- (BOOL)fetchEvents;
- (BOOL)upload;
- (BOOL)dumpFetchedEvents;
- (id)getBucketEndDate;
- (BOOL)setUpBuckets;
- (id)getBucketsNotAggregated;
- (BOOL)fetchBuckets:(id)a0;
- (id)ensureExperimentEventsHolderInBucket:(id)a0 bucketIndex:(unsigned long long)a1;
- (id)ensureDeploymentEventsHolderInBucket:(id)a0 bucketIndex:(unsigned long long)a1;
- (BOOL)fetchBucket:(long long)a0;
- (id)getTrialIdentifierFromBMEvent:(id)a0;
- (id)getAggregatedStates:(BOOL)a0;
- (BOOL)upload:(BOOL)a0;
- (BOOL)uploadEvents;
- (BOOL)uploadEventsForBucket:(unsigned long long)a0;
- (void)dumpAggregate;
- (void)enumerateAggregation:(id /* block */)a0;
- (id)dateToStringInUTCAndLocal:(id)a0;
- (void)dumpTimestamps;

@end
