@class EFPromise, NSConditionLock;
@protocol EFScheduler;

@interface EFLazyFuture : EFFuture {
    NSConditionLock *_stateLock;
    id<EFScheduler> _scheduler;
    id /* block */ _block;
    EFPromise *_promise;
}

- (void)addSuccessBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)isFinished;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (BOOL)isCancelled;
- (void)onScheduler:(id)a0 addFailureBlock:(id /* block */)a1;
- (BOOL)run;
- (void).cxx_destruct;
- (void)onScheduler:(id)a0 addSuccessBlock:(id /* block */)a1;
- (BOOL)tryCancel;
- (id)initWithScheduler:(id)a0 block:(id /* block */)a1;
- (id)resultIfAvailable:(id *)a0;

@end
