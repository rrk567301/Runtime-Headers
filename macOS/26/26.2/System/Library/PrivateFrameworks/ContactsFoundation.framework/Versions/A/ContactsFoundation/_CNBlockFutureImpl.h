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

- (void)_flushCompletionBlocks;
- (void)resumeQueue;
- (BOOL)isCancelled;
- (void)addFailureBlock:(id /* block */)a0;
- (BOOL)nts_mayResumeQueue;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)cancel;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)initWithSchedulerProvider:(id)a0;
- (BOOL)isFinished;
- (void)implicitlyResumeQueue;
- (BOOL)_nts_isFinished;
- (void)nts_resumeQueue;
- (BOOL)nts_isFinished;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(id *)a1;
- (id)futureResultFromImmediateLookup;
- (void).cxx_destruct;
- (void)updateDescriptionWithBuilder:(id)a0;
- (id)init;
- (void)addWriterBlock:(id /* block */)a0;
- (void)dealloc;
- (id)futureResult;

@end
