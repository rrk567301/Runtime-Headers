@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject <AFAnnouncementRequestCapabilityProviding> {
    NSObject<OS_dispatch_queue> *_providerQueue;
    long long _carPlayConnectionState;
    unsigned long long _lastKnownAvailableAnnouncementRequestTypes;
    unsigned long long _lastKnownEligibleAnnouncementRequestTypes;
    NSHashTable *_delegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (id)provider;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (long long)platform;

- (id)initWithQueue:(id)a0;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)addDelegate:(id)a0;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:(id /* block */)a0;
- (void)_isCarPlayConnectedWithCompletion:(id /* block */)a0;
- (void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:(unsigned long long)a0;
- (unsigned long long)_requestTypesForCarPlayAvailableOrConnected:(BOOL)a0;
- (void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:(unsigned long long)a0;
- (void)_updateForCarPlaySessionConnected:(BOOL)a0;
- (BOOL)currentlyAbleToAnnounce;
- (void)isCarPlayConnectedWithCompletion:(id /* block */)a0;
- (void)updateForCarPlaySessionConnected:(BOOL)a0;

@end
