@class NSObject;
@protocol OS_dispatch_queue;

@interface CSHangUpEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isEnabled;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_voiceTriggerDuringCallEnabledDidChange;
- (BOOL)isEnabled;
- (void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(BOOL)a0;
- (id)init;
- (BOOL)_checkCanUseVoiceTriggerDuringCallEnabled;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)_stopMonitoring;

@end
