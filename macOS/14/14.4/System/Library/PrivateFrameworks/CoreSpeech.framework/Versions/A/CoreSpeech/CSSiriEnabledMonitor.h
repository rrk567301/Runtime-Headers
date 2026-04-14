@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)isEnabled;
- (void)_stopMonitoring;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)fetchIsEnabled;

@end
