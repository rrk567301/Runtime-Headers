@class PLPhotoLibraryBundle, NSSet, NSPersistentHistoryToken;

@interface PLBackgroundJobPersonSyncWorker : PLBackgroundJobWorker {
    NSSet *_propertiesToIgnore;
}

@property (copy) NSPersistentHistoryToken *cancelledWorkItem;
@property (retain) PLPhotoLibraryBundle *testingSourceBundle;

+ (char)_isTokenInvalidError:(id)a0;
+ (char)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (char)usesMultipleLibrariesConcurrently;

- (void).cxx_destruct;
- (char)isInterruptible;
- (id)_lastPersonSyncSourceLibraryURLFromSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)_resetFacesProcessingForPerson:(id)a0;
- (void)_savePersonSyncToken:(id)a0 toLibrary:(id)a1;
- (id)_anyPersistentHistoryTokenWithLibrary:(id)a0;
- (void)_deletePersonWithUuid:(id)a0 fromLibrary:(id)a1;
- (id)_faceCropUuidsFromLibrary:(id)a0 error:(id *)a1;
- (id)_faceCropUuidsMissingFromList:(id)a0 inLibrary:(id)a1 error:(id *)a2;
- (id)_lastPersonSyncTokenFromLibrary:(id)a0;
- (void)_processNextPersonInChangedObjectIDs:(id)a0 fromSourceLibrary:(id)a1 toDestLibrary:(id)a2 group:(id)a3 workItem:(id)a4 deletedUuids:(id)a5 errorHandler:(id /* block */)a6;
- (void)_resetCancelledWorkItem;
- (char)_resetPersonSyncInTargetLibrary:(id)a0 error:(id *)a1;
- (void)_setupPropertiesToIgnoreWithSourceLibrary:(id)a0;
- (char)_shouldCancelCurrentWorkItem:(id)a0;
- (id)_sourcePhotoLibraryWithName:(const char *)a0;
- (char)_syncFaceCropsFromLibrary:(id)a0 toLibrary:(id)a1 error:(id *)a2;
- (void)_syncPerson:(id)a0 toLibrary:(id)a1 completion:(id /* block */)a2;
- (char)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (id)_transactionIteratorSinceLastToken:(id)a0 sourceLibrary:(id)a1 error:(id *)a2;
- (id)_transactionIteratorSinceTokenIfValid:(id)a0 sourceLibrary:(id)a1 error:(id *)a2;
- (void)_updateLastPersonSyncSourceLibraryURLWithSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
