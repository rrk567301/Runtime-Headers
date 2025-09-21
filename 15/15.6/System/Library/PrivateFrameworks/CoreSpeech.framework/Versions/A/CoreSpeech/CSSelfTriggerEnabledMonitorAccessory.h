@interface CSSelfTriggerEnabledMonitorAccessory : CSEventMonitor

@property (nonatomic) char enabled;

+ (id)sharedInstance;

- (id)init;
- (char)isEnabled;
- (void)_stopMonitoring;
- (void)setEnable:(char)a0;
- (void)_didReceiveSelfTriggerChanged:(char)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(char)a1;
- (void)_startMonitoringWithQueue:(id)a0;

@end
