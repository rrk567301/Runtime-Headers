@class NSString, NSXPCConnection;

@interface KVXPCClient : NSObject

@property (retain) NSXPCConnection *connection;
@property unsigned short failureCode;
@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) unsigned short interruptionCode;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)terminate;
- (id)initWithServiceProtocol:(id)a0 machServiceName:(id)a1 clientId:(id)a2 interruptionCode:(unsigned short)a3 invalidationCode:(unsigned short)a4;
- (id /* block */)_failureHandlerWithResponse:(unsigned short)a0;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)a0;
- (void)serviceRequest:(BOOL)a0 completion:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (void)serviceOptionsRespondingRequest:(BOOL)a0 completion:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (void)serviceVersionRespondingRequest:(BOOL)a0 completion:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (void)serviceArrayRespondingRequestWithCompletion:(id /* block */)a0 usingBlock:(id /* block */)a1;
- (id)_remoteObjectProxy:(BOOL)a0 errorCompletion:(id /* block */)a1;

@end
