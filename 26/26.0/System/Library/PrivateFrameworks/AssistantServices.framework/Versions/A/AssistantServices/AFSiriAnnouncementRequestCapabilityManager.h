@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, AFAnnouncementRequestCapabilityProviding;

@interface AFSiriAnnouncementRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    id<AFAnnouncementRequestCapabilityProviding> _capabilityProvider;
    long long _platform;
}

+ (BOOL)_supportsAnnouncementType:(long long)a0 forSupportedIntents:(id)a1 forBundleId:(id)a2 onPlatform:(long long)a3;
+ (long long)notificationAnnouncementTypeForNotificationFromApp:(id)a0 withIntentIDs:(id)a1 notificationContent:(id)a2 onPlatform:(long long)a3;
+ (id)_requiredPlatformsForNotificationAnnouncementType:(long long)a0;
+ (id)supportedAnnouncementTypesForBundleId:(id)a0 onPlatform:(long long)a1;
+ (id)_requiredBundleIDsForNotificationAnnouncementType:(long long)a0;
+ (Class)_classForPlatform:(long long)a0;
+ (id)_candidateAnnounceNotificationTypesFromApp:(id)a0 withIntentIDs:(id)a1 notificationContentType:(id)a2 onPlatform:(long long)a3;

- (void)provider:(id)a0 availableAnnouncementRequestTypesChanged:(unsigned long long)a1;
- (void)provider:(id)a0 eligibleAnnouncementRequestTypesChanged:(unsigned long long)a1;
- (id)initWithPlatform:(long long)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
