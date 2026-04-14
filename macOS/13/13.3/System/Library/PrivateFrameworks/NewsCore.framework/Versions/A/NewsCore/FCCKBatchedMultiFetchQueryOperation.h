@class NSArray, NSDictionary, NSMutableSet, FCEdgeCacheHint, FCCKContentDatabase, NSMutableArray;

@interface FCCKBatchedMultiFetchQueryOperation : FCOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    unsigned long long _maxBatchSize;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    id /* block */ _batchCompletionHandler;
    id /* block */ _queryCompletionHandler;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableArray *_resultRecords;
    NSMutableSet *_resultMissingRecordIDs;
}

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;

@end
