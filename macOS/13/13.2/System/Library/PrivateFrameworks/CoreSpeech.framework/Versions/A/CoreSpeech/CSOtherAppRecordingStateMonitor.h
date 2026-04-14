@interface CSOtherAppRecordingStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)handleOtherAppRecordingStateChange:(id)a0;
- (BOOL)isOtherNonEligibleAppRecording;
- (void)_startObservingOtherAppRecordingState;
- (void)_systemControllerDied:(id)a0;

@end
