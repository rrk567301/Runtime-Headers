@class NSError, NSManagedObjectContext;

@interface MADChangeRequest : NSObject {
    NSManagedObjectContext *_moc;
}

@property (readonly, nonatomic) NSError *error;

+ (id)changeRequestWithManagedObjectContext:(id)a0;

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (void)setMomentsScheduledAssetWithLocalIdentifier:(id)a0 taskID:(unsigned long long)a1 requestDate:(id)a2;
- (id)_fetchEarliestNthTransaction:(unsigned long long)a0;
- (int)_fetchOrCreateManagedProcessingStatusWithTaskID:(unsigned long long)a0 localIdentifier:(id)a1 managedProcessingStatus:(id *)a2;
- (int)_hardFailAllRunningProcessingStatusForTaskID:(unsigned long long)a0 additionalPredicates:(id)a1;
- (int)_hardFailAllRunningProcessingStatusWithPredicate:(id)a0;
- (int)_prunePersistentHistoryBeforeTransaction:(id)a0;
- (unsigned long long)_queryTransactionRecordCount;
- (int)_removeAssetsWithPredicate:(id)a0;
- (int)_removeBackgroundAnalysisProgressHistoryImmediatelyWithPredicate:(id)a0;
- (int)_removeChangeTokenImmediatelyWithPredicate:(id)a0;
- (int)_removeChangeTokenWithPredicate:(id)a0;
- (int)_removeMomentsScheduledAssetImmediatelyWithPredicate:(id)a0;
- (int)_removeMomentsScheduledAssetWithPredicate:(id)a0;
- (int)_removeProcessingStatusImmediatelyWithPredicate:(id)a0;
- (int)_removeProcessingStatusWithPredicate:(id)a0;
- (int)_setAttempts:(unsigned long long)a0 asset:(id)a1 taskID:(unsigned long long)a2 status:(unsigned long long)a3 lastAttemptDate:(id)a4 mediaType:(long long)a5 mediaSubtypes:(unsigned long long)a6 errorCode:(unsigned long long)a7 errorLine:(unsigned long long)a8;
- (int)_updateProcessingStatus:(unsigned long long)a0 nextAttemptDate:(id)a1 errorCode:(unsigned long long)a2 errorLine:(unsigned long long)a3 localIdentifier:(id)a4 taskID:(unsigned long long)a5;
- (void)assetWithPhotosAsset:(id)a0 analysis:(id)a1;
- (void)bumpAnalysisVersionForAssetWithLocalIdentifier:(id)a0;
- (void)deleteAnalysisResultsImmediatelyWithType:(unsigned long long)a0;
- (void)hardFailAllRunningProcessingStatusForTaskID:(unsigned long long)a0;
- (void)hardFailAllRunningProcessingStatusForTaskID:(unsigned long long)a0 additionalPredicates:(id)a1;
- (void)prunePersistentHistoryWithCancelBlock:(id /* block */)a0 extendTimeoutBlock:(id /* block */)a1;
- (void)removeAllBackgroundAnalysisProgressHistoryImmediately;
- (void)removeAllChangeTokensImmediately;
- (void)removeAllChangeTokensImmediatelyForTaskID:(unsigned long long)a0;
- (void)removeAllDataStoreKeyValuePairsImmediately;
- (void)removeAllMomentsScheduledAssetsImmediately;
- (void)removeAllProcessingStatusImmediately;
- (void)removeAllProcessingStatusImmediatelyForTaskID:(unsigned long long)a0;
- (void)removeAssetsWithLocalIdentifiers:(id)a0;
- (void)removeChangeTokenForTaskID:(unsigned long long)a0 changeTokenType:(unsigned long long)a1;
- (void)removeDataStoreKey:(id)a0;
- (void)removeMomentsScheduledAssetWithLocalIdentifier:(id)a0 taskID:(unsigned long long)a1;
- (void)removeProcessingStatusForLocalIdentifier:(id)a0 taskID:(unsigned long long)a1;
- (void)removeProcessingStatusForLocalIdentifiers:(id)a0 taskID:(unsigned long long)a1;
- (void)removeProcessingStatusImmediatelyForTaskID:(unsigned long long)a0 mediaType:(long long)a1 mediaSubtypes:(unsigned long long)a2;
- (void)removeProgressEntriesBeyondLimits;
- (void)setAttempts:(unsigned long long)a0 asset:(id)a1 taskID:(unsigned long long)a2 status:(unsigned long long)a3 lastAttemptDate:(id)a4;
- (void)setAttempts:(unsigned long long)a0 asset:(id)a1 taskID:(unsigned long long)a2 status:(unsigned long long)a3 lastAttemptDate:(id)a4 mediaType:(long long)a5 mediaSubtypes:(unsigned long long)a6 errorCode:(unsigned long long)a7 errorLine:(unsigned long long)a8;
- (void)setChangeToken:(id)a0 taskID:(unsigned long long)a1 changeTokenType:(unsigned long long)a2 date:(id)a3;
- (void)setDataStoreValue:(long long)a0 forKey:(id)a1;
- (void)setDataStoreValueIfNotExist:(long long)a0 forKey:(id)a1;
- (void)setDeletePendingFlag:(BOOL)a0 forLocalIdentifier:(id)a1;
- (void)storeProgressForActivityID:(unsigned long long)a0 analysisSubtype:(unsigned long long)a1 version:(unsigned long long)a2 processedAssetCount:(unsigned long long)a3 totalAssetCount:(unsigned long long)a4 storeDate:(id)a5;
- (void)storeStatsFlags:(unsigned long long)a0 forLocalIdentifier:(id)a1;
- (void)updateChangeToken:(id)a0 taskID:(unsigned long long)a1 changeTokenType:(unsigned long long)a2;
- (void)updateProcessingStatus:(unsigned long long)a0 nextAttemptDate:(id)a1 errorCode:(unsigned long long)a2 errorLine:(unsigned long long)a3 localIdentifier:(id)a4 taskID:(unsigned long long)a5;
- (void)updateProcessingStatus:(unsigned long long)a0 nextAttemptDate:(id)a1 localIdentifier:(id)a2 taskID:(unsigned long long)a3;

@end
