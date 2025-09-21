@class NSError, NSString, MPPropertySet, MPMutableSectionedCollection, NSMutableDictionary, NSDictionary, MPSectionedCollection, MPServerObjectDatabase, MPCModelStorePlaybackItemsRequest, NSMutableArray, ICURLAggregatedPerformanceMetrics, NSMutableOrderedSet;

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject {
    MPCModelStorePlaybackItemsRequest *_request;
    char _requestUsesSectionedModelObjects;
    MPServerObjectDatabase *_sod;
    NSString *_personID;
    MPPropertySet *_requestPropertySet;
    NSMutableArray *_importResults;
    char _allowsExplicitContent;
    long long _defaultLibraryPersonalizationStyle;
    long long _unknownEndpointLibraryPersonalizationStyle;
    NSMutableOrderedSet *_pendingStoreIDs;
    long long _storePersonalizationStyle;
    NSMutableDictionary *_sectionIndexToCollectionItemMetadataRequestMap;
    NSMutableDictionary *_sectionIndexToCollectionItemAuthTokenRequestMap;
    NSMutableDictionary *_sectionIndexToTokenRenewalRequestMap;
    NSMutableDictionary *_storeIDToCollectionMetadataRequestMap;
    NSMutableArray *_pendingCollectionMetadataRequests;
    NSMutableArray *_pendingCollectionItemMetadataRequests;
    NSMutableArray *_pendingCollectionItemTokenRenewalRequests;
    NSMutableArray *_pendingCollectionItemAuthorizationTokenRequests;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    ICURLAggregatedPerformanceMetrics *_performanceMetrics;
    NSMutableDictionary *_mutableABCStateDump;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *equivalencyMapping;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (readonly, nonatomic) NSError *accumulationError;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { char x0; char x1; char x2; } accumulatorResult;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, copy, nonatomic) NSDictionary *abc_stateDump;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { char x0; char x1; char x2; })handleResponse:(id)a0 error:(id)a1;
- (void)_addEquivalencyForMetadata:(id)a0 requestStoreIdentifier:(id)a1;
- (struct _MPCModelStorePlaybackItemEligibility { char x0; long long x1; })_eligibilityForItem:(id)a0;
- (void)_finalizeABCStateDump;
- (char)_isFatalError:(id)a0;
- (id)_mergedObjectWithRequestedObjectIfNeeded:(id)a0 forIndexPath:(id)a1;
- (id)_playlistEntryForObject:(id)a0 containerUniqueID:(id)a1;
- (void)_resolveContentDescriptorsUsingServerObjectDatabase;
- (id)_serverObjectFromPlaceholderContentDescriptor:(id)a0 propertySet:(id)a1 error:(id *)a2;
- (id)_userIdentityWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 serverObjectDatabase:(id)a1;
- (id)newStoreItemMetadataRequest;

@end
