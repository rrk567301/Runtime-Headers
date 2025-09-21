@class NSString, EDMessagePersistence, EDMessageCategorizer, EDReadLaterPersistence, EDServerMessagePersistenceFactory, EDMessageAuthenticator, NSObject, EDBIMIManager, EDPersistenceDatabase, EDLocalActionPersistence;
@protocol OS_os_log, OS_dispatch_queue, EDMessageChangeHookResponder;

@interface EDMessageChangeManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDReadLaterPersistence *readLaterPersistence;
@property (readonly, nonatomic) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory;
@property (readonly, nonatomic) EDBIMIManager *bimiManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *markAllWorkQueue;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, weak, nonatomic) id<EDMessageChangeHookResponder> hookResponder;
@property (readonly, nonatomic) EDLocalActionPersistence *localActionPersistence;
@property (weak, nonatomic) EDMessageAuthenticator *messageAuthenticator;
@property (weak, nonatomic) EDMessageCategorizer *messageCategorizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)signpostID;
- (void)deleteMessages:(id)a0;
- (id)_findDestinationMessagesFromCompletedItems:(id)a0 notInServerMessages:(id)a1;
- (void)reflectFlagChanges:(id)a0 forMessages:(id)a1;
- (void)_addLogMassDeletion;
- (id)_applyReadLaterDate:(id)a0 displayDate:(id)a1 toMessages:(id)a2 changeIsRemote:(char)a3;
- (unsigned int)_bucketSignatureMessageCount:(unsigned long long)a0;
- (void)_clearFollowUpsFromThreadsForMessages:(id)a0;
- (void)_deleteDestinationMessagesFromCompletedItems:(id)a0 notInServerMessages:(id)a1;
- (id)_handleDuplicateServerMessage:(id)a0 serverMessagePersistence:(id)a1;
- (void)_handleFailedCopyItems:(id)a0 transferAction:(id)a1 generationWindow:(id)a2;
- (void)_handleFailedDownload:(id)a0 generationWindow:(id)a1;
- (char)_hookResponderRespondsToRequiredMethods:(id)a0;
- (char)_needToStoreServerMessagesForMailboxURL:(id)a0;
- (char)_persistFlagChangeResults:(id)a0 forFlagChangeAction:(id)a1;
- (char)_persistResults:(id)a0 forFlagChangeAction:(id)a1;
- (char)_persistResults:(id)a0 forLabelChangeAction:(id)a1;
- (char)_persistResults:(id)a0 forTransferAction:(id)a1;
- (void)_reflectFlagChanges:(id)a0 messages:(id)a1 remoteIDs:(id)a2 mailboxURL:(id)a3;
- (void)_resetLocalFlagsToServerFlagsForMessagesWithRemoteIDs:(id)a0 mailboxURL:(id)a1;
- (void)_resetLocalLabelsToServerLabelsForMessagesWithRemoteIDs:(id)a0 mailboxURL:(id)a1;
- (void)_storeServerMessages:(id)a0 mailboxURL:(id)a1 generationWindow:(id)a2;
- (id)_truncateReadLaterDate:(id)a0;
- (id)accountForMailboxURL:(id)a0;
- (id)addLabels:(id)a0 removeLabels:(id)a1 forMessages:(id)a2;
- (id)addNewMessages:(id)a0 mailboxURL:(id)a1 userInitiated:(char)a2;
- (void)applyFlagChange:(id)a0 toAllMessagesFromMailboxes:(id)a1 exceptMessages:(id)a2;
- (id)applyFlagChange:(id)a0 toMessages:(id)a1;
- (void)applyFollowUp:(id)a0 toMessages:(id)a1;
- (void)applyFollowUp:(id)a0 toMessages:(id)a1 withNegativeFeedbackForSuggestions:(char)a2;
- (id)applyReadLaterDate:(id)a0 displayDate:(id)a1 toMessages:(id)a2;
- (void)applyVIPStatus:(char)a0 forMessages:(id)a1;
- (id)copyMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(char)a2;
- (void)deleteAllMessageFromMailboxes:(id)a0 exceptMessages:(id)a1;
- (void)deleteLocalMessageActionsWithIDs:(id)a0;
- (void)didFinishPersistenceDidAddMessages:(id)a0;
- (void)didReflectNewMessages:(id)a0;
- (id)initWithDatabase:(id)a0 localActionPersistence:(id)a1 messagePersistence:(id)a2 serverMessagePersistenceFactory:(id)a3 readLaterPersistence:(id)a4 categoryPersistence:(id)a5 bimiManager:(id)a6 hookResponder:(id)a7 hookRegistry:(id)a8;
- (char)mailboxURL:(id)a0 isInSameAccountAsMailboxURL:(id)a1;
- (char)mailboxURLIsInRemoteAccount:(id)a0;
- (id)messagesToJournalForMessages:(id)a0 inMailbox:(id)a1;
- (id)moveMessages:(id)a0 destinationMailboxURL:(id)a1 userInitiated:(char)a2;
- (char)persistResults:(id)a0 forAction:(id)a1;
- (void)reflectAddedLabels:(id)a0 removedLabels:(id)a1 forMessagesWithRemoteIDs:(id)a2 mailboxURL:(id)a3;
- (void)reflectAllMessagesDeletedInMailboxURL:(id)a0;
- (void)reflectDeletedAllClearedMessagesInMailboxURL:(id)a0;
- (void)reflectDeletedMessages:(id)a0;
- (void)reflectDeletedMessagesWithRemoteIDs:(id)a0 mailboxURL:(id)a1;
- (void)reflectFlagChanges:(id)a0 forMessagesWithRemoteIDs:(id)a1 mailboxURL:(id)a2;
- (id)reflectNewMessages:(id)a0 mailboxURL:(id)a1;
- (void)reflectSortedFlagChanges:(id)a0 mailboxURL:(id)a1;
- (void)remindMeCloudStorageChangedWithAddedOrChangedItems:(id)a0 deletedItems:(id)a1;
- (void)test_tearDown;
- (void)transferAllMessagesFromMailboxes:(id)a0 exceptMessages:(id)a1 transferType:(long long)a2 destinationMailboxURL:(id)a3 userInitiated:(char)a4;
- (id)transferMessages:(id)a0 transferType:(long long)a1 destinationMailboxURL:(id)a2 userInitiated:(char)a3;
- (void)transferMessages:(id)a0 transferType:(long long)a1 destinationMailboxURL:(id)a2 userInitiated:(char)a3 oldMessagesByNewMessage:(id)a4;
- (void)willStartPersistenceDidAddMessages:(id)a0;

@end
