@class CNTask, NSString, NSConditionLock, CNFutureResult, CNFutureCompletionBlocks;

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}

@property (readonly, getter=isFinished) char finished;
@property (readonly, getter=isCancelled) char cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)run;
- (void).cxx_destruct;
- (char)cancel;
- (id)initWithTask:(id)a0;
- (char)finishWithError:(id)a0;
- (char)finishWithResult:(id)a0 error:(id)a1;
- (void)didCancel;
- (id)result:(id *)a0;
- (void)_flushCompletionBlocks;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (char)finishWithResult:(id)a0;
- (id)flatMap:(id /* block */)a0;
- (id)futureResult;
- (char)nts_isFinished;
- (id)recover:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;

@end
