@class NSXPCConnection;
@protocol SKAPresenceClientConnectionLifecycleDelegate;

@interface SKAPresenceClientConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKAPresenceClientConnectionLifecycleDelegate> connectionLifecycleDelegate;
@property (readonly, nonatomic) int processIdentifier;

+ (id)logger;
+ (BOOL)clientIsEntitledForPresence:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)clientIdentifierPrefixForServiceIdentifier:(id)a0;
- (id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;
- (BOOL)clientIsEntitledForPresenceIdentifier:(id)a0 serviceIdentifier:(id)a1;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 daemonProtocolDelegate:(id)a2 connectionLifecycleDelegate:(id)a3;
- (id)synchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;

@end
