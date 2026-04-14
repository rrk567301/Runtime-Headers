@class HKWristDetectionSettingManager;

@interface HKWristDetectionSettingDataSource : HKObserverBridge

@property (readonly, nonatomic) HKWristDetectionSettingManager *wristDetectionSettingManager;

- (void).cxx_destruct;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)initWithWristDetectionSettingManager:(id)a0;

@end
