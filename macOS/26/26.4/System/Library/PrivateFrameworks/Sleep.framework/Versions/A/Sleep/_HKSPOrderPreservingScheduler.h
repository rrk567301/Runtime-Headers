@class NSString, NSMutableArray;
@protocol HKSPMutexProvider, NAScheduler;

@interface _HKSPOrderPreservingScheduler : NSObject <HKSPScheduler>

@property (readonly, nonatomic) NSMutableArray *tasks;
@property (readonly, nonatomic) BOOL taskInProgress;
@property (readonly, nonatomic) BOOL suspended;
@property (readonly, nonatomic) id<NAScheduler> scheduler;
@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void)suspend;
- (void).cxx_destruct;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)_taskDidFinish;
- (void)_actuallyScheduleTask:(id)a0;
- (void)_executeTask:(id)a0;
- (void)_scheduleNextTaskIfPossible;
- (id)_scheduleTask:(id)a0;
- (id)initWithScheduler:(id)a0 mutexProvider:(id)a1;

@end
