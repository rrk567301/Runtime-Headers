@class NSXPCInterface, NSXPCConnection;

@interface GDXPCCoordinationService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)graphUpdatedWithError:(id *)a0;
- (void)locked_establishConnection;

@end
