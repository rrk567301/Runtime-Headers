@class NSString, EDGmailLabelPersistence, EDPersistenceDatabase, NSObject;
@protocol OS_os_log;

@interface EDServerMessagePersistence : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly, nonatomic) long long mailboxID;
@property (readonly, nonatomic) char useNumericSearch;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (readonly, nonatomic) unsigned long long unreadMessageCount;
@property (readonly, nonatomic) unsigned long long undeletedMessageCount;
@property (readonly, nonatomic) unsigned int maximumIMAPUID;
@property (readonly, nonatomic) unsigned int minimumIMAPUID;
@property (readonly, nonatomic) char supportsLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverLabelsTableSchema;
+ (id)serverMessagesTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (char)_addLabels:(id)a0 removeLabels:(id)a1 forUID:(unsigned int)a2 connection:(id)a3;
- (id)_remoteIDStringForRemoteIDArray:(id)a0;
- (id)_serverMessageForRow:(id)a0 connection:(id)a1;
- (id)_serverMessagesWithWhereClause:(id)a0 limitClause:(id)a1 returnLastEntries:(char)a2;
- (char)addLabels:(id)a0 removeLabels:(id)a1 toMessagesWithRemoteIDs:(id)a2;
- (char)addServerMessage:(id)a0 invalidMessage:(char *)a1 duplicateRemoteID:(char *)a2;
- (char)applyFlagChange:(id)a0 toMessagesWithRemoteIDs:(id)a1;
- (char)applySortedFlags:(id)a0;
- (char)attachMessage:(long long)a0 toServerMessageWithRemoteID:(id)a1;
- (id)deleteAllClearedUIDMessages;
- (char)deleteAllServerMessagesInMailbox;
- (char)deleteServerMessagesWithRemoteIDs:(id)a0;
- (id)downloadStateForUIDs:(id)a0;
- (void)enumerateMessageBatchLimitUIDsWithWindow:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 batchSize:(long long)a1 newUIDCount:(long long)a2 block:(id /* block */)a3;
- (void)enumerateUIDsInIndexSet:(id)a0 includingJSON:(id)a1 excludingJSON:(id)a2 withBlock:(id /* block */)a3;
- (void)enumerateUIDsInOlderThanDate:(id)a0 limit:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)enumerateUIDsInRanges:(id)a0 withBlock:(id /* block */)a1;
- (void)groupInsideWriteTransactionWithDescription:(id)a0 block:(id /* block */)a1;
- (id)initWithDatabase:(id)a0 gmailLabelPersistence:(id)a1 mailboxID:(long long)a2 useNumericSearch:(char)a3 supportsLabels:(char)a4;
- (id)serverMessagesForIMAPUIDs:(id)a0 limit:(unsigned long long)a1 returnLastEntries:(char)a2;
- (id)serverMessagesForMessageIDHeaders:(id)a0;
- (id)serverMessagesForRemoteIDs:(id)a0;
- (void)setDownloadStateForUIDs:(id)a0;

@end
