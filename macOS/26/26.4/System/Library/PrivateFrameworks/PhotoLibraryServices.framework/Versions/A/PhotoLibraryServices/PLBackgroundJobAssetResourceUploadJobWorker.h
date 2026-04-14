@class OS_dispatch_queue_serial;

@interface PLBackgroundJobAssetResourceUploadJobWorker : PLBackgroundJobWorker {
    void /* unknown type, empty encoding */ lockedWorkerState;
    void /* unknown type, empty encoding */ lockedUploadState;
    void /* unknown type, empty encoding */ lockedDownloadState;
    void /* unknown type, empty encoding */ resourceUploader;
    void /* unknown type, empty encoding */ maxNumberOfPendingUploadsDefaultsOverride;
    void /* unknown type, empty encoding */ thresholdToScheduleMoreItemsOverride;
    void /* unknown type, empty encoding */ maxNumberOfPendingUploads;
    void /* unknown type, empty encoding */ thresholdToScheduleMoreItems;
}

@property (nonatomic, readonly) OS_dispatch_queue_serial *uploadQueue;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)isEnabledForBundle:(id)a0;

- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (void).cxx_destruct;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (unsigned long long)type;
- (BOOL)isCancelled;
- (void)dealloc;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)initWithLibraryBundle:(id)a0 uploader:(id)a1;
- (void)cancelOperationsFor:(id)a0 configUUID:(id)a1;
- (void)cancelJobFor:(id)a0;
- (void)configurationWillBeDeleted:(id)a0;
- (void)jobWillBeCancelled:(id)a0;
- (void)transitionToCancelled;
- (void)transitionToRunningWithRemaining:(long long)a0 coordinatedCompletion:(id /* block */)a1;

@end
