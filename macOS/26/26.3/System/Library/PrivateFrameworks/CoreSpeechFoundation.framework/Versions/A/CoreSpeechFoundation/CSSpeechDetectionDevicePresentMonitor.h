@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)handleSpeechDetectionVADPresentChange:(id)a0;
- (void)_startObservingSpeechDetectionVADPresence;
- (id)init;
- (BOOL)isPresent;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;

@end
