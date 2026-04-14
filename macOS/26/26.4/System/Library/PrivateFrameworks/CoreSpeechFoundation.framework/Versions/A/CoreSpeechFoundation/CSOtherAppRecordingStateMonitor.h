@class NSString;

@interface CSOtherAppRecordingStateMonitor : CSEventMonitor <CSOtherAppRecordingStateMonitorProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingOtherAppRecordingState;
- (BOOL)isOtherNonEligibleAppRecording;
- (BOOL)_isEntitledWithDecodedAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)init;
- (void)_systemControllerDied:(id)a0;
- (void)handleOtherAppRecordingStateChange:(id)a0;

@end
