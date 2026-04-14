@interface CSSRFUserSettingMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_didReceiveSRFUserSettingChanged:(id)a0;
- (void)_notifyObserver:(id)a0 withSRFUserSetting:(long long)a1;
- (BOOL)isSiriRestrictedOnLockScreen;

@end
