@class NSArray, FCCKContentDatabase, NSDictionary;

@interface FCCKContentFetchOperation : FCOperation {
    BOOL _getPermanentAssetURLs;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSArray *_desiredKeys;
    long long _optimizationPolicy;
    id /* block */ _perRecordCompletionBlock;
    id /* block */ _fetchRecordsCompletionBlock;
    NSArray *_requestUUIDs;
}

- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void)performOperation;
- (void).cxx_destruct;
- (id)init;

@end
