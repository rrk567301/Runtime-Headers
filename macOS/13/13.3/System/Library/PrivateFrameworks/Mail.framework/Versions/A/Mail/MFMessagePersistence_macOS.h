@class NSString, NSObject;
@protocol OS_os_log, EFScheduler;

@interface MFMessagePersistence_macOS : EDMessagePersistence <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EFScheduler> contentLoadScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)a0;
- (id)collectStatistics;
- (long long)countOfMessagesMatchingQuery:(id)a0;
- (long long)countOfMessagesWithGlobalMessageID:(long long)a0 matchingQuery:(id)a1;
- (long long)globalIDForMessageWithDatabaseID:(long long)a0 mailboxScope:(id *)a1;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)a0 variable:(id)a1;
- (id)initWithMailboxPersistence:(id)a0 database:(id)a1 hookRegistry:(id)a2 userProfileProvider:(id)a3 blockedSenderManager:(id)a4 vipReader:(id)a5;
- (void)iterateMessagesMatchingQuery:(id)a0 batchSize:(long long)a1 firstBatchSize:(long long)a2 limit:(long long)a3 cancelationToken:(id)a4 handler:(id /* block */)a5;
- (void)iteratePersistedMessagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2 handler:(id /* block */)a3;
- (id)persistedMessageForOutgoingMessage:(id)a0 isDraft:(BOOL)a1;
- (id)persistedMessagesForDatabaseIDs:(id)a0 requireProtectedData:(BOOL)a1 temporarilyUnavailableDatabaseIDs:(id *)a2;
- (id)queryWithExpandedMailboxesFromQuery:(id)a0;
- (id)requestContentForMessageObjectID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)requestSummaryForMessageObjectID:(id)a0;
- (id)_messageCriterionFromPredicate:(id)a0;
- (long long)_countOfMessagesMatchingCriterion:(id)a0;
- (id)_criterionForMailbox:(id)a0;
- (id)_flagKeyForKeyPath:(id)a0;
- (BOOL)_isCriterionTypeFlagKeyPath:(id)a0;
- (void)_iterateMessagesMatchingQuery:(id)a0 cancelationToken:(id)a1 consumer:(id)a2;
- (id)_libraryMessageForMessageObjectID:(id)a0;
- (unsigned int)_loadOptions;
- (id)_messageCriterionForComparisonPredicate:(id)a0;
- (id)_messageCriterionForCompoundPredicate:(id)a0;
- (unsigned int)_optionsForQuery:(id)a0;
- (id)criterionForQuery:(id)a0;

@end
