@class NSArray, NSDictionary, FCEdgeCacheHint, FCCKContentDatabase, NSError;

@interface FCCKOrderFeedQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_feedRequests;
    NSArray *_desiredKeys;
    unsigned long long _resultsLimit;
    unsigned long long _queryPriority;
    NSArray *_articleLinkKeys;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    id /* block */ _queryCompletionHandler;
    NSArray *_resultFeedItemAndArticleRecords;
    NSArray *_resultTagRecords;
    NSArray *_resultIssueRecords;
    NSArray *_resultFeedResponses;
    NSError *_resultError;
}

+ (id)_predicateForPerFeedFieldName:(id)a0 key:(id)a1 defaultValue:(id)a2 requests:(id)a3;
+ (id)_requiredKeys;
+ (id)_constructQueryForRequests:(id)a0 resultsLimit:(unsigned long long)a1 queryPriority:(unsigned long long)a2 articleLinkKeys:(id)a3;

- (void)resetForRetry;
- (void)performOperation;
- (id)_feedRelativeDictionaryFromResultsArray:(id)a0;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void).cxx_destruct;
- (id)_responseForRequest:(id)a0 feedItemAndArticleRecords:(id)a1 allFeedItemAndArticleRecords:(id)a2 wasDropped:(id)a3 reachedMinOrder:(id)a4 reachedEnd:(id)a5 nextOrder:(id)a6;
- (void)_processResultsRecord:(id)a0 feedItemAndArticleRecords:(id)a1 tagRecords:(id)a2 issueRecords:(id)a3 requestUUID:(id)a4;

@end
