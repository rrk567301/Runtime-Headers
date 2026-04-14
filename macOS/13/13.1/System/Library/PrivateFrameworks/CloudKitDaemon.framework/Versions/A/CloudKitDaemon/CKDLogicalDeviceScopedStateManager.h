@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0;
- (void)clearAllClouddThrottles;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (void)addClouddThrottle:(id)a0;
- (void)postClouddWalrusUpdateNotification;

@end
