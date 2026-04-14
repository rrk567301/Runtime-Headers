@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)isPresent;
- (void)_startObservingSpeechDetectionVADPresence;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;
- (id)init;
- (void)_systemControllerDied:(id)a0;

@end
