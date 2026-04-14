@class ICStoreRequestContext, ICLightweightMusicSubscriptionStatusResponse;

@interface ICLightweightMusicSubscriptionStatusRequest : ICRequestOperation {
    ICLightweightMusicSubscriptionStatusResponse *_response;
}

@property (copy, nonatomic) ICStoreRequestContext *requestContext;

- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0;
- (void).cxx_destruct;
- (void)execute;
- (void)_finishWithExtendedSubscriptionStatusResponse:(id)a0 error:(id)a1;

@end
