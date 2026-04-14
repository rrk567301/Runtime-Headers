@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriSettingEnabled;
}

+ (id)sharedInstance;

- (void)_notifyObserver:(id)a0;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (BOOL)isEnabled;
- (BOOL)fetchIsEnabled;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (id)init;

@end
