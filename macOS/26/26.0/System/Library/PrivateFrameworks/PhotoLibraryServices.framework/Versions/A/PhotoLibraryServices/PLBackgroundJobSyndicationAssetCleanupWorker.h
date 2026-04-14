@interface PLBackgroundJobSyndicationAssetCleanupWorker : PLBackgroundJobWorker

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (unsigned long long)type;
- (void)stopWorkingOnItem:(id)a0;

@end
