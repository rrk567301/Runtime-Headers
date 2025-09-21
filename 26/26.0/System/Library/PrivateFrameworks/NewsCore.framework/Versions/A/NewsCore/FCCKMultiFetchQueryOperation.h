@class NSArray, NSDictionary, NSMutableSet, FCEdgeCacheHint, FCCKContentDatabase;

@interface FCCKMultiFetchQueryOperation : FCOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    long long _optimizationPolicy;
    NSArray *_networkEvents;
    id /* block */ _networkActivityBlock;
    id /* block */ _recordHandler;
    id /* block */ _queryCompletionHandler;
    NSDictionary *_recordSpecsByType;
    NSMutableSet *_resultMissingRecordIDs;
}

- (void)performOperation;
- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
