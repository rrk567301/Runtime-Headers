@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, ACCTransportClientDelegate;

@interface ACCTransportClient : NSObject <ACCTransportXPCClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) NSMutableDictionary *endpointDataOutHandlers;
@property (retain, nonatomic) NSMutableDictionary *connectionPropertyChangeHandlers;
@property (retain, nonatomic) NSMutableDictionary *endpointPropertyChangeHandlers;
@property (retain, nonatomic) NSMutableDictionary *endpointSecureTunnelDataHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *endpointEventHandlerQueue;
@property (weak, nonatomic) id<ACCTransportClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)connectToServer;
- (void)setHandler:(id /* block */)a0 forEndpointProperty:(id)a1;
- (id)accessoryInfoForConnectionWithUUID:(id)a0;
- (id)accessoryInfoForEndpointWithUUID:(id)a0;
- (void)authStateDidChange:(int)a0 forConnectionWithUUID:(id)a1 previousAuthState:(int)a2 authType:(int)a3 connectionIsAuthenticated:(char)a4 connectionWasAuthenticated:(char)a5;
- (int)authStatusForConnectionWithUUID:(id)a0 authType:(int)a1;
- (id)connectionUUIDForEndpointWithUUID:(id)a0;
- (id)createConnectionWithType:(int)a0 andIdentifier:(id)a1;
- (id)createEndpointWithTransportType:(int)a0 andProtocol:(int)a1 andIdentifier:(id)a2 andDataOutHandler:(id /* block */)a3 forConnectionWithUUID:(id)a4 publishConnection:(char)a5;
- (char)destroyConnectionWithUUID:(id)a0;
- (char)destroyEndpointWithUUID:(id)a0;
- (id)endpointUUIDsForConnectionWithUUID:(id)a0;
- (id)identifierForConnectionWithUUID:(id)a0;
- (id)identifierForEndpointWithUUID:(id)a0;
- (char)isConnectionAuthenticated:(id)a0;
- (void)launchServer;
- (char)processIncomingData:(id)a0 forEndpointWithUUID:(id)a1;
- (char)processOutgoingSecureTunnelData:(id)a0 forEndpoint:(id)a1 forType:(unsigned char)a2;
- (void)propertiesDidChange:(id)a0 forConnectionWithUUID:(id)a1 previousProperties:(id)a2;
- (void)propertiesDidChange:(id)a0 forEndpointWithUUID:(id)a1 previousProperties:(id)a2 connectionUUID:(id)a3;
- (id)propertiesForConnectionWithUUID:(id)a0;
- (id)propertiesForEndpointWithUUID:(id)a0;
- (char)publishConnectionWithUUID:(id)a0;
- (void)receivedSecureTunnelData:(id)a0 forEndpoint:(id)a1;
- (char)removeProperty:(id)a0 forConnectionWithUUID:(id)a1;
- (char)removeProperty:(id)a0 forEndpointWithUUID:(id)a1;
- (void)sendOutgoingData:(id)a0 forEndpointWithUUID:(id)a1 connectionUUID:(id)a2 withReply:(id /* block */)a3;
- (char)setAccessoryInfo:(id)a0 forEndpointWithUUID:(id)a1;
- (void)setConnectionAuthenticated:(id)a0 state:(BOOL)a1;
- (void)setHandler:(id /* block */)a0 forConnectionProperty:(id)a1;
- (char)setProperties:(id)a0 forConnectionWithUUID:(id)a1;
- (char)setProperties:(id)a0 forEndpointWithUUID:(id)a1;
- (char)setProperty:(id)a0 value:(id)a1 forConnectionWithUUID:(id)a2;
- (char)setProperty:(id)a0 value:(id)a1 forEndpointWithUUID:(id)a2;
- (void)setSecureTunnelDataReceiveHandler:(id /* block */)a0 forEndpoint:(id)a1;

@end
