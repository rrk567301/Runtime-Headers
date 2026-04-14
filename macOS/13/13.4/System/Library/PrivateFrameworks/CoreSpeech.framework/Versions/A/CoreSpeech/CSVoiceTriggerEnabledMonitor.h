@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)isEnabled;
- (void)_stopMonitoring;
- (BOOL)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)a0;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;

@end
