@interface CSOtherAppRecordingStateMonitorImpMicAttribution : CSOtherAppRecordingStateMonitor

+ (id)sharedInstance;

- (BOOL)isOtherNonEligibleAppRecording;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;

@end
