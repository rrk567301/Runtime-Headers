@interface CSSelfTriggerEnabledMonitorAccessory : CSEventMonitor

@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)isEnabled;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;
- (void)setEnable:(BOOL)a0;
- (void)_didReceiveSelfTriggerChanged:(BOOL)a0;

@end
