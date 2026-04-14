@class FCNetworkEvent, NSString, NSArray, NSURL, FCEdgeCacheHint, NSMutableDictionary, NSDictionary, NSError, NSMutableArray;
@protocol FCNetworkBehaviorMonitor;

@interface FCCKDirectRequestOperation : FCNetworkOperation {
    BOOL _production;
    BOOL _operationFailsOnRequestFailure;
    BOOL _ignoreCache;
    int _networkEventType;
    NSArray *_requests;
    NSURL *_baseURL;
    NSString *_containerName;
    long long _requestType;
    NSDictionary *_additionalRequestHTTPHeaders;
    id<FCNetworkBehaviorMonitor> _networkBehaviorMonitor;
    FCEdgeCacheHint *_edgeCacheHint;
    id /* block */ _criticalNodeFailureTest;
    id /* block */ _requestCompletionHandler;
    NSString *_requestUUID;
    FCNetworkEvent *_networkEvent;
    NSMutableArray *_resultResponses;
    NSMutableDictionary *_resultErrorsByRequestID;
    NSError *_resultError;
}

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithNetworkReachability:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void)resetForRetry;
- (BOOL)validateOperation;
- (BOOL)areNetworkRequirementsSatisfiedWithReachability:(id)a0 offlineReason:(long long *)a1;
- (double)preferredTimeoutIntervalForRequest;

@end
