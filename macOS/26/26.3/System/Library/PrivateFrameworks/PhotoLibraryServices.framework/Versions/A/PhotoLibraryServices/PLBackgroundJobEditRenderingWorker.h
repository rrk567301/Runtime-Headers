@class PLAtomicProgressIvar, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    PLAtomicProgressIvar *_progressContainer;
}

+ (BOOL)shouldUseExpectedDurationCriteria;
+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)workerWithLibrary:(id)a0;

- (BOOL)isInterruptible;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (void)stopWorkingOnItem:(id)a0;

@end
