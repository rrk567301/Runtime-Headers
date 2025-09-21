@class NSMapTable, NSString, NSObject, SKARateLimiter;
@protocol OS_dispatch_queue, SKAMessagingProviding, SKADatabaseManaging, SKAAccountProviding, SKAPresenceManagingDelegate, SKAStatusSubscriptionManaging, SKAPresentDevicesManaging, SKAChannelManaging;

@interface SKAPresenceManager : NSObject <SKAPresentDevicesManagingDelegate, SKAPresenceManaging>

@property (retain, nonatomic) NSMapTable *activeTransientPresenceAssertionsByClient;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (retain, nonatomic) id<SKAMessagingProviding> messagingProvider;
@property (retain, nonatomic) id<SKAStatusSubscriptionManaging> subscriptionManager;
@property (retain, nonatomic) id<SKAPresentDevicesManaging> presentDevicesManager;
@property (weak, nonatomic) id<SKAPresenceManagingDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *payloadUpdateProcessingQueue;
@property (nonatomic) BOOL presenceEnabledByServer;
@property (retain, nonatomic) SKARateLimiter *rateLimiter;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } transientAssertionsLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (BOOL)isClientPayloadValid:(id)a0 withError:(id *)a1;
+ (long long)_maxPayloadSizeBytes;
+ (long long)decideUpdateActionForCurrentCheckpoint:(unsigned long long)a0 payloadLastCheckpoint:(unsigned long long)a1 payloadCurrentCheckpoint:(unsigned long long)a2;
+ (id)oversizeLogger;
+ (id)payloadFromActivityUpdate:(id)a0 forChannel:(id)a1;

- (void)presentDevicesForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_shouldCryptoRoll;
- (void)_findOrCreatePresenceChannelForPresenceIdentifier:(id)a0 options:(id)a1 databaseContext:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)_currentCheckpointForChannel:(id)a0;
- (void)recalculateActivityTracking;
- (void)_findPresenceChannelForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2 completion:(id /* block */)a3;
- (void)createPresenceChannelForPresenceIdentifier:(id)a0 options:(id)a1 databaseContext:(id)a2 completion:(id /* block */)a3;
- (void)didUpdatePresentDevices:(id)a0 forChannel:(id)a1;
- (void)pollAndUpdatePresentDevicesForChannel:(id)a0 completion:(id /* block */)a1;
- (BOOL)removeTransientPresenceAssertionForClient:(id)a0 presenceIdentifier:(id)a1;
- (BOOL)_activeTransientPresenceAssertionsExist;
- (void)retainTransientPresenceAssertionForPresenceIdentifier:(id)a0 withPresencePayload:(id)a1 assertionOptions:(id)a2 presenceOptions:(id)a3 client:(id)a4 completion:(id /* block */)a5;
- (void)_markCryptoRoll;
- (void)_createPresenceChannelForPresenceIdentifier:(id)a0 options:(id)a1 databaseContext:(id)a2 completion:(id /* block */)a3;
- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 subscriptionManager:(id)a2 accountProvider:(id)a3 messagingProvider:(id)a4 delegate:(id)a5;
- (void)_setCheckpointForChannel:(id)a0 checkpoint:(unsigned long long)a1;
- (void)releaseTransientPresenceAssertionForPresenceIdentifier:(id)a0 options:(id)a1 client:(id)a2 completion:(id /* block */)a3;
- (void)_sendPresenceDeactivationMessageForChannel:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_rollChannelForCryptoFailureIfAllowed:(id)a0;
- (BOOL)addTransientPresenceAssertionForClient:(id)a0 presenceIdentifier:(id)a1 presenceOptions:(id)a2 assertionOptions:(id)a3 payload:(id)a4;
- (void)findPresenceChannelForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2 completion:(id /* block */)a3;
- (BOOL)activePresenceAssertionExistsForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1;
- (BOOL)addPersistentPresenceAssertionForPresenceIdentifier:(id)a0 presenceOptions:(id)a1 assertionOptions:(id)a2 payload:(id)a3;
- (void)_sendPollingMessageForChannel:(id)a0 completion:(id /* block */)a1;
- (void)retainPersistentPresenceAssertionForPresenceIdentifier:(id)a0 withPresencePayload:(id)a1 assertionOptions:(id)a2 presenceOptions:(id)a3 completion:(id /* block */)a4;
- (void)releasePersistentPresenceAssertionForPresenceIdentifier:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)removePersistentPresenceAssertionForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1;
- (void)channelReceivedIncomingPayloadUpdate:(id)a0 channel:(id)a1 withIdentifier:(unsigned long long)a2;
- (void)_presencePayloadForChannel:(id)a0 clientPayload:(id)a1 options:(id)a2 timestamp:(id)a3 completion:(id /* block */)a4;
- (void)releaseAllTransientPresenceAssertionsAssociatedWithClient:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (long long)_cryptoRollResetTimeSeconds;
- (void)_handleIncomingPayloadUpdate:(id)a0 onChannel:(id)a1 withIdentifier:(unsigned long long)a2;
- (void)_presentDevicesChanged:(id)a0 forChannel:(id)a1;
- (id)_sortAndDedupePresenceIdentifiers:(id)a0;
- (id)activePresenceAssertionForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1;
- (id)_activePersistentPresenceAssertionForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1;
- (void).cxx_destruct;
- (void)findOrCreatePresenceChannelForPresenceIdentifier:(id)a0 options:(id)a1 databaseContext:(id)a2 completion:(id /* block */)a3;
- (void)_sendPresenceAssertionMessageForChannel:(id)a0 withPayload:(id)a1 withPriority:(long long)a2 options:(id)a3 isRefresh:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)_activePersistentPresenceAssertionsExist;

@end
