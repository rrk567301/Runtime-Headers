@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (BOOL)_checkVoiceTriggerEnabled;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)a0;
- (BOOL)isEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;

@end
