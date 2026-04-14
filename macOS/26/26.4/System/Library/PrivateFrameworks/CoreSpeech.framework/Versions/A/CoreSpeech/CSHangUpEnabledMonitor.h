@class NSObject;
@protocol OS_dispatch_queue;

@interface CSHangUpEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isEnabled;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (BOOL)_checkCanUseVoiceTriggerDuringCallEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(BOOL)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_voiceTriggerDuringCallEnabledDidChange;

@end
