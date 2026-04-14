@interface CSUserSessionActiveMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)type;
- (void)handleConsoleEnabled:(id)a0;
- (BOOL)isUserActive;

@end
