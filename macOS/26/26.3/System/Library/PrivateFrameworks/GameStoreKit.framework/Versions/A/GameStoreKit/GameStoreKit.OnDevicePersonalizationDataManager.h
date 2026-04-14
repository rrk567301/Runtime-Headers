@interface GameStoreKit.OnDevicePersonalizationDataManager : NSObject {
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ requestQueue;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ amsEngagement;
    void /* unknown type, empty encoding */ dataCacheAvailabilityConditionLock;
    void /* unknown type, empty encoding */ dataCacheBox;
    void /* unknown type, empty encoding */ activeStoreAccount;
    void /* unknown type, empty encoding */ timeoutTimer;
    void /* unknown type, empty encoding */ isRequestPending;
    void /* unknown type, empty encoding */ requestPendingLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)appEnteredWhileAppeared;
- (void)storeAccountDidChange;

@end
