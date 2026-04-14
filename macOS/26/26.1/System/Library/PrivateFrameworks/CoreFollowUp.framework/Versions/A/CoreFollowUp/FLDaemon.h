@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(id /* block */)a0;

- (void)invalidateConnection;
- (id)remoteObjectInterface;
- (id)connection;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
