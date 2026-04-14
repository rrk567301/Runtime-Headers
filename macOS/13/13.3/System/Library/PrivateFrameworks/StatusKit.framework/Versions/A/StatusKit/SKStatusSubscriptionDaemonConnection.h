@class NSXPCConnection, NSXPCInterface;
@protocol SKStatusSubscriptionDaemonDelegateProtocol, SKStatusSubscriptionConnectionDelegateProtocol;

@interface SKStatusSubscriptionDaemonConnection : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *daemonXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonDelegateXPCInterface;

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKStatusSubscriptionDaemonDelegateProtocol> subscriptionDaemonDelegate;
@property (weak, nonatomic) id<SKStatusSubscriptionConnectionDelegateProtocol> connectionDelegate;

+ (id)logger;

- (void).cxx_destruct;
- (void)setXPCConnection:(id)a0;
- (unsigned long long)_xpcConnectionOptions;
- (id)asynchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;
- (id)initWithSubscriptionDaemonDelegate:(id)a0 connectionDelegate:(id)a1;
- (id)synchronousRemoteDaemonWithErrorHandler:(id /* block */)a0;

@end
