@class NSArray, NSString;

@interface IMDIndexingController : NSObject <IMDIndexingQueries>

@property (readonly, nonatomic) NSArray *integrations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)queryProvider;
+ (id)queryProviderWithBlockingXPC:(BOOL)a0;
+ (id)synchronousQueryProvider;

- (id)init;
- (void).cxx_destruct;
- (long long)totalMessages;
- (void)_deleteBatchOfMessagesWithBatchAmount:(long long)a0 reason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_checkForIndexedGUIDsWithSelector:(SEL)a0 performBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_indexNextBatchOfMessagesWithFetcher:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)_beginThrottlingDueToIndexError:(id)a0;
- (id)_contextForDeletion:(id)a0;
- (id)_createAggregateMessageIndexingJobWithSize:(long long)a0 context:(id)a1;
- (id)_createBatchFetchingMessageIndexingJobWithSize:(long long)a0 context:(id)a1 batchFetcher:(id)a2;
- (void)_deferGUIDs:(id)a0 forFlag:(unsigned long long)a1 context:(id)a2;
- (id)_deferredError;
- (void)_indexMessageGUIDs:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performDeferrableManagerOperationWithFlag:(unsigned long long)a0 context:(id)a1 guids:(id)a2 selector:(SEL)a3 invokeBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)_performManagerOperationWithSelector:(SEL)a0 invokeBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_performSpotlightRequestWithBlock:(id /* block */)a0;
- (id)_throttleError;
- (void)addChatGUIDs:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)addMessageGUIDs:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginThrottlingForIdentifier:(id)a0 untilDate:(id)a1;
- (void)checkForIndexedAttachmentGUIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)checkForIndexedChatGUIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)checkForIndexedMessageGUIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)copyIndexableMessageDictionariesWithLimit:(long long)a0 requireIndexableAttachments:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteAllDonationsForAppDeletionWithCompletion:(id /* block */)a0;
- (void)deleteAttachmentGUIDs:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteChatGUIDs:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
- (void)deleteMessageGUIDs:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)finishThrottlingForIdentifier:(id)a0;
- (void)indexNextMessageBatchIfNeeded:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)indexableMessageGUIDsFromGUIDs:(id)a0 ignoreRejections:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)markAttachmentWithFileURL:(id)a0 sender:(id)a1 recipients:(id)a2 isIncoming:(BOOL)a3 completionHandler:(id /* block */)a4;
- (long long)maxRowID;
- (void)postProcessIndexingForChatDictionary:(id)a0 context:(id)a1;
- (void)postProcessIndexingForItem:(id)a0 chatDictionary:(id)a1 context:(id)a2;
- (void)reindexRecentMessagesWithHandles:(id)a0 batchDeferralTime:(long long)a1 messageAge:(double)a2 reason:(long long)a3;
- (void)scheduleUpdateForDeletedMessagesWithReason:(long long)a0;
- (void)setNeedsMessageReindexingWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)totalChats;

@end
