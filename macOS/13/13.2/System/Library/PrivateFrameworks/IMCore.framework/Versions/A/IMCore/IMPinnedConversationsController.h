@class NSOrderedSet, NSDictionary, NSUbiquitousKeyValueStore;

@interface IMPinnedConversationsController : NSObject

@property (class, readonly, nonatomic) BOOL processSupportsPinnedConversations;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfPinnedConversations;

@property (nonatomic) BOOL hasCompletedInitialization;
@property (nonatomic) BOOL hasDefferedPinnedConversationsDidChangeNotification;
@property (nonatomic) long long numberOfPendingForceSyncs;
@property (retain, nonatomic) NSUbiquitousKeyValueStore *dataStore;
@property (retain, nonatomic) NSOrderedSet *pinnedConversationIdentifierSet;
@property (retain, nonatomic) NSDictionary *chatMetadata;

+ (id)sharedInstance;
+ (id)requiredKeys;
+ (id)pinConfigurationMigrationKey;
+ (long long)currentPinConfigurationVersion;
+ (long long)currentPinConfigurationRevision;
+ (id)_ubiquitousDispatchQueue;
+ (id)_forceSyncDispatchQueue;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldSync;
- (void)_handleChatGroupIDDidChangeNotification:(id)a0;
- (void)imCloudKitHooksSetEnabledDidReturn:(id)a0;
- (void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)a0;
- (id)pinnedConversationIdentifiers;
- (id)_dictionaryWithPinnedConversationIdentifiers:(id)a0 chatMetadata:(id)a1 updateReason:(id)a2 timestamp:(id)a3;
- (id)dictionaryWithPinnedConversationIdentifiers:(id)a0 chatMetadata:(id)a1 updateReason:(id)a2;
- (id)_metadataDictionaryForChat:(id)a0;
- (id)mostUpToDatePinConfigurationByComparingPinConfiguration:(id)a0 toOtherPinConfiguration:(id)a1;
- (void)setPinnedChats:(id)a0 withUpdateReason:(id)a1;
- (void)_setPinnedConversationIdentifiers:(id)a0 withChatMetadata:(id)a1 updateReason:(id)a2 shouldUpdateStores:(BOOL)a3;
- (void)_postDeferredPinnedConversationsDidChangeNotificationIfNecessary;
- (void)_postPinnedConversationsDidChangeNotification;
- (void)conversationWasDeletedWithIdentifier:(id)a0;
- (void)conversationsWereDeletedWithIdentifiers:(id)a0;
- (BOOL)pinnedConversationsContainsChat:(id)a0;
- (id)matchingIdentifierForChat:(id)a0;
- (id)matchingIdentifierForChat:(id)a0 inIdentifierSet:(id)a1 withMetadata:(id)a2;
- (unsigned long long)pinIndexForChat:(id)a0 inIdentifierSet:(id)a1 withMetadata:(id)a2;
- (void)performPinConfigValidationAndMigrationIfNecessary;
- (id)validatedPinConfigurationWithCurrentVersionForPinConfiguration:(id)a0;
- (void)synchronizeLocalDataStore;
- (void)forceSynchronizeUbiquitousStore;
- (void)updateStoresWithPinConfiguration:(id)a0;
- (void)_updateUbiquitousStoreWithPinConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)_updateLocalStoreWithPinConfiguration:(id)a0;
- (BOOL)shouldWriteProposedPinConfiguration:(id)a0 toUbiquitousStoreWithExistingPinConfiguration:(id)a1;
- (BOOL)pinConfigurationHasCompatibleVersion:(id)a0;
- (BOOL)pinConfigurationIsValid:(id)a0;
- (BOOL)pinConfigurationHasCurrentVersion:(id)a0;
- (BOOL)shouldUpdateExistingPinConfig:(id)a0 withProposedPinConfig:(id)a1;
- (void)fetchPinnedConversationIdentifiersFromLocalStore;
- (void)_fetchUbiquitousPinConfiguration:(id /* block */)a0;
- (void)fetchMostUpToDatePinConfiguration:(id /* block */)a0;
- (id)_locallyStoredPinConfiguration;
- (id)_ubiquitousPinConfigurationInStore:(id)a0;
- (id)pinnedConversationIdentifiersFromPinConfiguration:(id)a0;
- (id)chatMetadataFromPinConfiguration:(id)a0;

@end
