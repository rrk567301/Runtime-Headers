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

- (void)performOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)init;
- (void).cxx_destruct;

@end
