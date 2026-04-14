@interface CalendarIntegrationSupport.IntegrationServer : NSObject {
    void /* unknown type, empty encoding */ syncManager;
    void /* unknown type, empty encoding */ deviceLockObserver;
    void /* unknown type, empty encoding */ lock;
}

- (void)startServer;
- (void).cxx_destruct;
- (id)init;
- (void)requestCatchupSync;
- (void)requestRegularSync;

@end
