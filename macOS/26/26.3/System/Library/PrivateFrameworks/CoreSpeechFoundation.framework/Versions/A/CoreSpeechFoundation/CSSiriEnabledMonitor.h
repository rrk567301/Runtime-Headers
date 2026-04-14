@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriSettingEnabled;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (void)_notifyObserver:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)fetchIsEnabled;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;

@end
