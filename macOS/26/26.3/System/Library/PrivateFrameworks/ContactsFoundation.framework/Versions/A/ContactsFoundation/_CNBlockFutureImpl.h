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

+ (id)log;
+ (id)implWithBlock:(id /* block */)a0;
+ (id)implWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithBlock:(id /* block */)a0;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;

- (void)resumeQueue;
- (void)_flushCompletionBlocks;
- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (BOOL)isFinished;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)isCancelled;
- (BOOL)_nts_isFinished;
- (id)initWithSchedulerProvider:(id)a0;
- (id)init;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)implicitlyResumeQueue;
- (id)futureResultFromImmediateLookup;
- (void)dealloc;
- (void)updateDescriptionWithBuilder:(id)a0;
- (void)nts_resumeQueue;
- (BOOL)nts_mayResumeQueue;
- (void)addWriterBlock:(id /* block */)a0;
- (id)futureResult;
- (BOOL)nts_isFinished;

@end
