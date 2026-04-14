@interface FCNetworkOperation : FCOperation

@property (readonly, nonatomic) double preferredTimeoutIntervalForRequest;

- (unsigned long long)maxRetries;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;

@end
