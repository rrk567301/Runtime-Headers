@class NSString, NSConditionLock, CNSuspendableSchedulerDecorator, CNFutureResult;

@interface _CNBlockFutureImpl : NSObject <CNFutureImpl> {
    CNFutureResult *_futureResult;
    char _queueSuspended;
}

@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *blockScheduler;
@property (nonatomic) char workBlockScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)implWithBlock:(id /* block */)a0;
+ (id)implWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithBlock:(id /* block */)a0;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)cancel;
- (char)isCancelled;
- (char)isFinished;
- (char)finishWithResult:(id)a0 error:(id)a1;
- (char)_nts_isFinished;
- (void)addWriterBlock:(id /* block */)a0;
- (id)futureResultFromImmediateLookup;
- (void)nts_resumeQueue;
- (void)_flushCompletionBlocks;
- (void)addFailureBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)futureResult;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;
- (void)implicitlyResumeQueue;
- (id)initWithSchedulerProvider:(id)a0;
- (char)nts_isFinished;
- (char)nts_mayResumeQueue;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)resumeQueue;
- (void)updateDescriptionWithBuilder:(id)a0;

@end
