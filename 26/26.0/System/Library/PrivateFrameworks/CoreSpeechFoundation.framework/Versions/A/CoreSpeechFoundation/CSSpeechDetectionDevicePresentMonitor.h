@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)isPresent;
- (void)_startObservingSpeechDetectionVADPresence;
- (void)_startObservingSystemControllerLifecycle;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)a0;

@end
