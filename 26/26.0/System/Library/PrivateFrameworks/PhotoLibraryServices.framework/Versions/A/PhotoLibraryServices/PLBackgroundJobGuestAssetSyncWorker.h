@class NSString, PLGuestAssetSyncEngine;

@interface PLBackgroundJobGuestAssetSyncWorker : PLBackgroundJobWorker <PLGuestAssetSyncEngineDelegate> {
    PLGuestAssetSyncEngine *_manager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_isPerformingInitialSync;
    BOOL _lock_isCancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)usesMultipleLibrariesConcurrently;
+ (BOOL)_needsInitialSyncForSourceLibrary:(id)a0 targetLibrary:(id)a1;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (unsigned long long)type;
- (void)stopWorkingOnItem:(id)a0;
- (BOOL)_safeIsCancelled;
- (void)guestAssetSyncManager:(id)a0 isTransferingAsset:(id)a1 toLibrary:(id)a2 completion:(id /* block */)a3;
- (BOOL)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (void)_updateLastGuestAssetSyncTargetLibraryURLInSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (BOOL)_deleteAllGuestAssetsInPhotoLibrary:(id)a0 reason:(id)a1 error:(id *)a2;
- (id)initWithLibraryBundle:(id)a0;
- (BOOL)guestAssetSyncManagerShouldCancel:(id)a0;
- (void)_performWorkOnItem:(id)a0 inSystemPhotoLibrary:(id)a1 completion:(id /* block */)a2;
- (id)_sourcePhotoLibraryWithName:(const char *)a0;
- (BOOL)_resetSyndicationProcessingInSourceLibrary:(id)a0 error:(id *)a1;
- (id)_lastGuestAssetSyncTargetLibraryURLFromSourceLibrary:(id)a0 targetLibrary:(id)a1;
- (BOOL)_checkSyndicationPreferencesEnabledAndCleanupGuestAssetsIfNeededWithPhotoLibrary:(id)a0;
- (BOOL)_batchResetSyndicationProcessingInManagedObjectContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_batchResetGuestSavedAssetTypeInManagedObjectContext:(id)a0 error:(id *)a1;

@end
