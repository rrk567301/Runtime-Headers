@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriSettingEnabled;
}

+ (id)sharedInstance;

- (BOOL)isEnabled;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (void)_notifyObserver:(id)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)fetchIsEnabled;

@end
