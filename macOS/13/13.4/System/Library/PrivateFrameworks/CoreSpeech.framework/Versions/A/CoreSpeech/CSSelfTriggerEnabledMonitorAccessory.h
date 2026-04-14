@interface CSSelfTriggerEnabledMonitorAccessory : CSEventMonitor

@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (id)init;
- (BOOL)isEnabled;
- (void)setEnable:(BOOL)a0;
- (void)_stopMonitoring;
- (void)_didReceiveSelfTriggerChanged:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;

@end
