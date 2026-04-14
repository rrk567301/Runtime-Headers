@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)_criteriaToUse;

- (void).cxx_destruct;
- (BOOL)isInterruptible;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)_predicateToFetchDeferredAssets;

@end
