@class NSString;

@interface SKALocalDatabaseManager : SKABaseDatabaseManager <SKASystemMonitorListener, SKALocalDatabaseManaging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void)systemDidLeaveFirstDataProtectionLock;
- (id)initWithDatabaseProvider:(id)a0;
- (id)_existingChannelCheckpointForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (BOOL)activePresenceSubscriptionForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (id)existingChannelIdentifiersForPresentDevicesWithDatabaseContext:(id)a0;
- (void)_deleteAllPresenceSubscriptionsAndAssertionsIfNecessary;
- (id)_existingPendingPublishRequestForUniqueIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingPendingPublishRequestsForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingPendingPublishRequestsWithDatabaseContext:(id)a0;
- (id)_existingPresenceAssertionForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (id)_existingPresenceSubscriptionForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingPresentDeviceForChannel:(id)a0 deviceIdentifier:(id)a1 isPresent:(BOOL)a2 databaseContext:(id)a3;
- (id)_existingPresentDevicesForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingSubscriptionAssertionForSubscriptionIdentifier:(id)a0 applicationIdentifier:(id)a1 databaseContext:(id)a2;
- (id)_existingSubscriptionAssertionsForStatusTypeIdentifier:(id)a0 applicationIdentifier:(id)a1 databaseContext:(id)a2;
- (id)_existingTransientSubscriptionHistoryForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (id)_existingTransientSubscriptionHistoryWithLimit:(long long)a0 orderedByLastSubscriptionDateAscending:(BOOL)a1 databaseContext:(id)a2;
- (BOOL)activePresenceAssertionsExistWithDatabaseContext:(id)a0;
- (id)allExistingPresenceSubscriptionsForDatabaseContext:(id)a0;
- (id)allPersistentSubscriptionAssertionChannelIdentifiersWithDatabaseContext:(id)a0;
- (id)allPublishedLocalStatusDevicesInDatabaseContext:(id)a0 error:(id *)a1;
- (id)allPublishedLocalStatusesInDatabaseContext:(id)a0 error:(id *)a1;
- (id)allSubscribedLocalStatusesInDatabaseContext:(id)a0 error:(id *)a1;
- (void)cleanupOldStatusUpdatesForChannelIdentifier:(id)a0 excludingStatusUniqueIdentifier:(id)a1 databaseContext:(id)a2;
- (BOOL)clearPresentDevicesForChannel:(id)a0 databaseContext:(id)a1;
- (BOOL)clearPresentDevicesForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (BOOL)createOrUpdateOrDeleteSubscribedLocalStatus:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (id)createOrUpdatePresenceAssertionForPresenceIdentifier:(id)a0 presenceOptions:(id)a1 assertionOptions:(id)a2 presencePayload:(id)a3 persistentPayload:(id)a4 serverRoutablePayload:(id)a5 isPresent:(BOOL)a6 channel:(id)a7 databaseContext:(id)a8;
- (id)createOrUpdatePresenceSubscriptionForChannelIdentifier:(id)a0 presenceIdentifier:(id)a1 serviceIdentifier:(id)a2 channel:(id)a3 databaseContext:(id)a4;
- (BOOL)createOrUpdatePresentDevice:(id)a0 channel:(id)a1 databaseContext:(id)a2;
- (BOOL)createOrUpdatePublishedLocalStatusDevices:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (BOOL)createOrUpdatePublishedLocalStatuses:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (id)createOrUpdateTransientSubscriptionHistoryForChannelIdentifier:(id)a0 lastSubscriptionDate:(id)a1 databaseContext:(id)a2;
- (id)createPendingPublishRequestWithUniqueIdentifier:(id)a0 dateCreated:(id)a1 payloadData:(id)a2 statusTypeIdentifier:(id)a3 databaseContext:(id)a4;
- (id)createStatusWithUniqueIdentifier:(id)a0 dateCreated:(id)a1 datePublished:(id)a2 dateReceived:(id)a3 dateExpired:(id)a4 rawData:(id)a5 channelIdentifier:(id)a6 databaseContext:(id)a7;
- (id)createSubscriptionAssertionForSubscriptionIdentifier:(id)a0 applicationIdentifier:(id)a1 statusTypeIdentifier:(id)a2 databaseContext:(id)a3;
- (unsigned long long)currentCheckpointForChannel:(id)a0 databaseContext:(id)a1;
- (BOOL)deleteAllPresenceAssertionsWithDatabaseContext:(id)a0;
- (BOOL)deleteAllPresenceSubscriptionsWithDatabaseContext:(id)a0;
- (BOOL)deletePendingPublishRequestWithWithUniqueIdentifier:(id)a0 databaseContext:(id)a1;
- (BOOL)deletePresenceAssertionForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (void)deletePresenceSubscriptionsForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (void)deletePresenceSubscriptionsForPresenceIdentifier:(id)a0 databaseContext:(id)a1;
- (BOOL)deletePresentDevice:(id)a0 channel:(id)a1 databaseContext:(id)a2;
- (BOOL)deletePublishedLocalStatusDevices:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (BOOL)deleteSubscriptionAssertionWithSubscriptionIdentifier:(id)a0 applicationIdentifier:(id)a1 databaseContext:(id)a2;
- (id)existingPendingPublishRequestForUniqueIdentifier:(id)a0 withDatabaseContext:(id)a1;
- (id)existingPendingPublishRequestsForStatusTypeIdentifier:(id)a0 withDatabaseContext:(id)a1;
- (id)existingPendingPublishRequestsWithDatabaseContext:(id)a0;
- (id)existingPresenceAssertionForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1 databaseContext:(id)a2;
- (id)existingPresenceSubscriptionForChannelIdentifier:(id)a0 databaseContext:(id)a1;
- (id)existingPresenceSubscriptionForPresenceIdentifier:(id)a0 databaseContext:(id)a1;
- (id)existingRecentTransientSubscriptionHistoriesWithLimit:(long long)a0 databaseContext:(id)a1;
- (id)existingStatusForChannel:(id)a0 databaseContext:(id)a1;
- (id)existingStatusForUniqueIdentifier:(id)a0 databaseContext:(id)a1;
- (id)existingSubscriptionAssertionForSubscriptionIdentifier:(id)a0 applicationIdentifier:(id)a1 databaseContext:(id)a2;
- (id)existingSubscriptionAssertionsForStatusTypeIdentifier:(id)a0 applicationIdentifier:(id)a1 databaseContext:(id)a2;
- (BOOL)incrementPendingPublishRequestRetryCountWithUniqueIdentifier:(id)a0 databaseContext:(id)a1;
- (id)presentDevicesForChannel:(id)a0 databaseContext:(id)a1;
- (BOOL)setCurrentCheckpointForChannel:(id)a0 checkpoint:(unsigned long long)a1 databaseContext:(id)a2;
- (void)updatePresenceSubscriptionForChannelIdentifier:(id)a0 topicFilterOverride:(int)a1 databaseContext:(id)a2 completion:(id /* block */)a3;

@end
