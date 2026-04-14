@class HKObserverBridgeHandle;

@interface _HKWristDetectionSettingManagerObserverBridge : NSObject <HKWristDetectionSettingManagerObserver>

@property (readonly, nonatomic) HKObserverBridgeHandle *handle;

- (void).cxx_destruct;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)a0;
- (id)initWithHandle:(id)a0;

@end
