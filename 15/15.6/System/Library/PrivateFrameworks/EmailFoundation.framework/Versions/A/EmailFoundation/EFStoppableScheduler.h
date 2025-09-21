@class NSString, EFLocked;
@protocol EFScheduler;

@interface EFStoppableScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler, EFScheduler> {
    struct EFAtomicObject { _Atomic long long cfObject; } _scheduler;
    EFLocked *_tokens;
}

@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assertableSchedulerWithScheduler:(id)a0;
+ (id)suspendableSchedulerWithScheduler:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)performBlock:(id /* block */)a0;
- (void)performSyncBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)initWithScheduler:(id)a0;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)stopAndWait;
- (void)_addCancelationToken:(id)a0;
- (void)_cancelAllTokens;
- (void)_removeCancelationToken:(id)a0;
- (void)assertIsExecuting:(char)a0;
- (void)performSyncBarrierBlock:(id /* block */)a0;
- (void)performVoucherPreservingBlock:(id /* block */)a0;
- (id)performWithObject:(id)a0;

@end
