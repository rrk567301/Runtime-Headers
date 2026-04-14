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

- (id)initWithListenerEndpoint:(id)a0;
- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void)invalidate;
- (void)activate;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasEntitlement:(id)a0;
- (id)synchronousRemoteObjectWithErrorHandler:(id /* block */)a0;
- (void)configureWithConfiguration:(id)a0;
- (id)remoteObjectWithErrorHandler:(id /* block */)a0;

@end
