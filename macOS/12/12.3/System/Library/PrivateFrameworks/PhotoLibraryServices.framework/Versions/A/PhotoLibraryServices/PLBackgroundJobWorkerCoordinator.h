@class NSArray, PLBackgroundJobWorkerPriorityTuple, PLBackgroundJobStatusCenter, NSMutableArray;
@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject {
    PLBackgroundJobStatusCenter *_statusCenter;
    short _workerMode;
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerPriorityTuple *_currentWorker;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<PLBackgroundJobWorkerCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithWorkerCoordinatorWorkerMode:(short)a0 statusCenter:(id)a1;
- (void)submitBundleForProcessingOnAllWorkerPriorities:(id)a0;
- (BOOL)hasPendingJobsForBundle:(id)a0 priority:(long long)a1;
- (void)submitBundleForProcessing:(id)a0 priority:(long long)a1;
- (void)stopAllBackgorundJobs;
- (id)initWithWorkerClassesAsStrings:(id)a0 workerMode:(short)a1 statusCenter:(id)a2;
- (id)_workersForBundle:(id)a0;
- (void)_submitBundleForProcessing:(id)a0 priority:(long long)a1 ignorePriority:(BOOL)a2;
- (void)_processNextWorkerInLibraryBundle:(id)a0;
- (void)_handleAllWorkersCompleted;
- (id)initWithWorkerClassesAsStrings:(id)a0;

@end
