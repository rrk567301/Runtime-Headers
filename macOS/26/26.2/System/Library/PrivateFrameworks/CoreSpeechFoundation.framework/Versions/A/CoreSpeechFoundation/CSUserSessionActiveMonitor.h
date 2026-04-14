@interface CSUserSessionActiveMonitor : CSEventMonitor

+ (id)sharedInstance;

- (unsigned long long)type;
- (BOOL)isUserActive;
- (void)handleConsoleEnabled:(id)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;

@end
