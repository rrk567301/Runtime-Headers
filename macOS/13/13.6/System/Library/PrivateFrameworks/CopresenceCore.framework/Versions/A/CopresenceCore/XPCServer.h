@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_log, XPCServerDelegate;

@interface XPCServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_xpcConnectionListenerQueue;
    NSObject<OS_os_log> *_log;
}

@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (retain, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSXPCInterface *serverXPCInterface;
@property (retain, nonatomic) NSXPCInterface *clientXPCInterface;
@property (retain, nonatomic) id serviceProvider;
@property (weak, nonatomic) id<XPCServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)stop;
- (id)connections;
- (id)clients;
- (void)_addConnection:(id)a0;
- (void)_removeConnection:(id)a0;
- (void)connectionDidConnect:(id)a0;
- (id)_clientForConnection:(id)a0;
- (id)processNameForCurrentConnection;
- (id)_processNameForConnection:(id)a0;
- (id)bundleIdForConnection:(id)a0;
- (id)bundleIdForCurrentConnection;
- (void)connectionDidDisconnect:(id)a0;
- (id)initWithListener:(id)a0 machServiceName:(id)a1;
- (unsigned long long)processNameHashForConnection:(id)a0;
- (unsigned long long)processNameHashForCurrentConnection;
- (id)remoteProxies;
- (id)remoteProxyByProcessHash:(unsigned long long)a0;
- (id)remoteProxyForBundleId:(id)a0;

@end
