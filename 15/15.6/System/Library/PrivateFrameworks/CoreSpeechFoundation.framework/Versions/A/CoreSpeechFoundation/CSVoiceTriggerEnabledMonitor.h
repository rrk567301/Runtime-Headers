@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    char _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (char)isEnabled;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withEnabled:(char)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (char)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(char)a0;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(char)a0;

@end
