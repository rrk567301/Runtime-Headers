@interface CSSiriEnabledMonitor : CSEventMonitor {
    BOOL _isSiriSettingEnabled;
}

+ (id)sharedInstance;

- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0;
- (BOOL)isEnabled;
- (BOOL)fetchIsEnabled;
- (id)init;

@end
