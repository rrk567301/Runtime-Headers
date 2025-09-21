@class LBFTrialStatusDetector, NSSet, NSMutableDictionary, NSString, NSMutableArray;

@interface LBFAggregator : NSObject

@property (readonly, nonatomic) LBFTrialStatusDetector *trialStatusDetector;
@property (readonly, nonatomic) char setMLHostMarkerInStateID;
@property (readonly, nonatomic) NSMutableArray *buckets;
@property (readonly, nonatomic) NSSet *usePrivateUpload;
@property (readonly, nonatomic) NSMutableDictionary *stateDict;
@property (readonly, nonatomic) NSString *lastAggregationDateKey;
@property (nonatomic) char strictDictChecks;

- (id)init;
- (void).cxx_destruct;
- (char)isInternal;
- (char)fetchEvents;
- (char)upload;
- (id)dateToStringInUTCAndLocal:(id)a0;
- (id)dumpAggregate;
- (char)dumpFetchedEvents;
- (void)dumpTimestamps;
- (id)ensureDeploymentEventsHolderInBucket:(id)a0 bucketIndex:(unsigned long long)a1;
- (id)ensureExperimentEventsHolderInBucket:(id)a0 bucketIndex:(unsigned long long)a1;
- (void)enumerateAggregation:(id /* block */)a0;
- (char)fetchBucket:(long long)a0;
- (char)fetchBuckets:(id)a0;
- (id)fetchedEventsInDictionaries;
- (id)getAggregatedStatesUpdateTimestamp:(char)a0 skipNullIdentifiers:(char)a1;
- (id)getBucketEndDate;
- (id)getBucketsNotAggregated;
- (double)getRandomCoinFlip;
- (id)getTransitionProcessingEventArray:(id)a0 mlRuntimeInCurrentBucket:(char)a1 mlRuntimeInPreviousBucket:(char)a2;
- (id)getTrialIdentifierFromBMEvent:(id)a0;
- (id)initForMLHost;
- (char)setUpBuckets;
- (char)upload:(char)a0 uploadRawEvents:(char)a1 skipNullIdentifiers:(char)a2;

@end
