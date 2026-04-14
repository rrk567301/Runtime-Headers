@class NSString, NSXPCConnection;

@interface KVXPCClient : NSObject

@property (retain) NSXPCConnection *connection;
@property unsigned short failureCode;
@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) unsigned short interruptionCode;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)_failureHandlerWithResponse:(unsigned short)a0;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)a0;
- (id)initWithServiceProtocol:(id)a0 machServiceName:(id)a1 clientId:(id)a2 interruptionCode:(unsigned short)a3 invalidationCode:(unsigned short)a4;
- (void)serviceRequest:(BOOL)a0 completion:(id /* block */)a1 usingBlock:(id /* block */)a2;

@end
