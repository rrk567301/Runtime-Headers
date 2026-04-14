@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (id)initWithDeviceContext:(id)a0;
- (void)clearAllClouddThrottles;
- (void)addClouddThrottle:(id)a0;
- (void).cxx_destruct;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (void)postClouddWalrusUpdateNotification;

@end
