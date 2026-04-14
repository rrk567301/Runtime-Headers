@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSpeechDetectionVADPresence;
- (void)_startObservingSystemControllerLifecycle;
- (void)_systemControllerDied:(id)a0;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;
- (BOOL)isPresent;

@end
