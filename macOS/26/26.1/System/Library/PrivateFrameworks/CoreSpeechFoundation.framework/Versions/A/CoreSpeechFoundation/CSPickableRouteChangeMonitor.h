@interface CSPickableRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (id)init;
- (void)_systemControllerDied:(id)a0;
- (void)_startObservingAudioPickableRouteChange;
- (void)pickableRoutesDidChange:(id)a0;

@end
