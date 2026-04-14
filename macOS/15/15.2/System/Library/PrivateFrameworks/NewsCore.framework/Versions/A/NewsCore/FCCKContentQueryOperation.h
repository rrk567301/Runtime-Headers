@class FCEdgeCacheHint, NSArray, NSDictionary, CKQueryCursor, CKQuery, FCCKContentDatabase;

@interface FCCKContentQueryOperation : FCOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    id /* block */ _recordFetchedBlock;
    id /* block */ _queryCompletionBlock;
    NSArray *_requestUUIDs;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    unsigned long long _queryPriority;
    NSArray *_networkEvents;
    id /* block */ _networkActivityBlock;
    CKQueryCursor *_resultCursor;
}

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (id)throttleGroup;
- (BOOL)validateOperation;

@end
