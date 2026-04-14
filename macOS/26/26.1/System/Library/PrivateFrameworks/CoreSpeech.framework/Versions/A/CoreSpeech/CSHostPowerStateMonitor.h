@interface CSHostPowerStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (long long)currentDarwinHostState;
- (long long)currentPowerState;
- (long long)currentRawPowerState;

@end
