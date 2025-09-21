@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplMac : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    long long _hearstRouteStatus;
    id /* block */ _pickedRoutesChangedBlock;
    id /* block */ _ownershipChangedBlock;
    unsigned int _currentOwnershipListeningDeviceId;
    char _isOwnershipStatusListening;
}

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (char)jarvisConnected;
- (void)_startMonitoringWithQueue:(id)a0;
- (char)carPlayConnected;
- (void)getHearstRouteStatus:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (long long)hearstRouteStatus;
- (void)preferredExternalRouteDidChange;
- (long long)_fetchHearstOwnershipStateWithDeviceID:(unsigned int)a0;
- (long long)_fetchHearstRouteStatus;
- (char)_fetchHearstRoutedStateWithDeviceID:(unsigned int)a0;
- (void)_notifyHearstRouteStatus:(long long)a0;
- (void)_registerHearstOwnershipListenerWithAudioDeviceId:(unsigned int)a0;
- (void)_unregisterHearstOwnershipListenerWithAudioDeviceId:(unsigned int)a0;

@end
