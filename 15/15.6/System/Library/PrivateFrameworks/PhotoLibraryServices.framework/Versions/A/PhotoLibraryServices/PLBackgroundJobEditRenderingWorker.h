@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    NSProgress *_progressForCurrentAsset;
}

+ (char)allowWorkerToRunDuringCPLInitialSync;
+ (char)shouldUseExpectedDurationCriteria;
+ (char)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)workerWithLibrary:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isInterruptible;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
