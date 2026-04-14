@class PLAtomicProgressIvar, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    PLAtomicProgressIvar *_progressContainer;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    int _countOfDeferredPhotosProcessed;
    unsigned long long _nextRequestID;
}

+ (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
+ (BOOL)allowWorkerToRunDuringCPLInitialSync;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (BOOL)isInterruptible;
- (id)_nextRequestIdentifier;
- (unsigned long long)type;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)videoConversionClient;
- (id)imageConversionClient;
- (void)stopWorkingOnItem:(id)a0;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (void)_performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)initWithLibraryBundle:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;

@end
