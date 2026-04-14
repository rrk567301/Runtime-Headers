@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void)clearAllClouddThrottles;
- (void)postClouddWalrusUpdateNotification;
- (void).cxx_destruct;
- (void)addClouddThrottle:(id)a0;
- (id)initWithDeviceContext:(id)a0;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;

@end
