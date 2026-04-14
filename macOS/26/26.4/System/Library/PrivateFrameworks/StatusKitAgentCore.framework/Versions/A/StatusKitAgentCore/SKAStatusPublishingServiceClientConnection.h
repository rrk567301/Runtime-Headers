@class NSXPCConnection;
@protocol SKAStatusPublishingServiceClientConnectionLifecycleDelegate;

@interface SKAStatusPublishingServiceClientConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SKAStatusPublishingServiceClientConnectionLifecycleDelegate> connectionLifecycleDelegate;
@property (readonly, nonatomic) int processIdentifier;

+ (id)logger;
+ (BOOL)clientIsEntitledForAtLeastOnePublishingServiceType:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;
- (BOOL)clientIsEntitledForPublishingWithStatusTypeIdentifier:(id)a0;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 daemonProtocolDelegate:(id)a2 connectionLifecycleDelegate:(id)a3;
- (id)synchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)a0;

@end
