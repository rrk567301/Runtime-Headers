@class NSString, NSXPCConnection;
@protocol LACXPCConnectionDelegate;

@interface LACXPCConnectionDefaultAdapter : NSObject <LACXPCConnection>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<LACXPCConnectionDelegate> delegate;
@property (readonly, nonatomic) id remoteObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)initWithListenerEndpoint:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectWithErrorHandler:(id /* block */)a0;
- (void)configureWithConfiguration:(id)a0;
- (id)remoteObjectWithErrorHandler:(id /* block */)a0;

@end
