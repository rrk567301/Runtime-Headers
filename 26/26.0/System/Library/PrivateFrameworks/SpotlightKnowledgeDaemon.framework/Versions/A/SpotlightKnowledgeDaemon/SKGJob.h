@class SKGJobContext, NSObject;
@protocol OS_dispatch_queue, SKGItemMonitorProtocol;

@interface SKGJob : NSObject {
    SKGJobContext *_context;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) SKGJobContext *context;
@property (retain, nonatomic) id<SKGItemMonitorProtocol> monitor;

- (void).cxx_destruct;
- (id)generateCSEmbeddingsReportForProtectionClasses:(id)a0 withCancelBlock:(id /* block */)a1;
- (BOOL)_updateCoreSpotlightItems:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 cancelBlock:(id /* block */)a3;
- (id /* block */)_allFieldsPresentPredicateWithFieldNames:(id)a0;
- (id /* block */)_anyFieldPresentPredicateWithFieldNames:(id)a0;
- (BOOL)_archiveCoreSpotlightItems:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 batchArchivedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4 errorBlock:(id /* block */)a5;
- (BOOL)_buildCSCountingReportWithQueryString:(id)a0 queryContext:(id)a1 flags:(unsigned int)a2 reporter:(id)a3 cancelBlock:(id /* block */)a4;
- (id)_coreSpotlightIndexWithBundleIdentifier:(id)a0 protectionClass:(id)a1;
- (id)_coreSpotlightIndexWithBundleIdentifier:(id)a0 protectionClass:(id)a1;
- (id)_coreSpotlightIndexWithBundleIdentifier:(id)a0 protectionClass:(id)a1;
- (id /* block */)_fieldPresencePredicateWithFieldName:(id)a0;
- (void)_markReindexRequestsAsSeen:(id)a0 bundleID:(id)a1 count:(unsigned long long)a2;
- (id)_newCounterDictionaryForBundleIdentifier:(id)a0 additionalAttributes:(id)a1;
- (BOOL)_recordIsOld:(id)a0 dateKeys:(id)a1;
- (BOOL)_reindexCoreSpotlightIdentifiers:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 batchProcessedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (id)_removingRequiredAttributes:(id)a0;
- (BOOL)_runCSCleanupForQueryString:(id)a0 trackingAttributes:(id)a1 queryContext:(id)a2 batchUpdatedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (BOOL)_runCSCounterForQueryString:(id)a0 queryContext:(id)a1 filesQuery:(BOOL)a2 counterItemBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (BOOL)_runCSExtractForQueryString:(id)a0 queryContext:(id)a1 flags:(unsigned int)a2 processedItemBlock:(id /* block */)a3 batchArchivedBlock:(id /* block */)a4 batchUpdatedBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 errorBlock:(id /* block */)a7;
- (BOOL)_runCSPollingQuery:(id)a0 foundItemBlock:(id /* block */)a1;
- (BOOL)_runCSPollingQueryString:(id)a0 queryContext:(id)a1 foundItemBlock:(id /* block */)a2;
- (BOOL)_runCSProcessingForTask:(id)a0 queryString:(id)a1 queryContext:(id)a2 batchProcessedBlock:(id /* block */)a3 batchUpdatedBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (BOOL)_runCSReindexForQueryString:(id)a0 queryContext:(id)a1 processorFlags:(unsigned long long)a2 batchProcessedBlock:(id /* block */)a3 batchUpdatedBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (BOOL)_runMDTextProcessingForQueryString:(id)a0 queryContext:(id)a1 flags:(unsigned int)a2 batchProcessedBlock:(id /* block */)a3 batchUpdatedBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (BOOL)_updateCoreSpotlightItems:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 batchUpdatedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (BOOL)_updateCoreSpotlightItems:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 batchUpdatedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (BOOL)_updateSpotlightWithAttributes:(id)a0 filePath:(id)a1;
- (id)counterQueryWithQueryString:(id)a0 queryContext:(id)a1 onlyFiles:(BOOL)a2;
- (id)generateCSDocumentUnderstandingReportForProtectionClasses:(id)a0 withCancelBlock:(id /* block */)a1;
- (id)generateCSDocumentUnderstandingReportWithCancelBlock:(id /* block */)a0;
- (id)generateCSEmbeddingsReportWithCancelBlock:(id /* block */)a0;
- (id)generateCSKeyphraseReportForProtectionClasses:(id)a0 withCancelBlock:(id /* block */)a1;
- (id)generateCSKeyphraseReportWithCancelBlock:(id /* block */)a0;
- (id)generateCSReportForQueryFlags:(unsigned int)a0 protectionClasses:(id)a1 additionalQueryString:(id)a2 additionalFetchAttributes:(id)a3 processedPredicate:(id /* block */)a4 succesfullyProcessedPredicate:(id /* block */)a5 eligiblePredicate:(id /* block */)a6 additionalPredicates:(id)a7 dayCompletionStr:(id)a8 genStartTime:(id)a9 bundleIDs:(id)a10 daysToCompleteApproach:(long long)a11 onlyFiles:(BOOL)a12 mergeBundleStatistics:(id)a13 withCancelBlock:(id /* block */)a14;
- (id)generateCSReportWithProtectionClasses:(id)a0 flags:(unsigned int)a1 verbosity:(int)a2 cancelBlock:(id /* block */)a3;
- (id)generateCSSuggestedEventsReportForProtectionClasses:(id)a0 withCancelBlock:(id /* block */)a1;
- (id)generateCSSuggestedEventsReportWithCancelBlock:(id /* block */)a0;
- (id)initWithJobContext:(id)a0;
- (BOOL)performCSIndexProcessingJob:(id)a0 cancelBlock:(id /* block */)a1;
- (BOOL)requestCSCleanupForUpdater:(id)a0 protectionClasses:(id)a1 flags:(unsigned int)a2 batchUpdatedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (BOOL)requestCSCleanupWithProtectionClasses:(id)a0 batchUpdatedBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (BOOL)requestCSDocumentUnderstandingProgressReport:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (BOOL)requestCSEmbeddingsProgressReport:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (BOOL)requestCSProcessingWithProcessedItemBlock:(id /* block */)a0 batchArchivedBlock:(id /* block */)a1 batchUpdatedBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3 errorBlock:(id /* block */)a4;
- (BOOL)requestCSProcessingWithProtectionClasses:(id)a0 task:(id)a1 batchProcessedBlock:(id /* block */)a2 batchUpdatedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (BOOL)requestCSReindexForClientWithBundleIdentifier:(id)a0 batchProcessedBlock:(id /* block */)a1 batchUpdatedBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)requestCSReindexWithProtectionClasses:(id)a0 batchProcessedBlock:(id /* block */)a1 batchUpdatedBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)requestCSReindexWithProtectionClasses:(id)a0 flags:(unsigned int)a1 batchProcessedBlock:(id /* block */)a2 batchUpdatedBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (BOOL)requestCSSuggestedEventsProgressReport:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (BOOL)requestMDProcessingWithBatchProcessedBlock:(id /* block */)a0 batchUpdatedBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;

@end
