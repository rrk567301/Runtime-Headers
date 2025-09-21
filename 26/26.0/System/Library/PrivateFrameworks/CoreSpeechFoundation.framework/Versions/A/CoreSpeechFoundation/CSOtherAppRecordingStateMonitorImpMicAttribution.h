@interface CSOtherAppRecordingStateMonitorImpMicAttribution : CSOtherAppRecordingStateMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isOtherNonEligibleAppRecording;
- (void)_stopMonitoring;

@end
