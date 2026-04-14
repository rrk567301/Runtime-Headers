@interface iCloudQuotaUI.DynamicUIPresenterAdapter : NSObject <ICQDynamicUIPresenterDelegate> {
    void /* unknown type, empty encoding */ dynamicUIPresenter;
    void /* unknown type, empty encoding */ appVersion;
    void /* unknown type, empty encoding */ bundleId;
    void /* unknown type, empty encoding */ fallbackToOffers;
    void /* unknown type, empty encoding */ offerBundleId;
}

- (void).cxx_destruct;
- (id)init;
- (void)dynamicUIPresenterDidCancel:(id)a0 error:(id)a1;
- (void)dynamicUIPresenterDidComplete:(id)a0;

@end
