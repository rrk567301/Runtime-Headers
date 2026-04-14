@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (BOOL)isPresent;
- (void)_startObservingSpeechDetectionVADPresence;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;

@end
