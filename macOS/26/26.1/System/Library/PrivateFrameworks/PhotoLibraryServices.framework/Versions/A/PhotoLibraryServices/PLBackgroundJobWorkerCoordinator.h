@class NSObject, NSArray, PLBackgroundJobWorkerCriteriaTuple, NSMutableDictionary, PLBackgroundJobStatusCenter, NSMutableArray;
@protocol OS_dispatch_queue, PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    PLBackgroundJobStatusCenter *_statusCenter;
    short _workerMode;
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerCriteriaTuple *_currentWorker;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _shouldDeferTask;
    NSObject<OS_dispatch_queue> *_timerQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
    NSMutableDictionary *_timerLock_signalAgainTimersByWorkerType;
    NSMutableDictionary *_cachedCriteriaForPendingWorkers;
}

@property (weak, nonatomic) id<PLBackgroundJobWorkerCoordinatorDelegate> delegate;

- (id)pendingJobsForBundle:(id)a0 workerTypes:(id)a1;
- (void)_processNextWorkerInLibraryBundle:(id)a0 reportProgressUsingBlock:(id /* block */)a1;
- (id)initWithWorkerClassesAsStrings:(id)a0 workerMode:(short)a1 statusCenter:(id)a2;
- (void)submitBundleForProcessing:(id)a0 withCriteria:(id)a1 reportProgressUsingBlock:(id /* block */)a2;
- (void)stopAllBackgroundJobs;
- (void)_signalWorkerAtDate:(id)a0 workerType:(unsigned long long)a1 bundle:(id)a2;
- (id)pendingJobsForBundle:(id)a0;
- (id)_workersForBundle:(id)a0;
- (void)_handleAllWorkersCompleted;
- (BOOL)shouldDeferTask;
- (void)_inq_timerQueue_timerEventHandlerWithTimer:(id)a0 workerType:(unsigned long long)a1;
- (id)initWithWorkerClassesAsStrings:(id)a0;
- (id)initWithWorkerCoordinatorWorkerMode:(short)a0 statusCenter:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isValidWorkerClass:(Class)a0 bundle:(id)a1;

@end
