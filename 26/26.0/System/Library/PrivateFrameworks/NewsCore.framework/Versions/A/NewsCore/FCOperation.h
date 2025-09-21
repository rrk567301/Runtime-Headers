@class FCOnce, NSString, NSDictionary, NSObject, NSMutableArray, NFUnfairLock;
@protocol OS_dispatch_group;

@interface FCOperation : NSOperation <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing> {
    _Atomic BOOL _executing;
    _Atomic BOOL _finished;
    BOOL _childOperationsCancelled;
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
@property (readonly, nonatomic) BOOL hasOperationStarted;
@property (readonly, copy, nonatomic) NSDictionary *errorUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *shortOperationDescription;
@property (readonly, nonatomic) NSString *longOperationDescription;
@property (nonatomic) long long relativePriority;

- (void)performOperation;
- (void)resetForRetry;
- (BOOL)isAsynchronous;
- (void)prepareOperation;
- (void)setQualityOfService:(long long)a0;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)validateOperation;
- (void)dealloc;
- (void)cancel;
- (void)operationDidFinishWithError:(id)a0;
- (void)addCompletionHandler:(id /* block */)a0;
- (id)init;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)finishFromEarlyCancellation;
- (BOOL)waitUntilFinishedWithTimeout:(double)a0;
- (id)throttleGroup;
- (void).cxx_destruct;
- (void)startIfNeeded;
- (void)associateChildOperation:(id)a0;
- (void)associateChildOperations:(id)a0;
- (void)cancelChildOperations;
- (void)finishedPerformingOperationWithError:(id)a0;
- (unsigned long long)propertiesInheritedByChildOperations;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (BOOL)validateOperationError:(id *)a0;

@end
