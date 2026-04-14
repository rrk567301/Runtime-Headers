@class NSArray, FCThreadSafeMutableArray, FCThreadSafeMutableSet, FCCKContentDatabase;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    unsigned long long _maxBatchSize;
    unsigned long long _maxParallelBatches;
    long long _optimizationPolicy;
    id /* block */ _perRecordCompletionBlock;
    id /* block */ _fetchRecordsCompletionBlock;
    FCThreadSafeMutableArray *_remainingRecordIDBatches;
    FCThreadSafeMutableSet *_handledRecordIDs;
    FCThreadSafeMutableArray *_allOperationErrors;
}

- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;
- (void)performOperation;
- (void).cxx_destruct;
- (id)init;

@end
