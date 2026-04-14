@class MPCModelStorePlaybackItemsRequest, MPCPlaybackAccount, NSMutableArray, MPCModelStorePlaybackItemsResponse;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    MPCModelStorePlaybackItemsResponse *_previousModelResponse;
    MPCPlaybackAccount *_account;
    NSMutableArray *_errors;
    BOOL _hasReceivedFinalResponse;
    BOOL _hasCalledResponseHandler;
    BOOL _requiresFollowupRequest;
}

@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleItemMetadataBatchRequestCompletedWithAccumulator:(id)a0 previousResponse:(id)a1 error:(id)a2 isFinalResponse:(BOOL)a3;
- (void)_runPersonalizationWithSectionCollection:(id)a0 error:(id)a1 isFinalResponse:(BOOL)a2 isInvalidForPersonalization:(BOOL)a3 performanceMetrics:(id)a4;
- (void)_runStorePlatformRequestToLoadMetadataWithAccumulator:(id)a0 previousResponse:(id)a1;

@end
