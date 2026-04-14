@class NSXPCInterface, NSXPCConnection;

@interface GDXPCLighthouseService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)collectDBStats:(id *)a0;
- (id)collectDBStatus:(id *)a0;
- (void)locked_establishConnection;

@end
