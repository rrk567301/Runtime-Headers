@interface CSAudioPlayingAppMonitor : CSEventMonitor

+ (id)sharedMonitor;

- (void)_startObservingSystemControllerLifecycle;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingAudioPlayingState;
- (void)handleAudioPlayingStateChange:(id)a0;
- (id)playingApps;

@end
