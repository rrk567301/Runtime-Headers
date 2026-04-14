@interface CSFGMAnalyticsProvider : NSObject {
    void /* unknown type, empty encoding */ dataStore;
    void /* unknown type, empty encoding */ availabilityManager;
    void /* unknown type, empty encoding */ sendFunction;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendAction:(long long)a0 completionHandler:(void (^)(BOOL))a1;

@end
