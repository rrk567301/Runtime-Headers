@interface PLBackgroundJobSyndicationAssetCleanupWorker : PLBackgroundJobWorker

+ (char)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (char)isInterruptible;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
