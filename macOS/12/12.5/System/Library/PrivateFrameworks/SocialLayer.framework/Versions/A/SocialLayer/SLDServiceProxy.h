@class NSXPCConnection;
@protocol SLDServiceProxyDelegate;

@interface SLDServiceProxy : NSObject

@property (retain, nonatomic) NSXPCConnection *conn;
@property (nonatomic) BOOL waitingForConnection;
@property (nonatomic) BOOL shouldAutoReconnect;
@property (nonatomic) BOOL connectionActive;
@property (nonatomic) Class serviceClass;
@property (weak, nonatomic) id<SLDServiceProxyDelegate> delegate;

+ (id)proxyForServiceClass:(Class)a0 delegate:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)_connectionInvalidated;
- (id)remoteService;
- (void)_establishNewConnection;
- (void)_invalidateAndDestroyConnection;
- (id)initWithServiceClass:(Class)a0 delegate:(id)a1;
- (void)_receivedServiceConnection:(id)a0;
- (int)remoteProcessID;

@end
