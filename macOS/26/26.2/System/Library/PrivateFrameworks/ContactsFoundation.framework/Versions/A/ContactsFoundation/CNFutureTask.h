@class CNTask, NSString, NSConditionLock, CNFutureResult, CNFutureCompletionBlocks;

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}

@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flushCompletionBlocks;
- (void)didCancel;
- (id)recover:(id /* block */)a0;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)flatMap:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)cancel;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0;
- (BOOL)run;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)nts_isFinished;
- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (id)initWithTask:(id)a0;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (id)init;
- (id)result:(id *)a0;
- (id)futureResult;

@end
