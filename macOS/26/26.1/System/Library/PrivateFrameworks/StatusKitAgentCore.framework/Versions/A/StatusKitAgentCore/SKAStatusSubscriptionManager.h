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

- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(id /* block */)a0;
- (void)releaseTransientPresenceSubscriptionForChannelIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (id)_sortAndDedupeSubscriptionIdentifiers:(id)a0;
- (long long)_maxPresenceSubscriptionCacheCount;
- (id)_fetchAllClientActiveSubscriptionAssertions;
- (id)_filterSubscriptionIdentifierToPresence:(id)a0;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (id)_fetchAllActiveTransientPresenceSubscriptions;
- (void)releasePersistentPresenceSubscriptionForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)isSubscriptionPersistentForChannelIdentifier:(id)a0;
- (id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)a0 count:(long long)a1 presenceCount:(long long)a2 databaseContext:(id)a3;
- (id)_recalculateSubscriptionsForActiveStatusSubscriptions:(id)a0 activePresenceSubscriptions:(id)a1 currentSubscriptions:(id)a2;
- (double)_presenceSubscriptionTTL;
- (BOOL)_addTransientPresenceSubscriptionAssertionForClient:(id)a0 channelIdentifier:(id)a1 presenceIdentifier:(id)a2;
- (BOOL)_activeTransientStatusSubscriptionsExist;
- (void)retainTransientPresenceSubscriptionForPresenceIdentifier:(id)a0 channelIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (BOOL)_addTransientStatusSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (void)releaseAllTransientPresenceSubscriptionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (BOOL)_activePersistentPresenceSubscriptionsExist;
- (long long)_hardMaxSubscriptionCount;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(id)a0;
- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 pushManager:(id)a2;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (id)_fetchAllActiveSubscriptionAssertionsWithCache;
- (void)releasePersistentPresenceSubscriptionForChannelIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)_removeTransientPresenceSubscriptionAssertionForClient:(id)a0 channelIdentifier:(id)a1;
- (id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)a0;
- (double)_statusSubscriptionTTL;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)_activeTransientPresenceSubscriptionsExist;
- (void).cxx_destruct;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (id)_fetchAllActivePersistentPresenceSubscriptions;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_statusTypeIdentifiersRequiringSelfSubscription;
- (void)_markCacheSubscriptionDateForChannelIdentifier:(id)a0 changeTime:(id)a1;
- (long long)_maxSubscriptionCacheCount;
- (id)_filterSubscriptionIdentifierToStatus:(id)a0;
- (BOOL)_removeTransientStatusSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (BOOL)_haveExceededPresenceSubscriptionCount;
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id /* block */)a0;
- (id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)a0;
- (void)retainPersistentPresenceSubscriptionForPresenceIdentifier:(id)a0 channelIdentifier:(id)a1 completion:(id /* block */)a2;

@end
