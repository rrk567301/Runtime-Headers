@class NSMutableDictionary;
@protocol GTServiceProvider;

@interface GTServiceProviderXPCDispatcher : GTXPCDispatcher <GTServiceProviderXPCDispatcher> {
    id<GTServiceProvider> _serviceProvider;
    NSMutableDictionary *_registeredConnections;
}

- (void)setConnections:(id)a0;
- (void).cxx_destruct;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)allServices:(id)a0 replyConnection:(id)a1;
- (void)broadcastDisconnect:(id)a0 replyConnection:(id)a1;
- (void)deregisterObserver_:(id)a0 replyConnection:(id)a1;
- (void)deregisterService_:(id)a0 replyConnection:(id)a1;
- (void)registerObserver_:(id)a0 replyConnection:(id)a1;
- (void)registerService_forProcess_:(id)a0 replyConnection:(id)a1;
- (void)waitForService_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)waitForService_error_:(id)a0 replyConnection:(id)a1;

@end
