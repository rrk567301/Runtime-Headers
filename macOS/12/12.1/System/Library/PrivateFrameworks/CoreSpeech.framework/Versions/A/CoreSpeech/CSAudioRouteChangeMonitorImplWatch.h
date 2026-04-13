@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)hearstConnected;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (BOOL)_fetchHearstConnectionState;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (void)_startObservingAudioRouteChange;
- (void)activeAudioRouteDidChange:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)jarvisConnected;
- (void)_systemControllerDied:(id)a0;

@end
