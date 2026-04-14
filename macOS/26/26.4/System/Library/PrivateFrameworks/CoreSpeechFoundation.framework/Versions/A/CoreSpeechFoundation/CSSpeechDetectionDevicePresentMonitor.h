@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startObservingSystemControllerLifecycle;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isPresent;
- (id)init;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSpeechDetectionVADPresence;

@end
