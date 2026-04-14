@interface CSCXPhoneCallStateMonitor : CSPhoneCallStateMonitor

+ (id)sharedInstance;

- (unsigned long long)phoneCallState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)firstPartyCall;
- (id)init;

@end
