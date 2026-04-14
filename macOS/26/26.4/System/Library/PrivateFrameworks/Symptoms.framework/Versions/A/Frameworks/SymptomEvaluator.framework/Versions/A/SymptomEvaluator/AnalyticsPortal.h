@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {
    NSXPCListener *listener;
    ServiceImpl *si;
}

+ (void)shutdown;
+ (id)sharedInstance;
+ (void)clientTransactionsRelease;
+ (void)setListeningPort:(id)a0 queue:(id)a1 noiEngine:(id)a2 isHelper:(BOOL)a3;

- (void)shutdown;
- (void).cxx_destruct;
- (void)clientTransactionsRelease;
- (void)setListeningPort:(id)a0 queue:(id)a1 noiEngine:(id)a2 isHelper:(BOOL)a3;

@end
