@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriSettingEnabled;
}

+ (id)sharedInstance;

- (BOOL)isEnabled;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (BOOL)fetchIsEnabled;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0;
- (void)_stopMonitoring;

@end
