@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)jarvisConnected;
- (long long)hearstOwnership;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)carPlayConnected;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)getHearstRouteStatus:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (long long)hearstRouteStatus;
- (void)routeIsDoAPSupportedWithRouteUID:(id)a0 withCompletion:(id /* block */)a1;

@end
