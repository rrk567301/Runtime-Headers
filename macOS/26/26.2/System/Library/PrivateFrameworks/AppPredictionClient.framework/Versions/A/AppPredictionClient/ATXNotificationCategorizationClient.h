@class NSXPCConnection;

@interface ATXNotificationCategorizationClient : NSObject <ATXNotificationCategorizationXPCInterface> {
    NSXPCConnection *_xpcConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)collectCoreAnalyticsJsonForNotification:(id)a0 completion:(id /* block */)a1;
- (void)collectDynamicBreakthroughFeaturesForNotification:(id)a0 completion:(id /* block */)a1;
- (void)fetchContextForMailWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchContextForMessageWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchContextForNotificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)rankUserNotificationWithRequest:(id)a0 completion:(id /* block */)a1;

@end
