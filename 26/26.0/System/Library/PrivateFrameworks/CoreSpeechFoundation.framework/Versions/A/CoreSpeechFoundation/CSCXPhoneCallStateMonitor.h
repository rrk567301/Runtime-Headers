@interface CSCXPhoneCallStateMonitor : CSPhoneCallStateMonitor

+ (id)sharedInstance;

- (BOOL)firstPartyCall;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)phoneCallState;
- (void)_stopMonitoring;

@end
