@class PLPhotoLibraryBundle;

@interface PLBackgroundJobPersonSyncWorker : PLBackgroundJobWorker

@property BOOL isCancelled;
@property (retain) PLPhotoLibraryBundle *testingDestinationBundle;

+ (BOOL)usesMultipleLibrariesConcurrently;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (id)_faceCropUuidsFromLibrary:(id)a0 error:(id *)a1;
- (unsigned long long)type;
- (BOOL)_resumeResetSyncDeletedPersonsFromSyndicationLibrary:(id)a0 toSystemLibrary:(id)a1 error:(id *)a2;
- (id)_resumeObjectIDInLibrary:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (BOOL)_syncFaceCropsFromLibrary:(id)a0 toLibrary:(id)a1 error:(id *)a2;
- (BOOL)isInterruptible;
- (void)_setResumeMarkerInLibrary:(id)a0 objectID:(id)a1;
- (void)stopWorkingOnItem:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)_syncPerson:(id)a0 toLibrary:(id)a1 error:(id *)a2;
- (id)_nextBatchOfPersonsWithResumeObjectId:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)_syncStateMatchesBetweenSystemLibrary:(id)a0 syndicationLibrary:(id)a1;
- (void)_setCompletedResetSyncFromLibrary:(id)a0;
- (id)_faceCropUuidsMissingFromList:(id)a0 inLibrary:(id)a1 error:(id *)a2;
- (void)_resetFacesProcessingForPerson:(id)a0;
- (BOOL)_hasCompletedResetSyncFromLibrary:(id)a0;
- (id)_coalescedWorkItemObjectIDsFrom:(id)a0 inLibrary:(id)a1;
- (BOOL)_isResetWorkItem:(id)a0;
- (void)_deleteAllExistingPersonSyncWorkItemsInLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)_processWorkItemObjectIDs:(id)a0 fromSystemLibrary:(id)a1 toSyndicationLibrary:(id)a2 error:(id *)a3;
- (BOOL)_isFaceCropsWorkItem:(id)a0;
- (void)_deletePersonWithUuid:(id)a0 fromLibrary:(id)a1;
- (void)_setMatchingSyncStateWithSystemLibrary:(id)a0 syndicationLibrary:(id)a1;
- (BOOL)_resumeResetSyncPersonsFromSystemLibrary:(id)a0 toSyndicationLibrary:(id)a1 error:(id *)a2;
- (id)_syndicationLibraryWithName:(const char *)a0;

@end
