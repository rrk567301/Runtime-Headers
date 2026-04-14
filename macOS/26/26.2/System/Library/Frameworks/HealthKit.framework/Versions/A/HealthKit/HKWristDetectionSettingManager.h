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
- (void)_queue_notifyObservers;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (id)_activeWatchNotifications;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (void)_stopObserving;
- (id)init;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)_queue_settingDidChange;
- (void)_startObserving;
- (void)dealloc;

@end
