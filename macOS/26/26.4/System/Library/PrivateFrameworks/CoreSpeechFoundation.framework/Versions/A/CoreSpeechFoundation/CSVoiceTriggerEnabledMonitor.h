@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isEnabled;
- (BOOL)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)a0;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)a0;
- (id)init;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;

@end
