@interface CSSiriEnabledMonitor : CSEventMonitor {
    char _isSiriSettingEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (char)isEnabled;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_didReceiveSiriSettingChanged:(char)a0;
- (char)fetchIsEnabled;

@end
