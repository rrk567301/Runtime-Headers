@class PLDatabaseContext, PLSyndicationSyncServiceWrapper, PLPhotoLibrary;

@interface PLBackgroundJobSyndicationSyncWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLSyndicationSyncServiceWrapper *_lock_syncManager;
    PLPhotoLibrary *_lock_photoLibrary;
    PLDatabaseContext *_databaseContext;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (BOOL)isInterruptible;
- (void)_releaseSyncManager;
- (id)photoLibraryWithDatabaseContext:(id)a0;
- (unsigned long long)type;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_syncManagerWithPhotoLibrary:(id)a0;
- (void)stopWorkingOnItem:(id)a0;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;

@end
