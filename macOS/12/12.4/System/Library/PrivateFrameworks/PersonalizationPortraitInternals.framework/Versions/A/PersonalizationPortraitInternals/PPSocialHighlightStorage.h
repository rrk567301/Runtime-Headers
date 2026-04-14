@class _PASLock, PPSocialHighlightCache;

@interface PPSocialHighlightStorage : NSObject {
    _PASLock *_lock;
    PPSocialHighlightCache *_cache;
}

+ (unsigned long long)entitlementStatusForClient:(id)a0 applicationIdentifiers:(id)a1;
+ (int)unifiedFeedbackTypeForHighlightFeedbackType:(unsigned long long)a0;
+ (int)attributionFeedbackTypeForAttributionFeedbackType:(unsigned long long)a0;
+ (id)appLinksForResourceURL:(id)a0 resolvedURL:(id)a1;
+ (id)feedbackPruningPolicy;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)deleteAllRecordsFromBundleId:(id)a0;
- (void)deleteAllRecordsFromBundleId:(id)a0 matchingAttributionIdentifiers:(id)a1;
- (void)deleteAllRecordsFromBundleId:(id)a0 matchingDomainSelection:(id)a1;
- (id)attributionForIdentifier:(id)a0 error:(id *)a1;
- (id)feedbackItems;
- (id)rankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (id)rankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (id)autoDonatingChatsWithShouldContinueBlock:(id /* block */)a0 error:(id *)a1;
- (id)sharedContentFromChats:(id)a0 dateRange:(double)a1 error:(id *)a2;
- (id)attributionsForIdentifiers:(id)a0 error:(id *)a1;
- (unsigned char)automaticSharingEnabledForClient:(id)a0 error:(id *)a1;
- (id)sharedContentForClient:(id)a0 variant:(id)a1 applicationIdentifiers:(id)a2 limit:(unsigned long long)a3 autoDonatingChatIdentifiers:(id)a4 error:(id *)a5;
- (id)feedbackPublisherWithInterval:(double)a0 includingRemote:(BOOL)a1;
- (id)allSupportedHighlightsForAutoDonatingChats:(id)a0 error:(id *)a1;
- (unsigned char)automaticSharingEnabled;
- (void)cleanUpFeedbackWithShouldContinueBlock:(id /* block */)a0 ttl:(double)a1 onDeleteBlock:(id /* block */)a2;
- (BOOL)saveFeedbackForHighlightIdentifier:(id)a0 feedbackType:(unsigned long long)a1 client:(id)a2 variant:(id)a3;
- (BOOL)saveAttributionFeedbackForAttributionIdentifier:(id)a0 feedbackType:(unsigned long long)a1 client:(id)a2 variant:(id)a3;
- (id)initWithFeedbackStream:(id)a0 rankedStream:(id)a1 database:(id)a2;
- (id)deduplicateAndSortRankedHighlights:(id)a0 attributionLookup:(id)a1 limit:(unsigned long long)a2 client:(id)a3;
- (id)highlightFromRankableHighlight:(id)a0 attributionIdentifiers:(id)a1;
- (id)lastCacheInvalidationDate;
- (id)autoDonatingChatsWithError:(id *)a0;
- (id)feedbackItemsInInterval:(double)a0 includingRemote:(BOOL)a1;
- (void)syncFeedback;
- (unsigned long long)countDistinctRankedItemsMatchingBatchIdentifier:(id)a0;
- (void)clearRankedStream;
- (void)clearFeedbackStream;
- (BOOL)isClientEntitledForItem:(id)a0 client:(id)a1 applicationIdentifiers:(id)a2 blockedHosts:(id)a3;
- (void)saveFeedbackItems:(id)a0;
- (id)rankedItems;
- (void)clearStreams;
- (id)cachedRankedHighlightsForClient:(id)a0 variant:(id)a1 queriedHighlights:(id)a2;
- (void)saveOrderedBatch:(id)a0;

@end
