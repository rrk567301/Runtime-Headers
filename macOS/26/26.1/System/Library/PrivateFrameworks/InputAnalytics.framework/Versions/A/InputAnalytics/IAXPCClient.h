@class NSXPCConnection, IAXPCProtocolObject;

@interface IAXPCClient : NSObject {
    NSXPCConnection *_connection;
    IAXPCProtocolObject *_serverInstance;
}

@property (readonly) IAXPCProtocolObject *server;

- (void)logMessage:(id)a0;
- (void)invalidateConnection;
- (id)initWithServiceName:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
