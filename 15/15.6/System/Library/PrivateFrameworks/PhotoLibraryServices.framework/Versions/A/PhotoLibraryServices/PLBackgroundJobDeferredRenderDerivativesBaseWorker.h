@class PAImageConversionServiceClient, NSSet, NSProgress, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

@property (readonly, copy, nonatomic) NSSet *deferredProcessingStatesHandled;

+ (id)_criteriaToUse;
+ (char)allowWorkerToRunDuringCPLInitialSync;
+ (char)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void).cxx_destruct;
- (id)taskIdentifier;
- (char)isInterruptible;
- (id)_predicateToFetchDeferredAssets;
- (id)imageConversionClient;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;
- (id)videoConversionClient;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;

@end
