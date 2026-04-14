@interface CSJarvisTriggerModeMonitor : CSEventMonitor

+ (id)sharedInstance;
+ (id)triggerModeStringDescription:(long long)a0;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)setTriggerMode:(long long)a0;
- (long long)getTriggerMode;

@end
