@interface AMSBagPersistenceMetricsTracker : NSObject {
    void /* unknown type, empty encoding */ eventSender;
    void /* unknown type, empty encoding */ initialState;
}

+ (void)trackCachedValuesUnavailableWithRequestedValueCount:(long long)a0;
+ (id)trackerForCachedValuesCallWithRequestedValueCount:(long long)a0 cachedValueCount:(long long)a1 cachedBagWasExpired:(BOOL)a2;

- (void).cxx_destruct;
- (id)init;

@end
