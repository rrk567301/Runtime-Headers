@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplMac : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    id /* block */ _pickedRoutesChangedBlock;
}

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (BOOL)jarvisConnected;
- (void)preferredExternalRouteDidChange;
- (BOOL)hearstConnected;
- (BOOL)_fetchHearstRoutedState;
- (BOOL)_fetchHearstRoutedStateWithDeviceID:(unsigned int)a0;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)carPlayConnected;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)hearstRouted;
- (BOOL)siriInputSourceOutOfBand;

@end
