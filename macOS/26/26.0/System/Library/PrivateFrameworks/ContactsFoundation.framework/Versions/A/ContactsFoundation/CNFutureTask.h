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

- (id)initWithTask:(id)a0;
- (id)flatMap:(id /* block */)a0;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)recover:(id /* block */)a0;
- (id)result:(id *)a0;
- (void)_flushCompletionBlocks;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (void)didCancel;
- (id)futureResult;
- (BOOL)cancel;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)run;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (BOOL)nts_isFinished;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (void).cxx_destruct;

@end
