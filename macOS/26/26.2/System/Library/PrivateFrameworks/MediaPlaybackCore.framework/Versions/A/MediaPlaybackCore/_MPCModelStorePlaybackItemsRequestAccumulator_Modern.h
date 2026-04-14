@class NSError, NSString, MPPropertySet, MPMutableSectionedCollection, MPCModelStorePlaybackItemsRequest, NSOperationQueue, MPSectionedCollection, MPServerObjectDatabase, NSMutableArray, ICURLAggregatedPerformanceMetrics;
@protocol MPObjectDatabase;

@interface _MPCModelStorePlaybackItemsRequestAccumulator_Modern : NSObject <MPCModelStorePlaybackItemsRequestAccumulator> {
    MPCModelStorePlaybackItemsRequest *_request;
    MPServerObjectDatabase *_sod;
    id<MPObjectDatabase> _lod;
    NSString *_personID;
    MPPropertySet *_requestPropertySet;
    NSMutableArray *_importResults;
    ICURLAggregatedPerformanceMetrics *_performanceMetrics;
    MPMutableSectionedCollection *_progressiveResults;
    NSMutableArray *_prioritizedProgressiveResults;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _objectDatabaseOptions;
    long long _storePersonalizationStyle;
    unsigned int _piaTag;
}

@property (class, readonly, nonatomic) BOOL useAccumulatedResults;

@property (readonly, nonatomic) unsigned int piaTag;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; } accumulatorResult;
@property (readonly, nonatomic) NSError *accumulationError;
@property (readonly, nonatomic) long long pendingIDsCount;
@property (readonly, nonatomic) long long failedIDsCount;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; })handleResponse:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (BOOL)_importSODPayloadData:(id)a0 userIdentity:(id)a1;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; })_locked_accumulatorResult;
- (id)_locked_popNextBatchOfPendingStoreIDs;
- (BOOL)_locked_populateSection:(id)a0 sectionIndex:(long long)a1;
- (long long)_locked_promoteToSection:(id)a0 indexPath:(id)a1;
- (struct { id x0; id x1; BOOL x2; })_locked_requestableIDsWithShouldPop:(BOOL)a0;
- (void)_locked_resolveProgressiveResults;
- (void)_resolveProgressiveResults;
- (id)accumulatedResults;
- (BOOL)handleContainerPayload:(id)a0 itemPayload:(id)a1 userIdentity:(id)a2;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; })handlePaginatedResponse:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 serverObjectDatabase:(id)a1;
- (id)newStoreItemMetadataRequest;
- (id)nextPaginatedStoreItemMetadataRequest;
- (void)repersonalize;

@end
