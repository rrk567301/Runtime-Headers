@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject <AFAnnouncementRequestCapabilityProviding> {
    NSObject<OS_dispatch_queue> *_providerQueue;
    char _isCarPlayConnected;
    unsigned long long _lastKnownAvailableAnnouncementRequestTypes;
    unsigned long long _lastKnownEligibleAnnouncementRequestTypes;
    NSHashTable *_delegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)platform;
+ (id)provider;
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:(id /* block */)a0;
- (void)_isCarPlayConnectedWithCompletion:(id /* block */)a0;
- (void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:(unsigned long long)a0;
- (unsigned long long)_requestTypesForCarPlayAvailableOrConnected:(char)a0;
- (void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:(unsigned long long)a0;
- (void)_updateForCarPlaySessionConnected:(char)a0;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)isCarPlayConnectedWithCompletion:(id /* block */)a0;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)updateForCarPlaySessionConnected:(char)a0;

@end
