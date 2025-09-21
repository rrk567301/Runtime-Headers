@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation

@property (nonatomic) BOOL shouldRequestLightweightStatus;
@property (readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request;
@property (nonatomic) BOOL allowsFuseHeaderEnrichment;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)initWithRequest:(id)a0;
- (void)execute;
- (void)_cacheAccountEligibilityWithStatus:(id)a0 requestContext:(id)a1;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)a0 subscriptionStatusURL:(id)a1 allowsAuthentication:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)a0;
- (void).cxx_destruct;

@end
