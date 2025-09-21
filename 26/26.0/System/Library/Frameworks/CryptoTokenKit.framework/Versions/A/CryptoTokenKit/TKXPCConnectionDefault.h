@class NSString, NSXPCConnection;
@protocol TKXPCConnectionDelegate;

@interface TKXPCConnectionDefault : NSObject <TKXPCConnection>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<TKXPCConnectionDelegate> delegate;
@property (readonly, nonatomic) id remoteObjectProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)initWithListenerEndpoint:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)configureWithConfiguration:(id)a0;

@end
