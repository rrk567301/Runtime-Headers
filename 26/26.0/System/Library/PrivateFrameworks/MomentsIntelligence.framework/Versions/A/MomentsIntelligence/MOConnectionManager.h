@class NSString, MOConnection, NSXPCConnection;
@protocol MOConnectionManagerDelegate;

@interface MOConnectionManager : NSObject {
    NSXPCConnection *_xpc_connection;
    MOConnection *_mo_connection;
    NSString *_connectionName;
}

@property (weak, nonatomic) id<MOConnectionManagerDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_makeConnectionErrorWithReason:(id)a0;
- (void)_callProxy:(id)a0 usingBlock:(id /* block */)a1 onError:(id /* block */)a2;
- (void)_callProxyProvider:(id /* block */)a0 usingBlock:(id /* block */)a1 onError:(id /* block */)a2;
- (id)_getActiveConnection;
- (id /* block */)_getSingleCallHandler:(id /* block */)a0;
- (void)_postProxy:(id)a0 usingBlock:(id /* block */)a1 onError:(id /* block */)a2;
- (void)_postProxyProvider:(id /* block */)a0 usingBlock:(id /* block */)a1 onError:(id /* block */)a2;
- (void)callAsyncProxyUsingBlock:(id /* block */)a0 onError:(id /* block */)a1;
- (void)callSyncProxyUsingBlock:(id /* block */)a0 onError:(id /* block */)a1;
- (id /* block */)getAsyncProxyProvider;
- (id)getConnectionName;
- (id /* block */)getSyncProxyProvider;
- (id)initWithName:(id)a0 usingDelegate:(id)a1;
- (void)postAsyncProxyUsingBlock:(id /* block */)a0 onError:(id /* block */)a1;
- (void)postSyncProxyUsingBlock:(id /* block */)a0 onError:(id /* block */)a1;
- (void)withProxyProvider:(id /* block */)a0 proxyHandler:(id /* block */)a1 onError:(id /* block */)a2;

@end
