@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)a0;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;

@end
