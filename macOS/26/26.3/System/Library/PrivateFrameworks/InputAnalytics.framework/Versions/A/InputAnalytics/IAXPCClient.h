@class NSXPCConnection, IAXPCProtocolObject;

@interface IAXPCClient : NSObject {
    NSXPCConnection *_connection;
    IAXPCProtocolObject *_serverInstance;
}

@property (readonly) IAXPCProtocolObject *server;

- (void)logMessage:(id)a0;
- (void)invalidateConnection;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithServiceName:(id)a0;

@end
