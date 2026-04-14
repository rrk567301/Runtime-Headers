@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (id)workerWithLibraryBundle:(id)a0;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (void)workerWillStartWorkingOnItemsInLibrary:(id)a0;
+ (void)workerDidFinishWorkingOnItemsInLibrary:(id)a0;

- (void).cxx_destruct;
- (BOOL)isInterruptible;
- (id)initWithPriority:(long long)a0 libraryBundle:(id)a1;
- (id)_predicateToFetchResourcesAwaitingProcessing;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)stopWorkingOnItem:(id)a0;

@end
