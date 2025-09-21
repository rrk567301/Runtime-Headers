@class NSString, PLGuestAssetSyncEngine;

@interface PLBackgroundJobGuestAssetSyncWorker : PLBackgroundJobWorker <PLGuestAssetSyncEngineDelegate> {
    PLGuestAssetSyncEngine *_manager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _lock_isPerformingInitialSync;
    char _lock_isCancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_needsInitialSyncForSourceLibrary:(id)a0 targetLibrary:(id)a1;
+ (char)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (char)usesMultipleLibrariesConcurrently;

- (void).cxx_destruct;
- (char)isInterruptible;
- (id)initWithLibraryBundle:(id)a0;
- (char)_batchResetGuestSavedAssetTypeInManagedObjectContext:(id)a0 error:(id *)a1;
- (char)_batchResetSyndicationProcessingInManagedObjectContext:(id)a0 error:(id *)a1;
- (char)_checkSyndicationPreferencesEnabledAndCleanupGuestAssetsIfNeededWithPhotoLibrary:(id)a0;
- (char)_deleteAllGuestAssetsInPhotoLibrary:(id)a0 reason:(id)a1 error:(id *)a2;
- (id)_lastGuestAssetSyncTargetLibraryURLFromSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)_performWorkOnItem:(id)a0 inSystemPhotoLibrary:(id)a1 completion:(id /* block */)a2;
- (char)_resetSyndicationProcessingInSourceLibrary:(id)a0 error:(id *)a1;
- (char)_safeIsCancelled;
- (id)_sourcePhotoLibraryWithName:(const char *)a0;
- (char)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)_updateLastGuestAssetSyncTargetLibraryURLInSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)guestAssetSyncManager:(id)a0 isTransferingAsset:(id)a1 toLibrary:(id)a2 completion:(id /* block */)a3;
- (char)guestAssetSyncManagerShouldCancel:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
