@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(id /* block */)a0;

- (id)connection;
- (void)invalidateConnection;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectInterface;
- (void).cxx_destruct;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void)dealloc;

@end
