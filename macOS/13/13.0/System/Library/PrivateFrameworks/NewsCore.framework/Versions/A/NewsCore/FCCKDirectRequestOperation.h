@class FCNetworkEvent, NSString, NSArray, FCEdgeCacheHint, NSError, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface FCCKDirectRequestOperation : FCOperation {
    BOOL _production;
    BOOL _operationFailsOnRequestFailure;
    BOOL _ignoreCache;
    int _networkEventType;
    NSArray *_requests;
    NSString *_containerName;
    long long _requestType;
    double _timeoutIntervalForRequest;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    id /* block */ _criticalNodeFailureTest;
    id /* block */ _requestCompletionHandler;
    NSString *_requestUUID;
    FCNetworkEvent *_networkEvent;
    NSMutableArray *_resultResponses;
    NSMutableDictionary *_resultErrorsByRequestID;
    NSError *_resultError;
}

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;

@end
