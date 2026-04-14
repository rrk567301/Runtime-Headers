@class NSObject;
@protocol PDSDaemonListenerVendor, PDSRemote, PDSXPCDaemonConnection, OS_dispatch_queue;

@interface PDSXPCClient : NSObject <PDSXPCHandshake>

@property (retain, nonatomic) id<PDSRemote> daemonListener;
@property (retain, nonatomic) id<PDSDaemonListenerVendor> daemonListenerVendor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<PDSXPCDaemonConnection> connection;

- (BOOL)_hasToolEntitlement;
- (id)initWithConnection:(id)a0 interfaceVendor:(id)a1 daemonListenerVendor:(id)a2 queue:(id)a3;
- (void)resume;
- (void)connectWithClientID:(id)a0 completion:(id /* block */)a1;
- (id)_connectionEntitledClientIDs;
- (void)connectInternalWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
