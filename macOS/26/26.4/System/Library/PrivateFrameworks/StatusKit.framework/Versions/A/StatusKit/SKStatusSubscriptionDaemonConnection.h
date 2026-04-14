@class NSXPCConnection, NSXPCListenerEndpoint, NSXPCInterface;
@protocol SKStatusSubscriptionDaemonDelegateProtocol, SKStatusSubscriptionConnectionDelegateProtocol;

@interface SKStatusSubscriptionDaemonConnection : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *daemonXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonDelegateXPCInterface;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (weak, nonatomic) id<SKStatusSubscriptionDaemonDelegateProtocol> subscriptionDaemonDelegate;
@property (weak, nonatomic) id<SKStatusSubscriptionConnectionDelegateProtocol> connectionDelegate;

+ (id)logger;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_resetConnectionHandlers;
- (unsigned long long)_xpcConnectionOptions;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;
- (id)initWithSubscriptionDaemonDelegate:(id)a0 connectionDelegate:(id)a1;
- (id)initWithSubscriptionDaemonDelegate:(id)a0 connectionDelegate:(id)a1 listenerEndpoint:(id)a2;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;

@end
