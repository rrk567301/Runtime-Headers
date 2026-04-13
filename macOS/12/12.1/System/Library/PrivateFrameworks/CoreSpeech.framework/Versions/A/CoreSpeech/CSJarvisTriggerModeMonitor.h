@interface CSJarvisTriggerModeMonitor : CSEventMonitor

+ (id)sharedInstance;
+ (id)triggerModeStringDescription:(long long)a0;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (long long)getTriggerMode;
- (void)setTriggerMode:(long long)a0;

@end
