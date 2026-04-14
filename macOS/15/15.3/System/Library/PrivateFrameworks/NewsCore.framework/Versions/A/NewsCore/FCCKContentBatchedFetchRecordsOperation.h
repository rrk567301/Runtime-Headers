@class FCThreadSafeMutableDictionary, NSArray, FCThreadSafeMutableArray, FCCKContentDatabase;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    unsigned long long _maxBatchSize;
    id /* block */ _fetchRecordsCompletionBlock;
    FCThreadSafeMutableArray *_remainingRecordIDBatches;
    FCThreadSafeMutableDictionary *_recordsByRecordID;
    FCThreadSafeMutableDictionary *_errorsByRecordID;
    FCThreadSafeMutableArray *_allOperationErrors;
}

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;

@end
