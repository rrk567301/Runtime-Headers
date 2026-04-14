@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

- (id)daemon;
- (id)connection;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
