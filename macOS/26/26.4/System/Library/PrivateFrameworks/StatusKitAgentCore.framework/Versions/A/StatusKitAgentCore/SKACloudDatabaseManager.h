@class NSString;
@protocol SKACloudDatabaseProviding, SKACloudDatabaseManagingDelegate;

@interface SKACloudDatabaseManager : SKABaseDatabaseManager <SKACloudDatabaseManaging>

@property (readonly, nonatomic) id<SKACloudDatabaseProviding> databaseProvider;
@property (readonly, weak, nonatomic) id<SKACloudDatabaseManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void).cxx_destruct;
- (BOOL)deleteRemovedUserWithHandle:(id)a0 presenceIdentifier:(id)a1 databaseContext:(id)a2;
- (id)existingInvitedUsersForInvitedHandle:(id)a0 onChannel:(id)a1 databaseContext:(id)a2;
- (id)existingPersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingChannelsForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingChannelsForChannelIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (id)_existingChannelsForDatabaseChannel:(id)a0 databaseContext:(id)a1;
- (id)_existingChannelsForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (id)_existingDecommissionedChannelsWithDatabaseContext:(id)a0;
- (id)_existingInvitedUsersForDatabaseInvitedUser:(id)a0 databaseChannel:(id)a1 databaseContext:(id)a2;
- (id)_existingInvitedUsersForInvitedHandle:(id)a0 channel:(id)a1 databaseContext:(id)a2;
- (id)_existingPersonalChannelForDatabaseChannel:(id)a0 databaseContext:(id)a1;
- (id)_existingPersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingPersonalChannelsForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingReceivedInvitationsForChannelIdentifier:(id)a0 sortedByDateReceived:(BOOL)a1 databaseContect:(id)a2;
- (id)_existingReceivedInvitationsForHandle:(id)a0 presenceIdentifier:(id)a1 databaseContext:(id)a2;
- (id)_existingReceivedInvitationsForHandle:(id)a0 statusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (id)_existingRemovedUsersForHandle:(id)a0 presenceIdentifier:(id)a1 databaseContext:(id)a2;
- (id)_existingRemovedUsersForHandle:(id)a0 statusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (id)allExistingChannelsForHandle:(id)a0 presenceIdentifier:(id)a1 databaseContext:(id)a2;
- (id)allExistingChannelsForHandle:(id)a0 statusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (id)allExistingChannelsForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (id)allExistingChannelsForStatusTypeIdentifier:(id)a0 includingPersonalChannel:(BOOL)a1 databaseContext:(id)a2;
- (void)cleanupDecommissionedChannelsWithDatabaseContext:(id)a0;
- (void)cleanupOldChannelsForHandle:(id)a0 statusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (void)cleanupOldReceivedInvitationsForChannelIdentifier:(id)a0 excludingInvitation:(id)a1 databaseContext:(id)a2;
- (BOOL)clearPersistentHistoryIfNeeded;
- (BOOL)copyInvitedUsersFromChannel:(id)a0 toChannel:(id)a1 databaseContext:(id)a2;
- (id)createChannelForStatusTypeIdentifier:(id)a0 channelIdentifier:(id)a1 databaseContext:(id)a2;
- (id)createGeneratedEncryptionKeyWithOriginalOutgoingRatchetState:(id)a0 personalChannel:(id)a1 databaseContext:(id)a2;
- (id)createInvitedUserWithHandle:(id)a0 senderHandle:(id)a1 invitationPayload:(id)a2 channel:(id)a3 databaseContext:(id)a4;
- (id)createPersonalChannelForStatusTypeIdentifier:(id)a0 channelIdentifier:(id)a1 channelToken:(id)a2 databaseContext:(id)a3;
- (id)createPresenceChannelForPresenceIdentifier:(id)a0 channelIdentifier:(id)a1 channelToken:(id)a2 peerKey:(id)a3 serverKey:(id)a4 membershipKey:(id)a5 creationDate:(id)a6 options:(id)a7 databaseContext:(id)a8;
- (id)createReceivedInvitationForChannel:(id)a0 senderHandle:(id)a1 invitedHandle:(id)a2 invitationIdentifier:(id)a3 dateInvitationCreated:(id)a4 incomingRatchetState:(id)a5 presenceIdentifier:(id)a6 channelToken:(id)a7 serverKey:(id)a8 peerKey:(id)a9 invitationPayload:(id)a10 databaseContext:(id)a11;
- (id)createRemovedUserWithHandle:(id)a0 dateRemoved:(id)a1 presenceIdentifier:(id)a2 databaseContext:(id)a3;
- (id)createRemovedUserWithHandle:(id)a0 dateRemoved:(id)a1 statusTypeIdentifier:(id)a2 databaseContext:(id)a3;
- (BOOL)decommissionAllOldChannelsWithPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (BOOL)decommissionAllPersonalChannelsWithStatusTypeIdentifier:(id)a0 databaseContext:(id)a1;
- (BOOL)decommissionChannelWithIdentifier:(id)a0 databaseContext:(id)a1;
- (BOOL)deleteAllInvitedUsersForPersonalChannel:(id)a0 databaseContext:(id)a1;
- (BOOL)deleteInvitedUserForHandle:(id)a0 personalChannel:(id)a1 databaseContext:(id)a2;
- (BOOL)deleteInvitedUserForHandle:(id)a0 presenceChannel:(id)a1 databaseContext:(id)a2;
- (BOOL)deletePersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1;
- (BOOL)deleteRemovedUserWithHandle:(id)a0 statusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (void)deviceToDeviceEncryptedDatabaseCapabilityWithCompletion:(id /* block */)a0;
- (id)existingChannelForHandle:(id)a0 statusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (id)existingChannelForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (id)existingChannelForSubscriptionIdentifier:(id)a0 databaseContext:(id)a1;
- (id)existingInvitedUsersForPersonalChannel:(id)a0 databaseContext:(id)a1;
- (id)existingRemovedUserWithHandle:(id)a0 presenceIdentifier:(id)a1 withDatabaseContext:(id)a2;
- (id)existingRemovedUserWithHandle:(id)a0 statusTypeIdentifier:(id)a1 withDatabaseContext:(id)a2;
- (id)findInactiveChannelsFromChannelIdentifiers:(id)a0 databaseContext:(id)a1;
- (id)generatedEncryptionKeysForPersonalChannel:(id)a0 databaseContext:(id)a1;
- (void)hasInitialCloudKitImportOccurred:(id /* block */)a0;
- (id)initWithCloudDatabaseProvider:(id)a0 delegate:(id)a1;
- (void)logMostDuplicatedChannelFromDatabaseContext:(id)a0;
- (id)receivedInvitationsForChannel:(id)a0 databaseContext:(id)a1;
- (id)receivedInvitationsForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (id)updateInvitationPayload:(id)a0 onExistingInvitedUser:(id)a1 channel:(id)a2 databaseContext:(id)a3;
- (id)updatePersonalChannel:(id)a0 withCurrentOutgoingRatchetState:(id)a1 databaseContext:(id)a2;
- (id)updatePresenceChannel:(id)a0 withServiceIdentifier:(id)a1 databaseContext:(id)a2;

@end
