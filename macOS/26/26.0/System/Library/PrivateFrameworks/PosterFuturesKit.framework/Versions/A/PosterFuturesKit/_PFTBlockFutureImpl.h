@class PFTFutureResult, NSString, NSConditionLock, PFTSuspendableSchedulerDecorator;

@interface _PFTBlockFutureImpl : NSObject <PFTFutureImpl> {
    PFTFutureResult *_futureResult;
    BOOL _queueSuspended;
}

@property (readonly, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic) PFTSuspendableSchedulerDecorator *blockScheduler;
@property (nonatomic) BOOL workBlockScheduled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithBlock:(id /* block */)a0;
+ (id)implWithSchedulerProvider:(id)a0 block:(id /* block */)a1;
+ (id)lazyImplWithBlock:(id /* block */)a0;
+ (id)lazyImplWithSchedulerProvider:(id)a0 block:(id /* block */)a1;

- (BOOL)_nts_isFinished;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)_flushCompletionBlocks;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)isFinished;
- (BOOL)nts_mayResumeQueue;
- (BOOL)isCancelled;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)dealloc;
- (void)addWriterBlock:(id /* block */)a0;
- (id)futureResult;
- (void)appendDescriptionToStream:(id)a0;
- (id)initWithSchedulerProvider:(id)a0;
- (BOOL)cancel;
- (void)addFailureBlock:(id /* block */)a0;
- (void)resumeQueue;
- (BOOL)nts_isFinished;
- (id)init;
- (id)futureResultFromImmediateLookup;
- (void)implicitlyResumeQueue;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)a0 error:(out id *)a1;
- (void)nts_resumeQueue;
- (void).cxx_destruct;

@end
