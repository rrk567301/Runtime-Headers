@class EFSQLTableSchema, NSString, NSObject, EDUbiquitousConversationManager, EDPersistenceDatabase, EDPersistenceHookRegistry;
@protocol OS_dispatch_queue;

@interface EDConversationPersistence : NSObject <EDUbiquitousConversationManagerDelegate, EDConversationDailyCloudExporterDelegate, EDPersistenceDatabaseSchemaProvider, EDConversationSubscriptionProvider>

@property (class, readonly, nonatomic) EFSQLTableSchema *conversationsTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *conversationIDMessageIDTableSchema;
@property (class, readonly, copy, nonatomic) NSString *conversationsTableName;

@property (readonly, weak, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDUbiquitousConversationManager *conversationManager;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) char hasSubscribedConversations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (unsigned long long)conversationFlagsForConversationNotificationLevel:(long long)a0;
+ (long long)conversationNotificationLevelForConversationFlags:(unsigned long long)a0;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (void).cxx_destruct;
- (void)_postChangeNotificationForConversationID:(long long)a0 flags:(unsigned long long)a1 oldFlags:(unsigned long long)a2 reason:(long long)a3;
- (long long)currentSyncAnchorForDailyExport;
- (void)markConversationWithIDs:(id)a0 notify:(char)a1;
- (void)_notifyOfFlagChangeForConversationID:(long long)a0 oldFlags:(unsigned long long)a1 newFlags:(unsigned long long)a2 reason:(long long)a3 generationWindow:(id)a4;
- (void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)a0;
- (long long)conversationIDForMessageIDs:(id)a0;
- (long long)createConversationWithFlags:(unsigned long long)a0;
- (id)flaggedConversationsChangedBetweenStartAnchor:(long long)a0 endAnchor:(long long)a1;
- (id)initWithDatabase:(id)a0 hookRegistry:(id)a1;
- (void)initializeConversationManagerAndPerformInitialSync;
- (void)markConversationWithIDs:(id)a0 mute:(char)a1;
- (id)messageIDsForConversationID:(long long)a0 limit:(unsigned long long)a1;
- (unsigned long long)persistenceConversationFlagsForConversationID:(long long)a0;
- (long long)previousSyncAnchorForDailyExport;
- (void)pruneConversationTables:(double)a0;
- (void)remoteMessageIDsAdded:(id)a0 forConversationID:(long long)a1;
- (void)setNewPreviousSyncAnchorForDailyExport:(long long)a0;
- (void)setPersistenceConversationFlags:(unsigned long long)a0 forConversationIDs:(id)a1 reason:(long long)a2;
- (void)setPersistenceConversationFlags:(unsigned long long)a0 syncKey:(id)a1 forConversationID:(long long)a2 reason:(long long)a3;
- (id)syncedConversationIDsBySyncKey;
- (void)updateAssociationTableForMessageID:(id)a0 dateSent:(id)a1 conversationID:(long long)a2;
- (void)updateAssociationTableForMessageIDs:(id)a0 conversationID:(long long)a1;
- (void)updateAssociationTableForMessagePersistentIDs:(id)a0 conversationID:(long long)a1;
- (void)updateConversationNotificationLevel:(long long)a0 forConversationIDs:(id)a1;

@end
