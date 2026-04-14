@class EFPromise, NSConditionLock;
@protocol EFScheduler;

@interface EFLazyFuture : EFFuture {
    NSConditionLock *_stateLock;
    id<EFScheduler> _scheduler;
    id /* block */ _block;
    EFPromise *_promise;
}

- (BOOL)run;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)tryCancel;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (id)resultIfAvailable:(id *)a0;
- (void)onScheduler:(id)a0 addSuccessBlock:(id /* block */)a1;
- (void)onScheduler:(id)a0 addFailureBlock:(id /* block */)a1;
- (id)initWithScheduler:(id)a0 block:(id /* block */)a1;

@end
