@class NSString, BMXPCListener, NSObject;
@protocol OS_dispatch_queue, BMComputeSourceDaemon;

@interface BMComputeSourceServer : NSObject <BMXPCListenerDelegate, NSXPCConnectionDelegate, BMComputeSourceServer> {
    BMXPCListener *_listener;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, weak, nonatomic) id<BMComputeSourceDaemon> source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (BOOL)validateConnection:(id)a0 error:(id *)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)requestEndpointForProxyingConnectionsWithReply:(id /* block */)a0;
- (id)init;
- (id)initWithQueue:(id)a0 domain:(unsigned long long)a1 source:(id)a2 listener:(id)a3;
- (void)eventsPrunedWithStreamIdentifier:(id)a0 account:(id)a1 remoteName:(id)a2 reason:(unsigned long long)a3;
- (BOOL)_acceptConnection:(id)a0;
- (void)sendEventWithStreamIdentifier:(id)a0 timestamp:(id)a1 signpostID:(unsigned long long)a2 eventData:(id)a3 eventDataVersion:(unsigned int)a4 account:(id)a5 remoteName:(id)a6;
- (void)replyToInvocation:(id)a0 withError:(id)a1;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 domain:(unsigned long long)a1 source:(id)a2;

@end
