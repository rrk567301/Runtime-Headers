@interface GameStoreKit.JSAdsObject : NSObject <_TtP12GameStoreKitP33_C819BA889E9428EA1B189C653EE70F0618JSAdsObjectExports_> {
    void /* unknown type, empty encoding */ backingService;
}

- (id)init;
- (void).cxx_destruct;
- (void)debugLog:(id)a0;
- (id)fetchAppBinaryTraitsOverride;
- (id)fetchInstallStatesForAdverts:(id)a0;
- (id)fetchOnDeviceAdPlacement:(id)a0 :(double)a1 :(id)a2 :(id)a3;
- (id)getIdentifierForMissedOpportunity:(id)a0;
- (id)isNativeAdLoggingEnabled;
- (id)processAdvertsForSponsoredSearch:(id)a0 :(id)a1 :(id)a2 :(double)a3 :(BOOL)a4;
- (void)setTimeoutForCurrentOnDeviceAdFetch:(id)a0 :(double)a1;

@end
