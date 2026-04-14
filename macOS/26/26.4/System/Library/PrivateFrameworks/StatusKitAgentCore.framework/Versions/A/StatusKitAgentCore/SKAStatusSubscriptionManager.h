@class NSString, NSMapTable, NSArray, NSDictionary, NSObject, NSError;
@protocol SKAPushManaging, OS_dispatch_queue, SKACloudDatabaseManaging, SKAServerBagProviding, SKALocalDatabaseManaging, SKAChannelManaging;

@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging>

@property (retain, nonatomic) NSMapTable *activeTransientStatusSubscriptionsByClient;
@property (retain, nonatomic) NSMapTable *activeTransientPresenceSubscriptionsByClient;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } transientSubscriptionsLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } presenceSubscriptionsLock;
@property (retain, nonatomic) id<SKACloudDatabaseManaging> cloudDatabaseManager;
@property (retain, nonatomic) id<SKALocalDatabaseManaging> localDatabaseManager;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (retain, nonatomic) id<SKAServerBagProviding> serverBag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (void)getAPSDSubscriptionsFor:(NSArray *)a0 completionHandler:(void (^)(NSDictionary *))a1;
- (BOOL)_removeTransientPresenceSubscriptionAssertionForClient:(id)a0 channelIdentifier:(id)a1;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 applicationIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)releasePersistentPresenceSubscriptionForChannelIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)releaseAllTransientPresenceSubscriptionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithCloudDatabaseManager:(id)a0 localDatabaseManager:(id)a1 channelManager:(id)a2 pushManager:(id)a3 serverBag:(id)a4;
- (id)_fetchAllClientActiveSubscriptionAssertions;
- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(id /* block */)a0;
- (BOOL)_addFilterOverride:(int)a0 client:(id)a1 channelIdentifier:(id)a2 error:(id *)a3;
- (id)_sortAndDedupeSubscriptionIdentifiers:(id)a0;
- (id)activePresenceSubscriptionAssertionForChannelIdentifier:(id)a0;
- (BOOL)_activeTransientStatusSubscriptionsExist;
- (void)releaseTransientPresenceSubscriptionForChannelIdentifier:(id)a0 client:(id)a1 shouldMarkCache:(BOOL)a2 completion:(id /* block */)a3;
- (long long)countPresenceSubscriptionsFor:(id)a0;
- (void)getCurrentAPSDSubscriptionsWithCompletionHandler:(void (^)(NSDictionary *, NSDictionary *))a0;
- (id)activePresenceSubscriptionAssertionForPresenceIdentifier:(id)a0;
- (void)_markCacheSubscriptionDateForChannelIdentifier:(id)a0 changeTime:(id)a1;
- (void)recalculateRegisteredSubscriptionsWithCompletion:(void (^)(NSError *))a0;
- (void).cxx_destruct;
- (id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)a0 count:(long long)a1 presenceCount:(long long)a2;
- (BOOL)_addTransientStatusSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (BOOL)_addTransientPresenceSubscriptionAssertionForClient:(id)a0 channelIdentifier:(id)a1 presenceIdentifier:(id)a2 serviceIdentifier:(id)a3 channel:(id)a4;
- (void)retainPersistentPresenceSubscriptionForPresenceIdentifier:(id)a0 channelIdentifier:(id)a1 serviceIdentifier:(id)a2 channel:(id)a3 shouldMarkCache:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)_activePersistentPresenceSubscriptionsExist;
- (id)fetchAllPersistentStatusSubscriptions;
- (BOOL)_removeTransientStatusSubscriptionAssertionForClient:(id)a0 subscriptionIdentifier:(id)a1;
- (void)setPersistentFilterOverride:(int)a0 channelIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)_filterSubscriptionIdentifierToPresence:(id)a0;
- (void)releasePersistentPresenceSubscriptionForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_filterSubscriptionIdentifierToStatus:(id)a0;
- (void)setTransientFilterOverride:(int)a0 channelIdentifier:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (BOOL)exceededPresenceSubscriptionCountForPushTopic:(id)a0;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 shouldMarkCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)updateRegisteredSubscriptionsWithCompletion:(id /* block */)a0;
- (id)_statusTypeIdentifiersRequiringSelfSubscription;
- (void)retainTransientPresenceSubscriptionForPresenceIdentifier:(id)a0 channelIdentifier:(id)a1 serviceIdentifier:(id)a2 channel:(id)a3 client:(id)a4 shouldMarkCache:(BOOL)a5 completion:(id /* block */)a6;
- (BOOL)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(id)a0;
- (id)_fetchAllActivePersistentPresenceSubscriptions;
- (BOOL)isSubscriptionPersistentForChannelIdentifier:(id)a0;
- (id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)a0;
- (id)_fetchAllActiveTransientStatusSubscriptions;
- (void)releaseTransientPresenceSubscriptionForPresenceIdentifier:(id)a0 client:(id)a1 shouldMarkCache:(BOOL)a2 completion:(id /* block */)a3;
- (void)haveExceededPresenceSubscriptionCountForPushTopic:(id)a0 completion:(id /* block */)a1;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 client:(id)a2 shouldMarkCache:(BOOL)a3 completion:(id /* block */)a4;
- (id)_fetchAllActiveTransientPresenceSubscriptions;
- (BOOL)_activeTransientPresenceSubscriptionsExist;

@end
