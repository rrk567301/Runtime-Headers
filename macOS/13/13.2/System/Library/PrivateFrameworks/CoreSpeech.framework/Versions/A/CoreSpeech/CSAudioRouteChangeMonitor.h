@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (BOOL)hearstConnected;
- (void)getHearstRouted:(id /* block */)a0;
- (BOOL)hearstRouted;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)jarvisConnected;
- (BOOL)siriInputSourceOutOfBand;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;

@end
