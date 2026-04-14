@class PLAtomicProgressIvar, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {
    PLAtomicProgressIvar *_progressContainer;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
    int _countOfDeferredPhotosProcessed;
    unsigned long long _nextRequestID;
}

+ (BOOL)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)allowWorkerToRunDuringCPLInitialSync;

- (BOOL)isInterruptible;
- (void)workerDidFinishWithDatabaseContext:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (id)imageConversionClient;
- (void).cxx_destruct;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (unsigned long long)type;
- (void)_performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)videoConversionClient;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)_nextRequestIdentifier;

@end
