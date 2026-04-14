@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {
    NSXPCListener *listener;
    ServiceImpl *si;
}

+ (id)sharedInstance;
+ (void)shutdown;
+ (void)clientTransactionsRelease;
+ (void)setListeningPort:(const char *)a0 queue:(id)a1;

- (void).cxx_destruct;
- (void)shutdown;
- (void)clientTransactionsRelease;
- (void)setListeningPort:(const char *)a0 queue:(id)a1;

@end
