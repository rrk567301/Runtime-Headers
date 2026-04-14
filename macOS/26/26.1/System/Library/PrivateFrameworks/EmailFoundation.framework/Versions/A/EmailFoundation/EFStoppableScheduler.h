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

+ (id)suspendableSchedulerWithScheduler:(id)a0;
+ (id)assertableSchedulerWithScheduler:(id)a0;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0;
- (void)performSyncBlock:(id /* block */)a0;
- (void)_removeCancelationToken:(id)a0;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)initWithScheduler:(id)a0;
- (void)_cancelAllTokens;
- (void)assertIsExecuting:(BOOL)a0;
- (void)resume;
- (void)suspend;
- (id)performWithObject:(id)a0;
- (void)_addCancelationToken:(id)a0;
- (void)stopAndWait;
- (void)performVoucherPreservingBlock:(id /* block */)a0;
- (void)dealloc;
- (void)performSyncBarrierBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
