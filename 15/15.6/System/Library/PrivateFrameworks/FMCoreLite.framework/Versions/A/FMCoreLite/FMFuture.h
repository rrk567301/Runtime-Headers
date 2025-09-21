@class NSString, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FMFuture : NSObject <FMPromise> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    char _finished;
    NSMutableArray *_completionBlocks;
    id _resultValue;
    NSError *_resultError;
}

@property (readonly, getter=isFinished) char finished;
@property (readonly, getter=isCancelled) char cancelled;
@property (copy, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)futureWithBlock:(id /* block */)a0;
+ (id)futureWithBlock:(id /* block */)a0 scheduler:(id)a1;
+ (id)futureWithError:(id)a0;
+ (id)futureWithResult:(id)a0;
+ (id)lazyFutureWithBlock:(id /* block */)a0;
+ (id)_chainFuturesWithFutureStack:(id)a0;
+ (id)_descriptorForChainOperation:(id)a0 onFuture:(id)a1 withBlock:(id)a2;
+ (id)chainFutures:(id)a0;
+ (id)combineAllFutures:(id)a0;
+ (id)combineAllFutures:(id)a0 ignoringErrors:(char)a1 scheduler:(id)a2;
+ (id)combineAllFutures:(id)a0 scheduler:(id)a1;
+ (id)futureWithCompletionHandlerAdapterBlock:(id /* block */)a0;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(id /* block */)a0;
+ (id)futureWithNoResult;
+ (id)lazyFutureWithBlock:(id /* block */)a0 scheduler:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (char)cancel;
- (id)addCompletionBlock:(id /* block */)a0;
- (char)finishWithError:(id)a0;
- (char)finishWithResult:(id)a0 error:(id)a1;
- (void)didCancel;
- (void)_flushCompletionBlocks;
- (id)addFailureBlock:(id /* block */)a0;
- (id)addSuccessBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (char)finishWithResult:(id)a0;
- (id)flatMap:(id /* block */)a0;
- (id)recover:(id /* block */)a0;
- (char)_queue_isCancelled;
- (char)finishWithNoResult;
- (id)recoverIgnoringError;
- (id)reschedule:(id)a0;

@end
