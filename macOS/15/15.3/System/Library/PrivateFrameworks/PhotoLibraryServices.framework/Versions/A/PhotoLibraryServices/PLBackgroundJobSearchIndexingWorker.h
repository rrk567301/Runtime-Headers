@class NSProgress, PLPhotoLibrary;

@interface PLBackgroundJobSearchIndexingWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLPhotoLibrary *_lock_library;
    NSProgress *_lock_incrementalUpdateProgress;
}

+ (id)_criteriaToUse;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void).cxx_destruct;
- (BOOL)isInterruptible;
- (short)_jobType;
- (id)initWithLibraryBundle:(id)a0;
- (void)_performWorkOnItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)_supportsIndexRebuild;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
