@class CPLFingerprintScheme, NSObject;
@protocol NSCopying;

@interface PLBackgroundJobStableHashWorker : PLBackgroundJobWorker {
    CPLFingerprintScheme *_lock_FingerprintScheme;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) NSObject<NSCopying> *cancelledWorkItem;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (unsigned long long)type;
- (BOOL)_isInitialEntireLibraryWorkItem:(id)a0;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (void)_resetCancelledWorkItem;
- (BOOL)_checkItems:(id)a0 forType:(short)a1 library:(id)a2;
- (id)_backgroundJobWorkItemsFromObjectIDs:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)_isJobCancelled;
- (void).cxx_destruct;
- (BOOL)_processOnItem:(id)a0 inLibrary:(id)a1 error:(id *)a2;
- (id)_fetchNextBatchFromEntireInLibrary:(id)a0 error:(id *)a1;
- (id)_fingerPrintScheme;
- (BOOL)_generateStableHashesForAssetUUIDs:(id)a0 isEntireLibraryMode:(BOOL)a1 workItemIdentifiersToRemove:(id)a2 library:(id)a3 error:(id *)a4;
- (BOOL)_hasProcessedEntireLibrary:(id)a0;
- (void)_processStableHashesOnResourcesForAsset:(id)a0;
- (void)_setProcessedEntireLibrary:(id)a0;

@end
