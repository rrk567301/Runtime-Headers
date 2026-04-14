@class NSMutableDictionary;
@protocol GTServiceProvider, GTXPCConnection;

@interface GTServiceProviderXPCDispatcher : GTXPCDispatcher <GTServiceProviderXPCDispatcher, GTServiceProviderDelegate> {
    id<GTServiceProvider> _serviceProvider;
    id<GTXPCConnection> _notifyConnection;
    NSMutableDictionary *_registeredConnections;
}

- (void).cxx_destruct;
- (void)setConnections:(id)a0;
- (void)setDelegate_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1 notifyConnection:(id)a2;
- (void)allServices:(id)a0 replyConnection:(id)a1;
- (void)registerService_forProcess_:(id)a0 replyConnection:(id)a1;
- (void)waitForService_:(id)a0 replyConnection:(id)a1;
- (void)notifyServiceListChanged:(id)a0;

@end
