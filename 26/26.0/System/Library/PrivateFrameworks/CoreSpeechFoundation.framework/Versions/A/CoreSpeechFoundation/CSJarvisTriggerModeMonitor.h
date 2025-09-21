@interface CSJarvisTriggerModeMonitor : CSEventMonitor

+ (id)sharedInstance;
+ (id)triggerModeStringDescription:(long long)a0;

- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)setTriggerMode:(long long)a0;
- (long long)getTriggerMode;

@end
