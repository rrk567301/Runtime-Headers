@class CPLFingerprintScheme;

@interface PLBackgroundJobStableHashWorker : PLBackgroundJobWorker {
    CPLFingerprintScheme *_lock_FingerprintScheme;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _canceled_lock_isCanceled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canceled_lock;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (BOOL)isInterruptible;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (BOOL)_checkItems:(id)a0 forType:(short)a1 library:(id)a2;
- (id)initWithLibraryBundle:(id)a0;
- (unsigned long long)type;
- (BOOL)_isInitialEntireLibraryWorkItem:(id)a0;
- (id)_backgroundJobWorkItemsFromObjectIDs:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)_isJobCancelled;
- (void)stopWorkingOnItem:(id)a0;
- (BOOL)_processOnItem:(id)a0 inLibrary:(id)a1 error:(id *)a2;
- (id)_fetchNextBatchFromEntireInLibrary:(id)a0 error:(id *)a1;
- (id)_fingerPrintScheme;
- (BOOL)_generateStableHashesForAssetUUIDs:(id)a0 isEntireLibraryMode:(BOOL)a1 workItemIdentifiersToRemove:(id)a2 library:(id)a3 error:(id *)a4;
- (BOOL)_hasProcessedEntireLibrary:(id)a0;
- (void)_processStableHashesOnResourcesForAsset:(id)a0;
- (void)_setProcessedEntireLibrary:(id)a0;

@end
