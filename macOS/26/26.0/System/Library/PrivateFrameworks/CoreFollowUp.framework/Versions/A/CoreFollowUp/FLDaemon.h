@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(id /* block */)a0;

- (id)remoteObjectInterface;
- (void)invalidateConnection;
- (void)dealloc;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)connection;
- (void).cxx_destruct;

@end
