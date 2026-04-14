@class NSString, AFSiriAudioRoute, AFSettingsConnection, AFNotifyObserver, NSObject, NSHashTable;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate, AFSiriHeadphonesMonitorDelegate, AFAnnouncementRequestCapabilityProviding> {
    BOOL _localVoiceAssetAvailable;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_forcedUpdateObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _lastKnownAvailableAnnouncementRequests;
    unsigned long long _lastKnownEligibleAnnouncementRequests;
    NSHashTable *_delegates;
}

@property (retain, nonatomic) AFSiriAudioRoute *currentAnnouncementRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (id)provider;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (long long)platform;

- (id)_init;
- (void)_fetchEligibleAnnouncementRequestTypesAndNotifyObserversAndShouldRelyOnCachedStateIfIneligble:(BOOL)a0;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)addDelegate:(id)a0;
- (void)_updateAudioRouteAvailabilityAndBroadcast:(BOOL)a0;
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)a0;
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObserversAndShouldRelyOnCachedStateIfIneligble:(BOOL)a0;
- (id)_settingsConnection;
- (id)_getCurrentAnnouncementRoute;
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(id /* block */)a0;
- (void)_notifyObserversOfEligibleAnnouncementRequestTypes:(unsigned long long)a0;
- (id)currentlyRoutedHeadphonesBTAddress;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(id /* block */)a0;
- (id)_headphonesMonitor;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)_fetchInitialState;
- (void)notifyObserversOfAvailableAnnouncementRequestTypes;
- (void).cxx_destruct;
- (id)currentlyRoutedHeadphonesProductID;
- (void)_settingsConnectionDidDisconnect;
- (void)privateAudioSessionStateDidChange:(unsigned long long)a0;

@end
