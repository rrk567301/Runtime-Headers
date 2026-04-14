@class PLAtomicProgressIvar, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    PLAtomicProgressIvar *_progressContainer;
}

+ (BOOL)shouldUseExpectedDurationCriteria;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (id)workerWithLibrary:(id)a0;

- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (void).cxx_destruct;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (void)dealloc;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;

@end
