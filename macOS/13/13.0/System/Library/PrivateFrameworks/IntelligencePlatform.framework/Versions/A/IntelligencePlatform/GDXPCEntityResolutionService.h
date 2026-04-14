@class NSXPCInterface, NSXPCConnection;

@interface GDXPCEntityResolutionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)locked_establishConnection;
- (id)submitQuery:(id)a0 withError:(id *)a1;

@end
