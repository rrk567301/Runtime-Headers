@class NSString;

@interface CSOtherAppRecordingStateMonitor : CSEventMonitor <CSOtherAppRecordingStateMonitorProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_startObservingOtherAppRecordingState;
- (void)_startObservingSystemControllerLifecycle;
- (id)init;
- (void)handleOtherAppRecordingStateChange:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_isEntitledWithDecodedAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)isOtherNonEligibleAppRecording;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)a0;

@end
