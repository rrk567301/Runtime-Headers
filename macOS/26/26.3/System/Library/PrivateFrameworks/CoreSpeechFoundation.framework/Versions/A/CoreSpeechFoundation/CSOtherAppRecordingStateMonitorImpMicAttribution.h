@interface CSOtherAppRecordingStateMonitorImpMicAttribution : CSOtherAppRecordingStateMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)isOtherNonEligibleAppRecording;

@end
