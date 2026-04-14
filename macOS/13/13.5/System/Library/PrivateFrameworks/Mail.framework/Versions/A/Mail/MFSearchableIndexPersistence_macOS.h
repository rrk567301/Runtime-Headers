@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndexPersistence_macOS : EDSearchableIndexPersistence <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)statistics;
- (id)additionalFilterClause;
- (void)allMailboxIdentifiersForMessage:(id)a0 result:(id /* block */)a1;
- (void)attachmentItemMetadataForAttachmentID:(id)a0 messagePersistentID:(id)a1 name:(id)a2 mailboxID:(long long)a3 result:(id /* block */)a4;
- (id)messagesWhere:(id)a0 sortedBy:(id)a1 limit:(long long)a2;
- (id)searchableIndexItemsFromMessages:(id)a0 type:(long long)a1;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)a0;
- (id)_verificationDataFromMessage:(id)a0 messageIDTransactionIDDictionary:(id)a1;

@end
