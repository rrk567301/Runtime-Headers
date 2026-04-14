@class NSData, WriteConfigOnewayMessageDispatcher, NSXPCConnection;
@protocol XPCWriteConfigOneway;

@interface WriteConfigClient : NSObject {
    WriteConfigOnewayMessageDispatcher *_onewayMessageDispatcher;
}

@property BOOL requiresAuthorization;
@property (readonly) NSXPCConnection *connection;
@property (readonly) id<XPCWriteConfigOneway> remoteProxy;
@property (readonly) NSData *authorizationData;

+ (id)sharedClient;

- (void)disconnect;
- (BOOL)isAuthenticated;
- (void)dealloc;
- (void)addBarrierBlock:(id /* block */)a0;
- (void)_connectionDidInvalidate;
- (id)remoteProxy;
- (void)authenticateUsingExternalForm:(id)a0;
- (BOOL)authenticateUsingExternalFormSync:(id)a0;
- (void)runBlockSync:(id /* block */)a0;
- (BOOL)runBlockSync:(id /* block */)a0 timeOut:(unsigned long long)a1;
- (id)syncProxyWithSemaphore:(id)a0;

@end
