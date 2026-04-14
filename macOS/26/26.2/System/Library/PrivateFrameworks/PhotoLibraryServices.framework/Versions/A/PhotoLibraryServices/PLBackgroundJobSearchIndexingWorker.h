@class PLAtomicProgressIvar, PLPhotoLibrary;

@interface PLBackgroundJobSearchIndexingWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLPhotoLibrary *_lock_library;
    PLAtomicProgressIvar *_progressContainer;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)_criteriaToUse;

- (BOOL)isInterruptible;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (BOOL)_isErrorCausedByLocaleChange:(id)a0 maxDepth:(unsigned long long)a1;
- (short)_jobType;
- (void)_performWorkOnItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)_supportsIndexRebuild;

@end
