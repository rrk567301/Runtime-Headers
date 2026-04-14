@interface CSOtherAppRecordingStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingOtherAppRecordingState;
- (void)_startObservingSystemControllerLifecycle;
- (void)_systemControllerDied:(id)a0;
- (void)handleOtherAppRecordingStateChange:(id)a0;
- (BOOL)isOtherNonEligibleAppRecording;

@end
