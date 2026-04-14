@class NSString, PFTStack;
@protocol PFTScheduler;

@interface PFTCoalescingSchedulerDecorator : NSObject <PFTScheduler>

@property (readonly, nonatomic) id<PFTScheduler> scheduler;
@property (readonly, nonatomic) double coalescingWindow;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) PFTStack *delayedBlocks;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)flushDelayedBlock;
- (unsigned long long)getAndIncrementState;
- (id)initWithScheduler:(id)a0 coalescingWindow:(double)a1;
- (void)removeDelayedBlock:(id /* block */)a0;
- (id)performCancellableBlock:(id /* block */)a0;
- (id)performCancellableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;

@end
