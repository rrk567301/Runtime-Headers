@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)hearstConnected;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)jarvisConnected;

@end
