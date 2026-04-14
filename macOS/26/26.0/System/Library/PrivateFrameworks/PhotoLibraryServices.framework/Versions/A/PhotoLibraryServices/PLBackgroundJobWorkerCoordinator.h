@class NSArray, PLBackgroundJobWorkerCriteriaTuple, NSMutableDictionary, PLBackgroundJobStatusCenter, NSMutableArray;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    PLBackgroundJobStatusCenter *_statusCenter;
    short _workerMode;
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerCriteriaTuple *_currentWorker;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _shouldDeferTask;
    NSMutableDictionary *_cachedCriteriaForPendingWorkers;
}

@property (weak, nonatomic) id<PLBackgroundJobWorkerCoordinatorDelegate> delegate;

- (id)pendingJobsForBundle:(id)a0 workerTypes:(id)a1;
- (id)initWithWorkerCoordinatorWorkerMode:(short)a0 statusCenter:(id)a1;
- (void)stopAllBackgroundJobs;
- (id)initWithWorkerClassesAsStrings:(id)a0;
- (id)initWithWorkerClassesAsStrings:(id)a0 workerMode:(short)a1 statusCenter:(id)a2;
- (id)pendingJobsForBundle:(id)a0;
- (void)_handleAllWorkersCompleted;
- (void)_processNextWorkerInLibraryBundle:(id)a0 reportProgressUsingBlock:(id /* block */)a1;
- (BOOL)shouldDeferTask;
- (void)submitBundleForProcessing:(id)a0 withCriteria:(id)a1 reportProgressUsingBlock:(id /* block */)a2;
- (id)_workersForBundle:(id)a0;
- (void).cxx_destruct;

@end
