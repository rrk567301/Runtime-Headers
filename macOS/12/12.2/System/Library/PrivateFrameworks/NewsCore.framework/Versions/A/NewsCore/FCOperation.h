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
}

@property (nonatomic) double operationStartTime;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) double timeoutDuration;
@property (nonatomic) BOOL isBackgroundDownloadOperation;
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
- (unsigned long long)maxRetries;
- (void)performOperation;
- (void)prepareOperation;
- (BOOL)waitUntilFinishedWithTimeout:(double)a0;
- (void)finishedPerformingOperationWithError:(id)a0;
- (void)associateChildOperation:(id)a0;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)cancelChildOperations;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)finishFromEarlyCancellation;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (id)throttleGroup;
- (void)resetForRetry;
- (void)operationDidFinishWithError:(id)a0;
- (void)startIfNeeded;
- (void)associateChildOperations:(id)a0;

@end
