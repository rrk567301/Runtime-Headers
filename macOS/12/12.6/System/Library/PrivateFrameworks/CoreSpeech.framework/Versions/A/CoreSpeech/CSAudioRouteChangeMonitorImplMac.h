@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplMac : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    id /* block */ _pickedRoutesChangedBlock;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)hearstConnected;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_fetchHearstConnectionState;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (BOOL)jarvisConnected;
- (void)preferredExternalRouteDidChange;
- (BOOL)_fetchHearstConnectionStateWithDeviceID:(unsigned int)a0;

@end
