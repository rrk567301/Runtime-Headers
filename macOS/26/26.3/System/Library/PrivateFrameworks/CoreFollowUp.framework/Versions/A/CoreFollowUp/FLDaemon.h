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
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (id)connection;
- (void).cxx_destruct;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (void)dealloc;

@end
