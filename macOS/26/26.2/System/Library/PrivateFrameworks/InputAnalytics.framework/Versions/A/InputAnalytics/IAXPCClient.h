@class NSXPCConnection, IAXPCProtocolObject;

@interface IAXPCClient : NSObject {
    NSXPCConnection *_connection;
    IAXPCProtocolObject *_serverInstance;
}

@property (readonly) IAXPCProtocolObject *server;

- (void)invalidateConnection;
- (void)logMessage:(id)a0;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
