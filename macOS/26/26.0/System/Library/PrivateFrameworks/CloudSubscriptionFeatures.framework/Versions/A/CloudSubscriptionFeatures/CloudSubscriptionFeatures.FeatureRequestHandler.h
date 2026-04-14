@interface CloudSubscriptionFeatures.FeatureRequestHandler : NSObject <CloudSubscriptionFeatures.FeaturesServiceRequest> {
    void /* unknown type, empty encoding */ taskLimiters;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ availabilityClient;
    void /* unknown type, empty encoding */ deviceCapabilities;
    void /* unknown type, empty encoding */ tapToRadarPoster;
    void /* unknown type, empty encoding */ telemetryProvider;
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ gmsIsAvailable;
}

- (void)clearTicketCacheAndNotify;
- (void)signupForWaitlistWithFeatureID:(id)a0 completion:(id /* block */)a1;
- (void)getSharedAlbumsStatusWithCompletion:(id /* block */)a0;
- (void)requestGeoClassificationFor:(id)a0 bundleID:(id)a1 altDSID:(id)a2 ignoreCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)getTicketForFeature:(id)a0 completion:(id /* block */)a1;
- (void)getTicketStatusFromCacheForFeature:(id)a0 completion:(id /* block */)a1;
- (void)clearCFUWithId:(id)a0 completion:(id /* block */)a1;
- (void)forcePostCFUWithFeature:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)clearCFUGateWithFeature:(id)a0 completion:(id /* block */)a1;
- (void)getTicketStatusForFeature:(id)a0 completion:(id /* block */)a1;
- (void)getFeatureEligibilityFor:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)verifyDeviceIsEligibleForWaitlistCFUWithCompletion:(id /* block */)a0;
- (void)waitlistStatusWithFeatureID:(id)a0 completion:(id /* block */)a1;
- (void)performInternalValidationForFeature:(id)a0 completion:(id /* block */)a1;
- (void)postCFUIfEligibleWithFeature:(id)a0 completion:(id /* block */)a1;
- (void)clearCacheAndNotify;
- (void)gmOptInToggleWithCompletion:(id /* block */)a0;
- (void)requestFeatureWithId:(id)a0 ignoreCache:(BOOL)a1 allowStale:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)revalidateCFU;

@end
