@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (id)initWithDeviceContext:(id)a0;
- (void)postClouddWalrusUpdateNotification;
- (void)addClouddThrottle:(id)a0;
- (void)clearAllClouddThrottles;
- (void).cxx_destruct;

@end
