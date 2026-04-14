@class NSString, NSXPCConnection;

@interface CCXPCClient : NSObject <CCOnBehalfOfAccessClientProtocol>

@property (retain) NSXPCConnection *connection;
@property long long connectionErrorCode;
@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) NSString *useCase;

+ (id)errorDomain;
+ (long long)interruptionErrorCode;
+ (long long)invalidationErrorCode;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (void)requestBiomeEndpointForAppScopedService:(unsigned long long)a0 user:(unsigned int)a1 reply:(id /* block */)a2;
- (id)remoteObjectProxy:(BOOL)a0 errorHandler:(id /* block */)a1;
- (id /* block */)_connectionTerminationHandlerWithErrorCode:(long long)a0;
- (id)initWithRemoteObjectInterface:(id)a0 exportedInterface:(id)a1 connection:(id)a2 clientId:(id)a3 useCase:(id)a4;
- (id)initWithRemoteObjectInterface:(id)a0 exportedInterface:(id)a1 serviceName:(id)a2 clientId:(id)a3 useCase:(id)a4;
- (id)initWithRemoteObjectXPCInterface:(id)a0 exportedXPCInterface:(id)a1 connection:(id)a2 clientId:(id)a3 useCase:(id)a4;

@end
