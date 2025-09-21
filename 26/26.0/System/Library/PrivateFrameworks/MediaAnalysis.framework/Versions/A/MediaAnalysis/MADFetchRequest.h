@class NSManagedObjectContext;

@interface MADFetchRequest : NSObject {
    NSManagedObjectContext *_moc;
}

+ (double)_ageOutIntervalForChangeTokenType:(unsigned long long)a0;
+ (id)fetchRequestWithManagedObjectContext:(id)a0;

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (int)fetchAllMomentsScheduledAssets:(id *)a0;
- (int)fetchAllDataStoreKeyValuePairs:(id *)a0;
- (id)fetchDataStoreValueIfKeyExists:(id)a0;
- (int)_fetchLocalIdentifiers:(id *)a0 eligibleToRetry:(id)a1 matchingProcessingStatus:(id)a2 includingProcessingStatuses:(id)a3 excludingProcessingStatuses:(id)a4 taskID:(id)a5 matchingAttempts:(id)a6 fetchLimit:(id)a7 additionalPredicates:(id)a8;
- (int)_fetchManagedAssetCount:(unsigned long long *)a0 predicate:(id)a1;
- (int)_fetchManagedProcessingStatusCount:(unsigned long long *)a0 predicate:(id)a1;
- (id)_fetchPredicateForTaskID:(id)a0 matchingProcessingStatus:(id)a1 includingProcessingStatuses:(id)a2 excludingProcessingStatuses:(id)a3 matchingAttempts:(id)a4 fromNextAttemptDate:(id)a5 toNextAttemptDate:(id)a6 localIdentifiers:(id)a7 additionalPredicates:(id)a8;
- (long long)dataStoreValueForKey:(id)a0;
- (int)fetchAllMomentsScheduledAssetsForLookup:(id *)a0 totalCount:(unsigned long long *)a1;
- (id)fetchAnalysesWithLocalIdentifiers:(id)a0 predicate:(id)a1;
- (id)fetchAnalysesWithLocalIdentifiers:(id)a0 predicate:(id)a1 resultTypes:(id)a2;
- (id)fetchAnalysisWithLocalIdentifier:(id)a0 predicate:(id)a1;
- (id)fetchAnalysisWithLocalIdentifier:(id)a0 predicate:(id)a1 resultTypes:(id)a2;
- (int)fetchAssetCountForTaskID:(unsigned long long)a0;
- (int)fetchAssetCountForTaskID:(unsigned long long)a0 minimumAttempts:(unsigned long long)a1;
- (int)fetchAssetCountForTaskID:(unsigned long long)a0 status:(unsigned long long)a1;
- (int)fetchAssetCountForTaskID:(unsigned long long)a0 status:(unsigned long long)a1 attempts:(int)a2;
- (int)fetchAssetCountForTaskID:(unsigned long long)a0 totalAssets:(unsigned long long *)a1 processedAssets:(unsigned long long *)a2;
- (int)fetchAssetCountFromLocalIdentifiers:(id)a0 taskID:(unsigned long long)a1 excludingStatuses:(id)a2;
- (int)fetchAssetCountWithPredicate:(id)a0;
- (int)fetchChangeToken:(id *)a0 taskID:(unsigned long long)a1 changeTokenType:(unsigned long long)a2;
- (unsigned long long)fetchEligibleToRetryAssetCountWithProcessingStatus:(unsigned long long)a0 taskID:(unsigned long long)a1;
- (unsigned long long)fetchEligibleToRetryAssetCountWithTaskID:(unsigned long long)a0;
- (int)fetchEligibleToRetryLocalIdentifiers:(id *)a0 processingStatus:(unsigned long long)a1 taskID:(unsigned long long)a2 fetchLimit:(unsigned long long)a3;
- (int)fetchEligibleToRetryLocalIdentifiers:(id *)a0 processingStatus:(unsigned long long)a1 taskID:(unsigned long long)a2 fetchLimit:(unsigned long long)a3 additionalPredicates:(id)a4;
- (id)fetchFailedProcessingStatusFromAssets:(id)a0 taskID:(unsigned long long)a1;
- (int)fetchLocalIdentifiers:(id *)a0 processingStatus:(unsigned long long)a1 taskID:(unsigned long long)a2 attempts:(int)a3 fetchLimit:(unsigned long long)a4;
- (int)fetchLocalIdentifiers:(id *)a0 processingStatus:(unsigned long long)a1 taskID:(unsigned long long)a2 attempts:(int)a3 fetchLimit:(unsigned long long)a4 additionalPredicates:(id)a5;
- (int)fetchLocalIdentifiers:(id *)a0 taskID:(unsigned long long)a1 processingStatus:(unsigned long long)a2;
- (int)fetchLocalIdentifiers:(id *)a0 taskID:(unsigned long long)a1 processingStatus:(unsigned long long)a2 additionalPredicates:(id)a3;
- (int)fetchLocalIdentifiersEligibleForRetry:(id *)a0 taskID:(unsigned long long)a1 excludingStatuses:(id)a2 fetchLimit:(unsigned long long)a3 additionalPredicates:(id)a4;
- (int)fetchLocalIdentifiersEligibleForRetry:(id *)a0 taskID:(unsigned long long)a1 fetchLimit:(unsigned long long)a2;
- (int)fetchLocalIdentifiersEligibleForRetry:(id *)a0 taskID:(unsigned long long)a1 includingStatuses:(id)a2 fetchLimit:(unsigned long long)a3 additionalPredicates:(id)a4;
- (int)fetchModifiedAssetCountSinceDate:(id)a0;
- (int)fetchMomentsScheduledAssetEntries:(id *)a0 forTaskID:(unsigned long long)a1;
- (int)fetchProcessingErrorCode:(unsigned long long *)a0 errorLine:(unsigned long long *)a1 taskID:(unsigned long long)a2 localIdentifier:(id)a3;
- (int)fetchProcessingErrorCodeCounts:(id *)a0 taskID:(unsigned long long)a1 sinceDate:(id)a2 additionalPredicates:(id)a3;
- (int)fetchProcessingStatus:(unsigned long long *)a0 attempts:(int *)a1 lastAttemptDate:(id *)a2 nextAttemptDate:(id *)a3 localIdentifier:(id)a4 taskID:(unsigned long long)a5;
- (int)fetchProgressHistoryRecords:(id *)a0 sinceDate:(id)a1;
- (BOOL)keyExistsInKeyValueStore:(id)a0;
- (int)loadAllChangeToken:(id *)a0 totalCount:(unsigned long long *)a1;
- (int)loadAllProcessingStatus:(id *)a0 totalCount:(unsigned long long *)a1;
- (int)loadAllProgressHistoryRecords:(id *)a0 totalCount:(unsigned long long *)a1;

@end
