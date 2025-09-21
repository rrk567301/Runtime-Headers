@interface CSPickableRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startObservingSystemControllerLifecycle;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingAudioPickableRouteChange;
- (void)pickableRoutesDidChange:(id)a0;

@end
