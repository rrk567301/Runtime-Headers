@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

- (id)daemon;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)init;
- (id)connection;
- (void).cxx_destruct;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (void)dealloc;

@end
