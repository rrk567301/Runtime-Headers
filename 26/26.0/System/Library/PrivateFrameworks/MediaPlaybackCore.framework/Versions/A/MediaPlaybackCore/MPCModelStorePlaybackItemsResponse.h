@class NSString, MPStoreLibraryPersonalizationResponse, ICURLAggregatedPerformanceMetrics, MPCModelStorePlaybackItemsRequestAccumulation;
@protocol MPCModelStorePlaybackItemsRequestAccumulator;

@interface MPCModelStorePlaybackItemsResponse : MPModelResponse <MPCModelPlaybackResponse> {
    MPCModelStorePlaybackItemsRequestAccumulation *_accumulation;
}

@property (readonly, nonatomic, getter=isInvalidForPersonalization) BOOL invalidForPersonalization;
@property (readonly, nonatomic) long long invalidationReason;
@property (readonly, nonatomic) MPStoreLibraryPersonalizationResponse *_personalizationResponse;
@property (readonly, nonatomic) id<MPCModelStorePlaybackItemsRequestAccumulator> accumulator;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse;
@property (retain, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, nonatomic) long long pendingIDsCount;
@property (readonly, nonatomic) long long failedIDsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearResults;
- (void).cxx_destruct;
- (void)_activeUserDidChangeNotification:(id)a0;
- (void)_allowsExplicitContentDidChangeNotification:(id)a0;
- (void)_personalizationResponseDidInvalidateNotification:(id)a0;
- (id)initWithRequest:(id)a0 accumulator:(id)a1;
- (id)initWithRequest:(id)a0 personalizationResponse:(id)a1 results:(id)a2 performanceMetrics:(id)a3 accumulator:(id)a4;

@end
