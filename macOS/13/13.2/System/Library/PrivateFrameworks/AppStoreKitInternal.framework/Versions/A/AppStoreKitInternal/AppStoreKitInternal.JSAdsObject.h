@interface AppStoreKitInternal.JSAdsObject : NSObject <_TtP19AppStoreKitInternalP33_7CB4CED14B113B77F20C05DB25E4442D18JSAdsObjectExports_> {
    void /* unknown type, empty encoding */ backingService;
}

- (id)init;
- (void).cxx_destruct;
- (void)debugLog:(id)a0;
- (id)processAdvertsForSponsoredSearch:(id)a0 :(id)a1 :(id)a2 :(double)a3;
- (id)processAdvertsForSponsoredSearchAndNativeState:(id)a0 :(id)a1 :(id)a2 :(double)a3;
- (id)fetchOnDeviceAd:(id)a0 :(double)a1;
- (id)fetchOnDeviceAdPlacement:(id)a0 :(double)a1 :(id)a2 :(id)a3;
- (void)setTimeoutForCurrentOnDeviceAdFetch:(id)a0 :(double)a1;
- (id)isNativeAdLoggingEnabled;

@end
