@class CKDXPCConnection, CKDLogicalDeviceContext;
@protocol CKXPCLogicalDeviceScopedClient;

@interface CKDLogicalDeviceScopedClientProxy : NSObject

@property (nonatomic) int pid;
@property (weak, nonatomic) CKDXPCConnection *clientConnection;
@property (retain, nonatomic) id<CKXPCLogicalDeviceScopedClient> logicalDeviceScopedClientProxyCreator;
@property (retain, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property char hasBeenThrottled;

- (id)description;
- (void).cxx_destruct;
- (void)tearDown;
- (id)CKPropertiesDescription;
- (void)addThrottle:(id)a0;
- (void)resetThrottles;
- (void)_getLogicalDeviceScopedClientProxyCreatorSynchronous:(char)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedClientProxySynchronous:(char)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;
- (id)initWithClientConnection:(id)a0 deviceContext:(id)a1;
- (id)openFileWithOpenInfo:(id)a0 error:(id *)a1;
- (char)processIsAttached;
- (id)readBytesOfInMemoryAssetContentWithUUID:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 error:(id *)a3;

@end
