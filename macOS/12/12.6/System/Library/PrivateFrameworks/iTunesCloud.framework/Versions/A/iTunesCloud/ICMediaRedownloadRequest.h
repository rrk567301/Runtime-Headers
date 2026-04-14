@class ICStoreURLRequest, NSString, NSDictionary, ICMediaRedownloadResponse, ICUnfairLock, ICStoreRequestContext;

@interface ICMediaRedownloadRequest : ICRequestOperation {
    ICMediaRedownloadResponse *_redownloadResponse;
    ICStoreURLRequest *_storeURLRequest;
    ICUnfairLock *_lock;
}

@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSDictionary *redownloadParameters;
@property (copy, nonatomic) NSString *requestURLBagKey;
@property (nonatomic) BOOL includeKeybagSyncData;
@property (nonatomic) BOOL includeSubscriptionKeybagSyncData;
@property (nonatomic, getter=isPlaybackRequest) BOOL playbackRequest;
@property (nonatomic, getter=isStreamingRental) BOOL streamingRental;
@property (nonatomic) BOOL usePrioritizedURLSession;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0 redownloadParameters:(id)a1;
- (void)_executeWithActiveICloudAccountProperties:(id)a0;
- (id)initWithRequestContext:(id)a0 redownloadParametersString:(id)a1;

@end
