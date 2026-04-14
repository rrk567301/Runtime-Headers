@interface CSOtherAppRecordingStateMonitorImpMicAttribution : CSOtherAppRecordingStateMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isOtherNonEligibleAppRecording;
- (void)_stopMonitoring;
- (id)init;

@end
