@class _TtC14AccountsDaemon18ACDAnalyticsSender;

@interface AccountsDaemon.ACDAnalyticsSender : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ monthlyDefaultsKey;
    void /* unknown type, empty encoding */ analyticsInterval;
    void /* unknown type, empty encoding */ accountTypesToCount;
}

@property (class, nonatomic, readonly) _TtC14AccountsDaemon18ACDAnalyticsSender *shared;

- (id)init;
- (void)postMonthlyAnalyticsWithCompletionHandler:(void (^)(void))a0;

@end
