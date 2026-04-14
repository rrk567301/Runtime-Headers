@interface CSPickableRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_systemControllerDied:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)_startObservingAudioPickableRouteChange;
- (void)pickableRoutesDidChange:(id)a0;

@end
