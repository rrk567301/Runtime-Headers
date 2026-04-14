@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)a0;
- (BOOL)isEnabled;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)a0;
- (BOOL)_checkVoiceTriggerEnabled;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (id)init;

@end
