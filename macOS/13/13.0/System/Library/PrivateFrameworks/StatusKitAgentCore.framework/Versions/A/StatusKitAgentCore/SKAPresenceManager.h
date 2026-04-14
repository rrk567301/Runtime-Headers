@class NSString, NSMapTable, NSObject;
@protocol SKAPresenceManagingDelegate, SKADatabaseManaging, SKAAccountProviding, SKAMessagingProviding, OS_dispatch_queue, SKAChannelManaging;

@interface SKAPresenceManager : NSObject <SKAPresenceManaging>

@property (retain, nonatomic) NSMapTable *activePresenceAssertionsByClient;
@property (retain, nonatomic) NSMapTable *activeParticipantsByChannel;
@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (retain, nonatomic) id<SKAMessagingProviding> messagingProvider;
@property (weak, nonatomic) id<SKAPresenceManagingDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *channelFetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_noExistingAssertionError;
+ (id)_noExistingChannelError;
+ (id)_keyGenerationError;
+ (id)_payloadGenerationError;

- (void).cxx_destruct;
- (void)presentDevicesForPresenceIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldReauthForError:(id)a0;
- (void)retainPresenceAssertionForPresenceIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void)releasePresenceAssertionForPresenceIdentifier:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void)releaseAllPresenceAssertionsAssociatedWithClient:(id)a0 completion:(id /* block */)a1;
- (void)channelReceivedIncomingPayloadUpdate:(id)a0 channel:(id)a1;
- (void)findOrCreatePresenceChannelForPresenceIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)findPresenceChannelForPresenceIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)createPresenceChannelForPresenceIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 accountProvider:(id)a2 messagingProvider:(id)a3 delegate:(id)a4;
- (void)_sendPresenceAssertionMessageForChannel:(id)a0 isRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)_sendPollingMessageForChannel:(id)a0 completion:(id /* block */)a1;
- (void)_handleBulkUpdateParticipantPayloads:(id)a0 forChannel:(id)a1;
- (void)_sendPresenceDeactivationMessageForChannel:(id)a0 completion:(id /* block */)a1;
- (void)_presentDevicesChangedForChannel:(id)a0;
- (unsigned long long)_currentCheckpointForChannel:(id)a0;
- (void)_setCheckpointForChannel:(id)a0 checkpoint:(unsigned long long)a1;
- (BOOL)_addPresenceAssertionForClient:(id)a0 presenceIdentifier:(id)a1;
- (BOOL)_removePresenceAssertionForClient:(id)a0 presenceIdentifier:(id)a1;
- (id)_activePresenceAssertionsForClient:(id)a0;
- (BOOL)_addPresentDeviceForChannel:(id)a0 presentDevice:(id)a1;
- (BOOL)_removePresentDeviceForChannel:(id)a0 presentDevice:(id)a1;
- (id)_activePresentDevicesForChannel:(id)a0;
- (void)_clearPresentDevicesForChannel:(id)a0;
- (id)_sortAndDedupePresenceIdentifiers:(id)a0;
- (void)_recalculateActivityTracking;
- (BOOL)_activePresenceAssertionsExist;
- (BOOL)_activePresenceAssertionExistsForPresenceIdentifier:(id)a0;
- (void)_findOrCreatePresenceChannelForPresenceIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)_findPresenceChannelForPresenceIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)_createPresenceChannelForPresenceIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)_presencePayloadForChannel:(id)a0 timestamp:(id)a1 completion:(id /* block */)a2;
- (id)_presentDeviceFromPayload:(id)a0 onChannel:(id)a1;
- (id)_mostRecentAssertionTimeForTokenURI:(id)a0 onChannel:(id)a1;
- (id)_deviceIdentifierForToken:(id)a0;
- (BOOL)_shouldReassert;
- (void)_markReassert;
- (long long)_reassertResetTimeSeconds;

@end
