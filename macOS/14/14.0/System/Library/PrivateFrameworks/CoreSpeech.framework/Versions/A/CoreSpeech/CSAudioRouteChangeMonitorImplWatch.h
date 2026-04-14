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
- (BOOL)hearstConnected;
- (void)_startObservingAudioRouteChange;
- (long long)hearstOwnership;
- (BOOL)jarvisConnected;
- (BOOL)_fetchHearstRoutedState;
- (BOOL)_fetchSiriInputSourceOutOfBandState;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)_notifySiriInputSourceOutOfBandState:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_systemControllerDied:(id)a0;
- (void)activeAudioRouteDidChange:(id)a0;
- (BOOL)carPlayConnected;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)hearstRouted;
- (BOOL)siriInputSourceOutOfBand;

@end
