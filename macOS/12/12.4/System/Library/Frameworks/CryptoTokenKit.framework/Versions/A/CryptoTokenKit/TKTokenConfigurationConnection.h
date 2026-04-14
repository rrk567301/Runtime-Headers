@class NSXPCListenerEndpoint, NSXPCConnection;

@interface TKTokenConfigurationConnection : NSObject {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)configurationProtocol;

@end
