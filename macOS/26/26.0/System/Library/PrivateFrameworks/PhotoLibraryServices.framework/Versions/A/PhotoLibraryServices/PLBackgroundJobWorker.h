@class NSMutableArray, NSString, PLBackgroundJobStatusCenter, PLPhotoLibraryBundle;

@interface PLBackgroundJobWorker : NSObject <PLBackgroundJobWorkerProtocol> {
    id /* block */ _workerCompleteCompletionHandler;
    id /* block */ _currentManagedObjectCompletionHandler;
    _Atomic long long _workerAtomicCounter;
    _Atomic long long _completionHandlerAtomicCounter;
    id /* block */ _workerForcefullyStopHandler;
    NSMutableArray *_pendingJobs;
    unsigned long long _totalJobsCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _shouldStop;
    _Atomic BOOL _shouldDeferTask;
}

@property (readonly, nonatomic) NSString *workerName;
@property (readonly, nonatomic) NSString *workerDetailedName;
@property (weak, nonatomic) PLBackgroundJobStatusCenter *statusCenter;
@property (readonly, nonatomic) PLPhotoLibraryBundle *libraryBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)usesMultipleLibrariesConcurrently;
+ (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
+ (long long)availableDiskSpaceForVolumeURL:(id)a0;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (unsigned long long)type;
- (void)stopWorkingOnItem:(id)a0;
- (id)init;
- (id)photoLibraryWithDatabaseContext:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (BOOL)shouldDeferTask;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)_handleAllJobsCompleteInLibrary:(id)a0 allowOutsideLimiter:(BOOL)a1;
- (void)_processNextManagedObjectInLibrary:(id)a0 continueRunning:(BOOL)a1 allowOutsideLimiter:(BOOL)a2 reportProgressUsingBlock:(id /* block */)a3;
- (BOOL)hasEnoughDiskSpaceToContinue:(id /* block */)a0;
- (id)pendingJobsInLibrary:(id)a0;
- (void)startWorkInLibrary:(id)a0 withWorkItemsNeedingProcessing:(id)a1 reportProgressUsingBlock:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)stopAllWork;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
