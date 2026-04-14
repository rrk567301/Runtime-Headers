@class HKObserverSet, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKWristDetectionSettingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    int _disableWristDetectionSettingChangeNotificationToken;
}

@property (retain, nonatomic) id pairedDeviceRegistry;
@property (readonly, nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;

+ (BOOL)isWristDetectEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_startObserving;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (id)_activeWatchNotifications;
- (void)_queue_settingDidChange;
- (void)_queue_notifyObservers;

@end
