@class FCOnce, NSString, NSDictionary, NSObject, NSMutableArray, NFUnfairLock;
@protocol OS_dispatch_group;

@interface FCOperation : NSOperation <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing> {
    _Atomic char _executing;
    _Atomic char _finished;
    char _childOperationsCancelled;
    id /* block */ _timedOutTest;
    NSMutableArray *_childOperations;
    NFUnfairLock *_childOperationsLock;
    FCOnce *_startOnce;
    NSObject<OS_dispatch_group> *_finishedGroup;
    id _retentionToken;
}

@property (nonatomic) double operationStartTime;
@property (nonatomic) unsigned long long retryCount;
@property (readonly, nonatomic) unsigned long long maxRetries;
@property (nonatomic) double timeoutDuration;
@property (nonatomic) long long flags;
@property (copy, nonatomic) NSString *purpose;
@property (readonly, nonatomic) FCOperation *proxyOperation;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, nonatomic) char hasOperationStarted;
@property (readonly, copy, nonatomic) NSDictionary *errorUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *shortOperationDescription;
@property (readonly, nonatomic) NSString *longOperationDescription;
@property (nonatomic) long long relativePriority;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setQualityOfService:(long long)a0;
- (void)start;
- (void)cancel;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)performOperation;
- (char)waitUntilFinishedWithTimeout:(double)a0;
- (void)startIfNeeded;
- (void)associateChildOperation:(id)a0;
- (void)associateChildOperations:(id)a0;
- (char)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)cancelChildOperations;
- (void)finishFromEarlyCancellation;
- (void)finishedPerformingOperationWithError:(id)a0;
- (void)operationDidFinishWithError:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)resetForRetry;
- (char)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (id)throttleGroup;
- (char)validateOperation;
- (char)validateOperationError:(id *)a0;

@end
