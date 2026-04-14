@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)jarvisConnected;
- (BOOL)hearstConnected;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)hearstRouted;
- (BOOL)siriInputSourceOutOfBand;

@end
