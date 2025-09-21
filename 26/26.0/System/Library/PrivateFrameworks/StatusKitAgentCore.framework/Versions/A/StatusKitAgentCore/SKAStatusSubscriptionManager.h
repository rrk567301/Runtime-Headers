@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue, SKADatabaseManaging, SKAPushManaging, SKAChannelManaging;

@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging>

@property (retain, nonatomic) NSMapTable *activeTransientStatusSubscriptionsByClient;
@property (retain, nonatomic) NSMapTable *activeTransientPresenceSubscriptionsByClient;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } transientSubscriptionsLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } presenceSubscriptionsLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 pushManager:(id)a2;
- (id)_filterSubscriptionIdentifierToPresence:(id)a0;
- (id)_fetchAllActiveSubscriptionAssertionsWithCache;
- (id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)a0 count:(long long)a1 presenceCount:(long long)a2 databaseContext:(id)a3;
- (void)retainPersistentPresenceSubscriptionForPresenceIdentifier:(id)a0 channelIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)_sortAndDedupeSubscriptionIdentifiers:(id)a0;
- (double)_presenceSubscriptionTTL;
- (long long)_maxPresenceSubscriptionCacheCount;
- (long long)_hardMaxSubscriptionCount;
- (BOOL)isSubscriptionPersistentForChannelIdentifier:(id)a0;
- (void)releasePersistentPresenceSubscriptionForChannelIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)_activeTransientStatusSubscriptionsExist;
- (void)releaseTransientPresenceSubscriptionForChannelIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (double)_statusSubscriptionTTL;
- (id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)a0;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (BOOL)_addTransientPresenceSubscriptionAssertionForClient:(id)a0 channelIdentifier:(id)a1 presenceIdentifier:(id)a2;
- (id)_statusTypeIdentifiersRequiringSelfSubscription;
- (id)_fetchAllClientActiveSubscriptionAssertions;
- (void)releaseAllTransientPresenceSubscriptionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (id)_fetchAllActivePersistentPresenceSubscriptions;
- (BOOL)_activePersistentPresenceSubscriptionsExist;
- (BOOL)_removeTransientPresenceSubscriptionAssertionForClient:(id)a0 channelIdentifier:(id)a1;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (id)_fetchAllActiveTransientPresenceSubscriptions;
- (BOOL)_haveExceededPresenceSubscriptionCount;
- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(id /* block */)a0;
- (BOOL)_activeTransientPresenceSubscriptionsExist;
- (id)_filterSubscriptionIdentifierToStatus:(id)a0;
- (BOOL)_removeTransientStatusSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id /* block */)a0;
- (id)_recalculateSubscriptionsForActiveStatusSubscriptions:(id)a0 activePresenceSubscriptions:(id)a1 currentSubscriptions:(id)a2;
- (void)retainTransientPresenceSubscriptionForPresenceIdentifier:(id)a0 channelIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (void)_markCacheSubscriptionDateForChannelIdentifier:(id)a0 changeTime:(id)a1;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (BOOL)_addTransientStatusSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)a0;
- (long long)_maxSubscriptionCacheCount;
- (void)releasePersistentPresenceSubscriptionForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;

@end
