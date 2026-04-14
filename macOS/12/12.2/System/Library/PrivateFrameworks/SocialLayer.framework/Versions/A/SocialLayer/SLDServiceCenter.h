@class NSXPCConnection;

@interface SLDServiceCenter : NSObject

@property (retain, nonatomic) NSXPCConnection *conn;
@property (nonatomic) BOOL shouldAutoReconnect;
@property (nonatomic) BOOL waitingForConnection;

+ (id)sharedCenter;

- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)_establishNewConnection;
- (void)_invalidateAndDestroyConnection;
- (id)_synchronousRemoteObjectProxy;
- (void)connectionForServiceClass:(Class)a0 reply:(id /* block */)a1;

@end
