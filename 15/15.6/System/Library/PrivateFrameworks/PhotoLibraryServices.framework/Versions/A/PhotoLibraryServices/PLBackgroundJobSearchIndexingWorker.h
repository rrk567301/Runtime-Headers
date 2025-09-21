@class NSProgress, PLPhotoLibrary;

@interface PLBackgroundJobSearchIndexingWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLPhotoLibrary *_lock_library;
    NSProgress *_lock_incrementalUpdateProgress;
}

+ (id)_criteriaToUse;
+ (char)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void).cxx_destruct;
- (char)isInterruptible;
- (id)initWithLibraryBundle:(id)a0;
- (char)_isErrorCausedByLocaleChange:(id)a0 maxDepth:(unsigned long long)a1;
- (short)_jobType;
- (void)_performWorkOnItem:(id)a0 completion:(id /* block */)a1;
- (char)_supportsIndexRebuild;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
