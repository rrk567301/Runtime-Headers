@class RCUnfairLock, NSString, RCOnce, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface RCOperation : NSOperation <RCOperationCanceling, RCOperationIdentifying, RCOperationPrioritizing> {
    _Atomic char _executing;
    _Atomic char _finished;
}

@property (copy, nonatomic) id /* block */ timedOutTest;
@property (retain, nonatomic) NSMutableArray *childOperations;
@property (nonatomic) char childOperationsCancelled;
@property (retain, nonatomic) RCUnfairLock *childOperationsLock;
@property (retain, nonatomic) RCOnce *startOnce;
@property (nonatomic) double operationStartTime;
@property (nonatomic) double operationEndTime;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *finishedGroup;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, nonatomic) char hasOperationStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
- (char)_startIfNeeded;
- (void)performOperation;
- (unsigned long long)maxRetries;
- (void)startIfNeeded;
- (void)_associateChildOperation:(id)a0;
- (id)_errorUserInfo;
- (void)_finishOperationWithError:(id)a0;
- (void)_finishedPerformingOperationWithError:(id)a0;
- (void)_handleRetryFromError:(id)a0 signal:(id)a1;
- (void)_handleThrottlingFromError:(id)a0 delay:(double)a1;
- (char)_shouldThrottleOperationWithRetryAfter:(double *)a0;
- (id)_userDefaultsKeyForThrottleEndDate;
- (void)associateChildOperation:(id)a0;
- (void)associateChildOperations:(id)a0;
- (char)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)cancelChildOperations;
- (void)finishFromEarlyCancellation;
- (void)finishedPerformingOperationWithError:(id)a0;
- (id)longOperationDescription;
- (void)operationDidFinishWithError:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)resetForRetry;
- (id)shortOperationDescription;
- (char)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (id)throttleGroup;
- (char)validateOperation;

@end
