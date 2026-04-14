@interface CSTUPhoneCallStateMonitor : CSPhoneCallStateMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)firstPartyCall;
- (unsigned long long)phoneCallState;

@end
