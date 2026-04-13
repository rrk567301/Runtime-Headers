@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsXPCServiceListenerDelegate;

@interface SiriAnalyticsXPCServiceListener : NSObject <NSXPCListenerDelegate, SiriAnalyticsXPCService> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsXPCServiceListenerDelegate> _delegate;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    id /* block */ _largeMessageReceived;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_connectionInterrupted:(id)a0;
- (void)_addConnection:(id)a0;
- (id)initWithMachServiceName:(id)a0 queue:(id)a1 delegate:(id)a2;
- (oneway void)publishMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)resolveMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (void)_connectionDisconnected:(id)a0;
- (id)mapToAnnotatedMessage:(id)a0;

@end
