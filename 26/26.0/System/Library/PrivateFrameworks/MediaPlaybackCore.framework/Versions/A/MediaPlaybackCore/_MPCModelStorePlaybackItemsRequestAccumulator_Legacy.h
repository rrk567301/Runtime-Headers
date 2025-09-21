@class NSError, NSString, MPPropertySet, MPMutableSectionedCollection, MPCModelStorePlaybackItemsRequest, NSOperationQueue, MPSectionedCollection, MPServerObjectDatabase, NSMutableArray, NSMutableSet, ICURLAggregatedPerformanceMetrics, NSMutableOrderedSet;

@interface _MPCModelStorePlaybackItemsRequestAccumulator_Legacy : NSObject <MPCModelStorePlaybackItemsRequestAccumulator> {
    MPCModelStorePlaybackItemsRequest *_request;
    MPServerObjectDatabase *_sod;
    NSString *_personID;
    MPPropertySet *_requestPropertySet;
    NSMutableArray *_importResults;
    NSMutableSet *_failedStoreIDs;
    NSMutableOrderedSet *_pendingStoreIDs;
    ICURLAggregatedPerformanceMetrics *_performanceMetrics;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    MPMutableSectionedCollection *_unpersonalizedContentDescriptors;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _defaultLibraryPersonalizationStyle;
    long long _unknownEndpointLibraryPersonalizationStyle;
    long long _storePersonalizationStyle;
    unsigned int _spirTag;
    unsigned int _piaTag;
    BOOL _allowsExplicitContent;
    BOOL _requestUsesSectionedModelObjects;
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
- (id)_locked_mergedObjectWithRequestedObjectIfNeeded:(id)a0 forIndexPath:(id)a1;
- (void)_locked_resolveContentDescriptorsUsingServerObjectDatabase;
- (id)_playlistEntryForObject:(id)a0 containerUniqueID:(id)a1;
- (void)_resolveContentDescriptorsUsingServerObjectDatabase;
- (id)_serverObjectFromPlaceholderContentDescriptor:(id)a0 propertySet:(id)a1 error:(id *)a2;
- (id)accumulatedResults;
- (BOOL)handleContainerPayload:(id)a0 itemPayload:(id)a1 userIdentity:(id)a2;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; })handlePaginatedResponse:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 serverObjectDatabase:(id)a1;
- (id)newStoreItemMetadataRequest;
- (id)nextPaginatedStoreItemMetadataRequest;
- (void)repersonalize;

@end
