@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PXPreloadScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_pendingUtilityTasks;
    NSMutableArray *_pendingBlocks;
    struct __CFRunLoopObserver { } *_runloopObserver;
}

@property (class, readonly, nonatomic) PXPreloadScheduler *sharedScheduler;

@property (nonatomic, setter=_setActive:) BOOL _isActive;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleMainQueueTask:(id /* block */)a0;
- (void)scheduleMainQueueTaskAndWait:(id /* block */)a0;
- (void)scheduleTaskWithQoS:(unsigned long long)a0 block:(id /* block */)a1;
- (void)scheduleDeferredTaskWithQoS:(unsigned long long)a0 block:(id /* block */)a1;
- (void)_willScheduleTaskWithQoS:(unsigned long long)a0;
- (void)_didExecuteTaskWithQoS:(unsigned long long)a0;
- (BOOL)_shouldExecutePendingBlock;
- (void)_runLoopWillStartWaiting;
- (void)_updateIsActive;
- (void)scheduleTaskAfterCATransactionCommits:(id /* block */)a0;

@end
