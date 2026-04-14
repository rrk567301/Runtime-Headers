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
- (void)_startMonitoringWithQueue:(id)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (BOOL)hearstConnected;
- (void)getHearstRouted:(id /* block */)a0;
- (BOOL)hearstRouted;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)jarvisConnected;
- (BOOL)carPlayConnected;
- (BOOL)_fetchHearstRoutedState;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)preferredExternalRouteDidChange;
- (BOOL)_fetchHearstRoutedStateWithDeviceID:(unsigned int)a0;
- (void)_notifyHearstConnectionState:(BOOL)a0;

@end
