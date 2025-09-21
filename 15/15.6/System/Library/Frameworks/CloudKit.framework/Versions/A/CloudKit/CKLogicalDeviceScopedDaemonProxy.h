@class CKLogicalDeviceContext, CKXPCConnection, NSXPCInterface;
@protocol CKXPCLogicalDeviceScopedDaemon, NSObject;

@interface CKLogicalDeviceScopedDaemonProxy : NSObject

@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonLogicalDeviceScopedInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientLogicalDeviceScopedInterface;

@property (retain, nonatomic) id<CKXPCLogicalDeviceScopedDaemon> logicalDeviceScopedDaemonProxyCreator;
@property char hasValidLogicalDeviceScopedDaemonProxyCreator;
@property (retain, nonatomic) id<NSObject> connectionInterruptedObserver;
@property (readonly, weak, nonatomic) CKLogicalDeviceContext *deviceContext;
@property (readonly, nonatomic) CKXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_getLogicalDeviceScopedDaemonProxyCreatorSynchronous:(char)a0 completionHandler:(id /* block */)a1;
- (void)_getLogicalDeviceScopedDaemonProxySynchronous:(char)a0 errorHandler:(id /* block */)a1 daemonProxyHandler:(id /* block */)a2;
- (void)addClouddThrottle:(id)a0;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (void)clearAllClouddThrottles;
- (id)initWithDeviceContext:(id)a0;
- (void)postClouddWalrusUpdateNotification;

@end
