@class NSHashTable, NSString, AFSiriAudioRoute, AFSettingsConnection, AFNotifyObserver, NSObject, NSMutableSet, AFBluetoothHeadphoneInEarDetectionState;
@protocol OS_dispatch_queue;

@interface AFSiriHeadphonesMonitor : NSObject <AFNotifyObserverDelegate, AFSiriAudioRouteMonitorDelegate, AFSettingsDelegate> {
    unsigned long long _sessionState;
    unsigned long long _wirelessSplitterSessionActive;
    AFBluetoothHeadphoneInEarDetectionState *_inEarDetectionState;
    BOOL _guestConnected;
    BOOL _inWirelessSplitterSessionStateValid;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_inEarDetectionStateObserver;
    AFNotifyObserver *_wirelessSplitterSessionObserver;
    AFNotifyObserver *_wirelessGuestConnectionObserver;
    NSString *_btAddress;
    NSString *_routeName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_btQueue;
    NSHashTable *_delegates;
    NSMutableSet *_notificationPostAssertions;
    id /* block */ _internalGestureTestingHandler;
    long long _scheduledHeadGesture;
}

@property (retain, nonatomic) AFSiriAudioRoute *currentAudioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (id)_init;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)_settingsConnection;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)mockHeadGesture:(long long)a0 schedule:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_fetchInitialState;
- (void).cxx_destruct;
- (void)_settingsConnectionDidDisconnect;
- (void)_audioRouteDidChange:(id)a0;
- (id)_audioRouteMonitor;
- (void)_broadcastInEarDetectionStateChangesFrom:(id)a0 to:(id)a1;
- (void)_fetchInEarDetectionStateAndStartObservingFromSourceForBTAddress:(id)a0 withCompletion:(id /* block */)a1;
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(id /* block */)a0;
- (unsigned long long)_observerID;
- (void)_recomputePrivateSessionStateAndBroadcast:(BOOL)a0;
- (void)_stopObservingInEarDetectionStateFromSource;
- (void)_updateAnnounceNotificationsOnHearingAidSupportedStatus;
- (void)_updateAudioRouteFromRoute:(id)a0 toRoute:(id)a1 andBroadcast:(BOOL)a2;
- (void)_updateInEarDetectionStateAndObserve;
- (void)_updateWirelessSplitterSessionInfoAndObserve;
- (void)currentAudioRouteDidChangeFrom:(id)a0 to:(id)a1;
- (id)discoveryNotificationAssertion;
- (void)fetchInEarDetctionStateForBTAddress:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchPrivateSessionStateWithCompletion:(id /* block */)a0;
- (void)invalidateDiscoveryNotificationAssertion:(id)a0;
- (void)registerInternalGestureTestingHandler:(id /* block */)a0;

@end
