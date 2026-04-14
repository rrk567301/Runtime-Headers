@interface CloudSubscriptionFeatures.FeatureRequestHandler : NSObject <CloudSubscriptionFeatures.FeaturesServiceRequest> {
    void /* unknown type, empty encoding */ taskLimiters;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ urlSession;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearCacheAndNotify;
- (void)getTicketForFeature:(id)a0 completion:(id /* block */)a1;
- (void)clearCFUGateWithCompletion:(id /* block */)a0;
- (void)clearCFUWithCompletion:(id /* block */)a0;
- (void)clearTicketCacheAndNotify;
- (void)forcePostCFUWithCompletion:(id /* block */)a0;
- (void)getFeatureEligibilityFor:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)getSharedAlbumsStatusWithCompletion:(id /* block */)a0;
- (void)getTicketStatusForFeature:(id)a0 completion:(id /* block */)a1;
- (void)getTicketStatusFromCacheForFeature:(id)a0 completion:(id /* block */)a1;
- (void)gmOptInToggleWithCompletion:(id /* block */)a0;
- (void)postCFUIfEligibleWithCompletion:(id /* block */)a0;
- (void)requestFeatureWithId:(id)a0 ignoreCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestGeoClassificationFor:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;

@end
