@class NSArray, NSMutableDictionary, NSError, FCCKContentDatabase, NSMutableArray;

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    unsigned long long _maxBatchSize;
    id /* block */ _fetchRecordsCompletionBlock;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableDictionary *_recordsByRecordID;
    NSMutableDictionary *_errorsByRecordID;
    NSError *_operationError;
}

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)resetForRetry;

@end
