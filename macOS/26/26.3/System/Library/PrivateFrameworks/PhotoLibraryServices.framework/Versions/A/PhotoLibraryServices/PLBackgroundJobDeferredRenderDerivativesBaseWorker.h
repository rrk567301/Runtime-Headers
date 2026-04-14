@class PLAtomicProgressIvar, NSSet, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    PLAtomicProgressIvar *_progressContainer;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

@property (readonly, copy, nonatomic) NSSet *deferredProcessingStatesHandled;

+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (id)_criteriaToUse;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (id)taskIdentifier;
- (BOOL)isInterruptible;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (void)stopWorkingOnItem:(id)a0;
- (id)_predicateToFetchDeferredAssets;

@end
