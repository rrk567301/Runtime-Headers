@class PLAtomicProgressIvar, NSSet, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    PLAtomicProgressIvar *_progressContainer;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

@property (readonly, copy, nonatomic) NSSet *deferredProcessingStatesHandled;

+ (id)_criteriaToUse;
+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (id)imageConversionClient;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)isInterruptible;
- (id)taskIdentifier;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (id)_predicateToFetchDeferredAssets;
- (void).cxx_destruct;
- (id)videoConversionClient;

@end
