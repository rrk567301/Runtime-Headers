@class RCUnfairLock, NSString, RCOnce, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface RCOperation : NSOperation <RCOperationCanceling, RCOperationIdentifying, RCOperationPrioritizing> {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
}

@property (copy, nonatomic) id /* block */ timedOutTest;
@property (retain, nonatomic) NSMutableArray *childOperations;
@property (nonatomic) BOOL childOperationsCancelled;
@property (retain, nonatomic) RCUnfairLock *childOperationsLock;
@property (retain, nonatomic) RCOnce *startOnce;
@property (nonatomic) double operationStartTime;
@property (nonatomic) double operationEndTime;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *finishedGroup;
@property (nonatomic) double timeoutDuration;
@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, nonatomic) BOOL hasOperationStarted;
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
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)addCompletionHandler:(id /* block */)a0;
- (BOOL)_startIfNeeded;
- (unsigned long long)maxRetries;
- (void)performOperation;
- (void)prepareOperation;
- (BOOL)waitUntilFinishedWithTimeout:(double)a0;
- (id)shortOperationDescription;
- (void)finishedPerformingOperationWithError:(id)a0;
- (void)associateChildOperation:(id)a0;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)cancelChildOperations;
- (unsigned long long)propertiesInheritedByChildOperations;
- (BOOL)_shouldThrottleOperationWithRetryAfter:(double *)a0;
- (id)_errorUserInfo;
- (void)_finishOperationWithError:(id)a0;
- (void)finishFromEarlyCancellation;
- (id)longOperationDescription;
- (void)_finishedPerformingOperationWithError:(id)a0;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (void)_handleThrottlingFromError:(id)a0 delay:(double)a1;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)_handleRetryFromError:(id)a0 signal:(id)a1;
- (id)throttleGroup;
- (id)_userDefaultsKeyForThrottleEndDate;
- (void)resetForRetry;
- (void)_associateChildOperation:(id)a0;
- (void)operationDidFinishWithError:(id)a0;
- (void)startIfNeeded;
- (void)associateChildOperations:(id)a0;

@end
