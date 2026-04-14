@class NSString, NSConditionLock, CNSuspendableSchedulerDecorator, CNFutureResult;

@interface _CNBlockFutureImpl : NSObject <CNFutureImpl> {
    CNFutureResult *_futureResult;
    BOOL _queueSuspended;
}

@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *blockScheduler;
@property (nonatomic) BOOL workBlockScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)implWithBlock:(id /* block */)a0;
+ (id)lazyImplWithBlock:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)cancel;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addFailureBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)updateDescriptionWithBuilder:(id)a0;
- (void)_flushCompletionBlocks;
- (id)initWithSchedulerProvider:(id)a0;
- (void)resumeQueue;
- (void)addWriterBlock:(id /* block */)a0;
- (BOOL)nts_mayResumeQueue;
- (void)nts_resumeQueue;
- (void)implicitlyResumeQueue;
- (id)futureResultFromImmediateLookup;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)_nts_isFinished;
- (BOOL)nts_isFinished;
- (id)futureResult;

@end
