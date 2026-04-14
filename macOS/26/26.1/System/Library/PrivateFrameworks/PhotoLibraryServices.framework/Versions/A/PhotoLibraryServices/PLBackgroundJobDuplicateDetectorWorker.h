@interface PLBackgroundJobDuplicateDetectorWorker : PLBackgroundJobWorker {
    BOOL _canceled_lock_isCanceled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canceled_lock;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (id)_convertToObjectIDsFromUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (unsigned long long)type;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (BOOL)_isEntireLibraryWorkItem:(id)a0;
- (void)_updateLastInitialProcessingDateIfCompleted:(BOOL)a0 library:(id)a1;
- (BOOL)isInterruptible;
- (void)stopWorkingOnItem:(id)a0;
- (BOOL)_isJobCancelled;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)_fetchedUUIDsFromUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (short)_detectionJobType;
- (id)initWithLibraryBundle:(id)a0;
- (BOOL)_checkItems:(id)a0 forType:(short)a1 library:(id)a2;
- (BOOL)_hasCompletedPerceptualProcessingWithLibrary:(id)a0;
- (void)_setMarkerWithPrivateData:(id)a0 value:(BOOL)a1 wellKnownIdentifier:(long long)a2;
- (BOOL)_isInProgressEntireLibraryWorkItem:(id)a0;
- (void)_processWorkItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)_setProcessingStatus:(char)a0 library:(id)a1;
- (char)_processingStatusForLibrary:(id)a0;
- (BOOL)_processDuplicatesWithLimitedSelection:(id)a0 processingType:(unsigned long long)a1 library:(id)a2 error:(id *)a3 continuationHandler:(id /* block */)a4;
- (void)_cleanUpWorkItems:(id)a0 shouldDeleteAllJobs:(BOOL)a1 oidsToRemove:(id)a2 uuidsToRemove:(id)a3 library:(id)a4;
- (id)_backgroundJobWorkItemsFromObjectIDs:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (id)_convertToUUIDsFromObjectIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (BOOL)_isInitialEntireLibraryWorkItem:(id)a0;
- (void)_resetMarkerIfRequiredFromLibrary:(id)a0;
- (unsigned long long)_processingTypeFromWorkItems:(id)a0 library:(id)a1;

@end
