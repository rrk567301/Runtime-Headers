@class CKLogicalDeviceScopedStateManager, CKThrottleManager, CKTestDeviceReference, CKLogicalDeviceScopedDaemonProxy;
@protocol CKTestDeviceReference, CKTestDevice;

@interface CKLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKLogicalDeviceScopedDaemonProxy *deviceScopedDaemonProxy;
@property (retain, nonatomic) CKLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (retain, nonatomic) CKThrottleManager *throttleManager;
@property (retain, nonatomic) id<CKTestDevice> testDeviceProtocol;
@property (readonly, nonatomic) id<CKTestDeviceReference> testDeviceReferenceProtocol;
@property (readonly, nonatomic) CKTestDeviceReference *testDeviceReference;
@property (readonly, nonatomic) long long pushBehavior;

+ (id)defaultContext;
+ (id)deviceContextForTestDeviceReferenceProtocol:(id)a0;
+ (id)deviceContextForTestDeviceReference:(id)a0;

- (void).cxx_destruct;
- (id)_initWithTestDeviceReferenceProtocol:(id)a0;
- (id)deviceScopedPushTopic:(id)a0;

@end
