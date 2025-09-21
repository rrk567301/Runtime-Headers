@interface CSUserSessionActiveMonitor : CSEventMonitor

+ (id)sharedInstance;

- (unsigned long long)type;
- (void)handleConsoleEnabled:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isUserActive;
- (void)_stopMonitoring;

@end
