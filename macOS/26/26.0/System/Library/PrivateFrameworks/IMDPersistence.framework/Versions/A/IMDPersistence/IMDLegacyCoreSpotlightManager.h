@class IMBackpressuredDonationController, NSMutableOrderedSet;

@interface IMDLegacyCoreSpotlightManager : NSObject {
    IMBackpressuredDonationController *_backpressureController;
}

@property (retain, nonatomic) NSMutableOrderedSet *blocklistMessageGUIDs;

+ (id)sharedManager;
+ (id)chatAutoDonatingCutomKey;
+ (id)chatAutoDonatingServerDateCustomKey;
+ (id)chatStyleCustomKey;
+ (id)threadIdentifierCustomKey;
+ (Class)__SLCollaborationHandshakeController;
+ (id)handleToIdentityMapKey;
+ (id)localIdentityKey;
+ (id)localIdentityProofKey;
+ (id)resolvedURLCustomKey;

- (id)searchableIndex;
- (id)init;
- (void)deleteAllSearchableItemsWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (long long)totalMessages;
- (id)newChatSearchableItemForChatDictionary:(id)a0 optionalLastMessageDate:(id)a1;
- (void)_FPProviderIDForItems:(id)a0;
- (unsigned long long)_batchSizeForTargetBatchSize:(unsigned long long)a0 lastIndexedRowID:(unsigned long long)a1 lastBatch:(BOOL *)a2;
- (long long)_chatCountForChats:(id)a0;
- (id)_chatDictionaryForChatAtIndex:(unsigned long long)a0 withChats:(id)a1;
- (id)_chatDictionaryForChatGUID:(id)a0;
- (id)_copyNewSearchableIndexesForMessagesWithLastRowID:(unsigned long long *)a0 messageRecordCount:(unsigned long long *)a1 messagesWithItemsGeneratedCount:(unsigned long long *)a2 reason:(long long)a3 batchSize:(unsigned long long)a4 timingCollection:(id)a5 rejectedItems:(id)a6;
- (id)_donationManager;
- (void)_enumerateSearchableChatItemsForAllChatsWithBlock:(id /* block */)a0 timingCollection:(id)a1;
- (void)_indexSearchableChatItems:(id)a0 withReason:(long long)a1 index:(id)a2 blocking:(BOOL)a3;
- (void)_indexSearchableItems:(id)a0 rejectedItems:(id)a1 clientState:(id)a2 lastIndexedRowID:(unsigned long long)a3 messagesInBatch:(unsigned long long)a4 messagesWithItemsGeneratedCount:(unsigned long long)a5 batchSize:(unsigned long long)a6 lastBatch:(BOOL)a7 withIndex:(id)a8 reason:(long long)a9;
- (id)_newSearchableChatItemsForChats:(id)a0;
- (id)_personIdentityQueue;
- (void)_postProcessIndexingForItem:(id)a0 chatDictionary:(id)a1 isReindexing:(BOOL)a2;
- (void)_resolvedURLForItems:(id)a0;
- (void)_sanitizeIndexesForCurrentVersionIfNeeded:(id /* block */)a0;
- (id)_scrutinyMessagesQueue;
- (void)_setNeedsDeferredIndexing:(BOOL)a0;
- (void)_setNeedsIndexing:(BOOL)a0;
- (BOOL)_shouldBypassForTesting;
- (BOOL)_shouldIndexNextBatchForBatchSize:(unsigned long long)a0;
- (BOOL)_shouldSkipMessagePartPrefixingForItemDictionary:(id)a0;
- (void)_suspendReindexingDueToError:(id)a0;
- (void)_updateFilteringForSearchableItem:(id)a0 chatDictionary:(id)a1;
- (void)_updateItem:(id)a0 withFPProviderID:(id)a1;
- (void)_updateItem:(id)a0 withIdentityMap:(id)a1 localIdentity:(id)a2 localIdentityProof:(id)a3 completionHandler:(id /* block */)a4;
- (void)_updateItem:(id)a0 withResolvedURL:(id)a1;
- (void)addChatSearchableItemForChatGUID:(id)a0 reason:(long long)a1;
- (id)chatSearchableItemForGUID:(id)a0;
- (void)clearMessageGUIDFromScrutiny:(id)a0;
- (void)deleteAllDonationsForAppDeletionWithCompletion:(id /* block */)a0;
- (void)deleteChatSearchableItemForChatGUID:(id)a0 reason:(long long)a1;
- (void)indexChatsWithReason:(long long)a0;
- (void)indexNextMessageBatchIfNeeded:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (long long)maxRowID;
- (id)newChatSearchableItemForChatDictionary:(id)a0 optionalLastMessageDate:(id)a1 error:(id *)a2;
- (id)newSearchableItemsForMessage:(id)a0 context:(id)a1 rejectedItems:(id)a2;
- (id)newSearchableItemsForMessageGUID:(id)a0 context:(id)a1 rejectedItems:(id)a2;
- (id)newSearchableItemsForMessageItemDictionary:(id)a0 chatDictionary:(id)a1 context:(id)a2 rejectedItems:(id)a3;
- (void)reIndexWithLocalProofOfInclusionForItemsAsync:(id)a0 completionHandler:(id /* block */)a1;
- (id)searchableItemIdentifierForChatGUID:(id)a0;
- (void)setMessageGUIDUnderScrutiny:(id)a0;
- (void)setNeedsMessageReindexingWithContext:(id)a0 completion:(id /* block */)a1;

@end
