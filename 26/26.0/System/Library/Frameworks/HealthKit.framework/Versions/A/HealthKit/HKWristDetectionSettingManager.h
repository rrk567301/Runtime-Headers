@class HKObserverSet, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKWristDetectionSettingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    int _disableWristDetectionSettingChangeNotificationToken;
    id _pairedDeviceRegistry;
}

@property (readonly, nonatomic) id pairedDeviceRegistry;
@property (readonly, nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;

+ (BOOL)isWristDetectEnabled;

- (void)unregisterObserver:(id)a0;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)_startObserving;
- (void)_queue_settingDidChange;
- (id)_activeWatchNotifications;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (void)_queue_notifyObservers;
- (void)_stopObserving;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0 queue:(id)a1;

@end
