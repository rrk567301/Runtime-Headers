@class PLAtomicProgressIvar, PLPhotoLibrary;

@interface PLBackgroundJobSearchIndexingWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLPhotoLibrary *_lock_library;
    PLAtomicProgressIvar *_progressContainer;
}

+ (id)_criteriaToUse;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isErrorCausedByLocaleChange:(id)a0 maxDepth:(unsigned long long)a1;
- (short)_jobType;
- (void)_performWorkOnItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)_supportsIndexRebuild;

@end
