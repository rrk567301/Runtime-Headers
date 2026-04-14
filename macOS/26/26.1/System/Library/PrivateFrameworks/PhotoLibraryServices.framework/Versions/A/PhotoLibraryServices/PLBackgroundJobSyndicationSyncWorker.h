@class PLDatabaseContext, PLSyndicationSyncServiceWrapper, PLPhotoLibrary;

@interface PLBackgroundJobSyndicationSyncWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLSyndicationSyncServiceWrapper *_lock_syncManager;
    PLPhotoLibrary *_lock_photoLibrary;
    PLDatabaseContext *_databaseContext;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (unsigned long long)type;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (BOOL)isInterruptible;
- (void)stopWorkingOnItem:(id)a0;
- (id)photoLibraryWithDatabaseContext:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)initWithLibraryBundle:(id)a0;
- (id)_syncManagerWithPhotoLibrary:(id)a0;
- (void)_releaseSyncManager;
- (void).cxx_destruct;

@end
