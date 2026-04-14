@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplMac : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    long long _hearstOwnershipStatus;
    id /* block */ _pickedRoutesChangedBlock;
    id /* block */ _ownershipChangedBlock;
    unsigned int _currentOwnershipListeningDeviceId;
    BOOL _isOwnershipStatusListening;
}

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (BOOL)hearstConnected;
- (BOOL)jarvisConnected;
- (void)preferredExternalRouteDidChange;
- (long long)hearstOwnership;
- (long long)_fetchHearstOwnershipStateWithDeviceID:(unsigned int)a0;
- (BOOL)_fetchHearstRoutedState;
- (BOOL)_fetchHearstRoutedStateWithDeviceID:(unsigned int)a0;
- (void)_notifyHearstConnectionState:(BOOL)a0;
- (void)_notifyHearstOwnershipState:(long long)a0;
- (void)_notifyHearstRoutedState:(BOOL)a0;
- (void)_registerHearstOwnershipListenerWithAudioDeviceId:(unsigned int)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_unregisterHearstOwnershipListenerWithAudioDeviceId:(unsigned int)a0;
- (BOOL)carPlayConnected;
- (void)getHearstConnected:(id /* block */)a0;
- (void)getHearstOwnershipStatus:(id /* block */)a0;
- (void)getHearstRouted:(id /* block */)a0;
- (void)getJarvisConnected:(id /* block */)a0;
- (void)getSiriInputSourceOutOfBand:(id /* block */)a0;
- (BOOL)hearstRouted;
- (void)notifyHearstOwnershipState;
- (BOOL)siriInputSourceOutOfBand;

@end
