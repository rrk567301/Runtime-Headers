@class NSString, PFTQueue, NSConditionLock;
@protocol PFTScheduler;

@interface PFTSuspendableSchedulerDecorator : NSObject <PFTScheduler>

@property (readonly) id<PFTScheduler> scheduler;
@property (readonly) PFTQueue *queue;
@property (readonly) NSConditionLock *lock;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suspendedSchedulerWithScheduler:(id)a0;
+ (id)resumedSchedulerWithScheduler:(id)a0;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)performBlock:(id /* block */)a0;
- (id)initWithScheduler:(id)a0;
- (void)resume;
- (void)suspend;
- (void).cxx_destruct;
- (void)_performFirstQueuedTask;
- (id)_nts_enqueueCancellableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancellableBlock:(id /* block */)a0;
- (id)performCancellableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;

@end
