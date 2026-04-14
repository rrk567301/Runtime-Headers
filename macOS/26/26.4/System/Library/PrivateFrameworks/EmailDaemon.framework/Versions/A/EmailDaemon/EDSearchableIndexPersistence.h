@class NSString, EDRichLinkPersistence, EDMessagePersistence, EDSearchableIndexAnalyticsPersistence, NSDictionary, NSObject, EDPersistedAttachmentID, EDDataDetectionPersistence, EDPersistenceDatabase;
@protocol OS_os_log, EDSearchableIndexHookResponder;

@interface EDSearchableIndexPersistence : NSObject <EFLoggable, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EDSearchableIndexDataSource> {
    _Atomic unsigned char _currentIndexingTypeIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lastProcessedAttachmentIDLock;
    EDDataDetectionPersistence *_dataDetectionPersistence;
}

@property (class, readonly, copy, nonatomic) NSString *searchableMessagesTableName;
@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, weak, nonatomic) id<EDSearchableIndexHookResponder> hookResponder;
@property (readonly, nonatomic) EDRichLinkPersistence *richLinkPersistence;
@property (copy) EDPersistedAttachmentID *lastProcessedAttachmentID;
@property (retain) EDSearchableIndexAnalyticsPersistence *analytics;
@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) NSDictionary *statistics;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) NSString *additionalFilterClause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (id)searchableMessageTombstonesTableSchema;
+ (id)searchableAttachmentsTableSchema;
+ (id)searchableMessagesTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)searchableDataDetectionResultsTableSchema;
+ (id)searchableRichLinksTableSchema;

- (void).cxx_destruct;
- (id)messagesWhere:(id)a0 unionWhere:(id)a1 limit:(long long)a2;
- (void)_addSearchableDataDetectionResults:(id)a0 withMessage:(id)a1;
- (id)_attachmentItemsFromAttachmentData:(id)a0 limit:(unsigned long long)a1 cancelationToken:(id)a2;
- (BOOL)_canPerformIncrementalIndexForIdentifier:(id)a0 indexingType:(long long)a1;
- (id)_messagesRequiringIndexingForType:(long long)a0 excludingIdentifiers:(id)a1 limit:(long long)a2;
- (void)_recordDonationOfIndexedDataDetectionItems:(id)a0 connection:(id)a1;
- (void)_recordDonationOfIndexedItems:(id)a0 connection:(id)a1;
- (id)_recordDonationOfIndexedItems:(id)a0 connection:(id)a1 query:(id)a2 indexedBindingsGenerator:(id /* block */)a3;
- (id)_redonateItems:(id)a0 connection:(id)a1;
- (id)_richLinkItemsFromRichLinkData:(id)a0 limit:(unsigned long long)a1 cancelationToken:(id)a2;
- (id)allMailboxIdentifiersForMessage:(id)a0;
- (void)attachmentItemMetadataForAttachmentID:(id)a0 attachmentPersistentID:(id)a1 messagePersistentID:(id)a2 name:(id)a3 mailboxID:(long long)a4 result:(id /* block */)a5;
- (id)childIdentifiersToRemoveFromSearchableIndex:(id)a0 whenRemovingParentIdentifiers:(id)a1;
- (void)clearOrphanedSearchableMessagesFromDatabase;
- (id)domainsToRemoveForSearchableIndex:(id)a0;
- (id)getIndexSnapshot;
- (long long)indexingTypeForSearchableIndex:(id)a0 item:(id)a1;
- (id)initWithDatabase:(id)a0 messagePersistence:(id)a1 richLinkPersistence:(id)a2 hookResponder:(id)a3;
- (id)itemsToIndexForSearchableIndex:(id)a0 excludingIdentifiers:(id)a1 count:(unsigned long long)a2 cancelationToken:(id)a3;
- (id)itemsToRemoveForSearchableIndex:(id)a0;
- (id)messagesNeedingRedonation;
- (void)queueRedonationForDownloadedMessagesWithUnindexedBodies;
- (id)searchableIndex:(id)a0 attachmentItemsForMessageWithIdentifier:(id)a1;
- (void)searchableIndex:(id)a0 dataNeedsToBeDonatedForMessages:(id)a1;
- (void)searchableIndex:(id)a0 deleteTombstonesForIdentifiers:(id)a1;
- (void)searchableIndex:(id)a0 didIndexUpdates:(id)a1;
- (void)searchableIndex:(id)a0 indexGeneratedSummaries:(id)a1;
- (void)searchableIndex:(id)a0 messagesNeedToBeDonated:(id)a1 indexingType:(long long)a2;
- (void)searchableIndex:(id)a0 prepareToIndexAttachmentsForMessageWithIdentifier:(id)a1;
- (id)searchableIndex:(id)a0 redonateItemsWithIdentifiers:(id)a1;
- (void)searchableIndex:(id)a0 willRemoveIdentifiers:(id)a1 type:(long long)a2;
- (void)searchableIndexInvalidateAllItems:(id)a0;
- (id)searchableIndexItemsFromMessages:(id)a0 type:(long long)a1;
- (void)searchableRichLinkItemMetadataForRichLinkID:(id)a0 messagePersistentID:(id)a1 mailboxID:(long long)a2 title:(id)a3 url:(id)a4 result:(id /* block */)a5;
- (void)startReindexingWithConnection:(id)a0;
- (id)urlForMessageID:(id)a0;

@end
