@class NSXPCConnection, IAXPCProtocolObject;

@interface IAXPCClient : NSObject {
    NSXPCConnection *_connection;
    IAXPCProtocolObject *_serverInstance;
}

@property (readonly) IAXPCProtocolObject *server;

- (void)invalidateConnection;
- (void)dealloc;
- (void)logMessage:(id)a0;
- (id)init;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;

@end
