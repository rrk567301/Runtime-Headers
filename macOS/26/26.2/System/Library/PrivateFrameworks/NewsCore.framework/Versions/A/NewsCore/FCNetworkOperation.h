@class NSString;
@protocol FCNetworkReachabilityType;

@interface FCNetworkOperation : FCOperation <FCNetworkReachabilityObserving>

@property (readonly, nonatomic) id<FCNetworkReachabilityType> networkReachability;
@property (readonly, nonatomic) double preferredTimeoutIntervalForRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (BOOL)areNetworkRequirementsSatisfiedWithReachability:(id)a0 offlineReason:(long long *)a1;
- (id)initWithNetworkReachability:(id)a0;
- (unsigned long long)maxRetries;
- (void)prepareOperation;
- (void).cxx_destruct;
- (void)networkReachabilityDidChange:(id)a0;
- (id)init;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (BOOL)validateOperationError:(id *)a0;

@end
