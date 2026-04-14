@interface CSPhoneCallStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)phoneCallState;

@end
