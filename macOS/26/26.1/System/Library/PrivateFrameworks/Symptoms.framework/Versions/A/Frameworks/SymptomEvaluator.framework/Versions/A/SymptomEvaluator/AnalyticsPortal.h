@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {
    NSXPCListener *listener;
    ServiceImpl *si;
}

+ (id)sharedInstance;
+ (void)shutdown;
+ (void)clientTransactionsRelease;
+ (void)setListeningPort:(id)a0 queue:(id)a1 noiEngine:(id)a2 isHelper:(BOOL)a3;

- (void)shutdown;
- (void)clientTransactionsRelease;
- (void).cxx_destruct;
- (void)setListeningPort:(id)a0 queue:(id)a1 noiEngine:(id)a2 isHelper:(BOOL)a3;

@end
