@class NSObject;
@protocol OS_dispatch_queue;

@interface CSHangUpEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    char _isEnabled;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)isEnabled;
- (void)_stopMonitoring;
- (char)_checkCanUseVoiceTriggerDuringCallEnabled;
- (void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(char)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(char)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_voiceTriggerDuringCallEnabledDidChange;

@end
