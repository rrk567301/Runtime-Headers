@class NSArray, NSDictionary, FCThreadSafeMutableArray, FCEdgeCacheHint, FCCKContentDatabase, FCThreadSafeMutableSet;

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
    FCThreadSafeMutableArray *_remainingRecordIDBatches;
    FCThreadSafeMutableArray *_resultRecords;
    FCThreadSafeMutableSet *_resultMissingRecordIDs;
    FCThreadSafeMutableArray *_allErrors;
}

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (BOOL)validateOperation;

@end
