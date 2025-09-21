@class NSString, NSXPCConnection;
@protocol SKAPresenceClientConnectionLifecycleDelegate;

@interface SKAPresenceClientConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKAPresenceClientConnectionLifecycleDelegate> connectionLifecycleDelegate;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *clientID;

+ (id)logger;
+ (id)clientIDForConnection:(id)a0;
+ (BOOL)clientIsEntitledForPresence:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 daemonProtocolDelegate:(id)a2 connectionLifecycleDelegate:(id)a3;
- (id)synchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;

@end
