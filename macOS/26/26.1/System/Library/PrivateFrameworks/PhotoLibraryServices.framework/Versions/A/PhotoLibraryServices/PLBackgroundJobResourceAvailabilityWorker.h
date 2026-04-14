@class PLAtomicProgressIvar, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    PLAtomicProgressIvar *_progressContainer;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    int _countOfDeferredPhotosProcessed;
    unsigned long long _nextRequestID;
}

+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (unsigned long long)type;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (BOOL)isInterruptible;
- (void)stopWorkingOnItem:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)_performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)initWithLibraryBundle:(id)a0;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (void).cxx_destruct;
- (id)_nextRequestIdentifier;

@end
