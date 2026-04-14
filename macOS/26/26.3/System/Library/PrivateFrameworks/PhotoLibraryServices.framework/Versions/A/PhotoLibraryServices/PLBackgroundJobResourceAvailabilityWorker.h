@class PLAtomicProgressIvar, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    PLAtomicProgressIvar *_progressContainer;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    int _countOfDeferredPhotosProcessed;
    unsigned long long _nextRequestID;
}

+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;

- (BOOL)isInterruptible;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (id)initWithLibraryBundle:(id)a0;
- (unsigned long long)type;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (void)_performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_nextRequestIdentifier;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (void)stopWorkingOnItem:(id)a0;

@end
