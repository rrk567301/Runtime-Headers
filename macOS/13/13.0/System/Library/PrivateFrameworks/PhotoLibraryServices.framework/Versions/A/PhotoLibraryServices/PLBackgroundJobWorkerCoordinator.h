@class NSArray, PLBackgroundJobWorkerCriteriaTuple, PLBackgroundJobStatusCenter, NSMutableArray;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    PLBackgroundJobStatusCenter *_statusCenter;
    short _workerMode;
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerCriteriaTuple *_currentWorker;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _shouldDeferActivity;
}

@property (weak, nonatomic) id<PLBackgroundJobWorkerCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)shouldDeferActivity;
- (id)initWithWorkerCoordinatorWorkerMode:(short)a0 statusCenter:(id)a1;
- (id)initWithWorkerClassesAsStrings:(id)a0;
- (id)initWithWorkerClassesAsStrings:(id)a0 workerMode:(short)a1 statusCenter:(id)a2;
- (id)_workersForBundle:(id)a0;
- (id)pendingJobsForBundle:(id)a0;
- (void)submitBundleForProcessing:(id)a0 withCriteria:(id)a1;
- (void)stopAllBackgorundJobs;
- (void)_processNextWorkerInLibraryBundle:(id)a0;
- (void)_handleAllWorkersCompleted;

@end
