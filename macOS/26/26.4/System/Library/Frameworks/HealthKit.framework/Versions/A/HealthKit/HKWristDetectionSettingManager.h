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

- (void)_queue_settingDidChange;
- (void)_startObserving;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (void)_queue_notifyObservers;
- (void)_stopObserving;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)init;
- (void)registerObserver:(id)a0;
- (id)_activeWatchNotifications;
- (void)dealloc;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;

@end
