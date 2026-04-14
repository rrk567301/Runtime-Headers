@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    BOOL _isSiriInputSourceOutOfBand;
}

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_systemControllerDied:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (BOOL)hearstConnected;
- (void)getHearstRouted:(id /* block */)a0;
- (BOOL)hearstRouted;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)jarvisConnected;
- (BOOL)carPlayConnected;
- (BOOL)siriInputSourceOutOfBand;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (void)activeAudioRouteDidChange:(id)a0;
- (void)_startObservingAudioRouteChange;
- (BOOL)_fetchHearstRoutedState;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (BOOL)_fetchSiriInputSourceOutOfBandState;
- (void)_notifySiriInputSourceOutOfBandState:(BOOL)a0;

@end
