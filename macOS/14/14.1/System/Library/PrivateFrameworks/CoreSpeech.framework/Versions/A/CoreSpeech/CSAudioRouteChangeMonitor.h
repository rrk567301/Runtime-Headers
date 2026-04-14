@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)hearstConnected;
- (BOOL)jarvisConnected;
- (long long)hearstOwnership;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)carPlayConnected;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)hearstRouted;
- (BOOL)siriInputSourceOutOfBand;

@end
