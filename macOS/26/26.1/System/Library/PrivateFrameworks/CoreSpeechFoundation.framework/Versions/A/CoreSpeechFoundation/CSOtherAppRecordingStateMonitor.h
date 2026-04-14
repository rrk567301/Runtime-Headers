@class NSString;

@interface CSOtherAppRecordingStateMonitor : CSEventMonitor <CSOtherAppRecordingStateMonitorProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)_isEntitledWithDecodedAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_startObservingOtherAppRecordingState;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)handleOtherAppRecordingStateChange:(id)a0;
- (BOOL)isOtherNonEligibleAppRecording;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (id)init;
- (void)_systemControllerDied:(id)a0;

@end
