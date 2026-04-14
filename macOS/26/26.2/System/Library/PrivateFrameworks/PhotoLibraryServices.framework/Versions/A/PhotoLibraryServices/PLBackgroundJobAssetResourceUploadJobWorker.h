@class OS_dispatch_queue_serial;

@interface PLBackgroundJobAssetResourceUploadJobWorker : PLBackgroundJobWorker {
    void /* unknown type, empty encoding */ lockedWorkerState;
    void /* unknown type, empty encoding */ lockedUploadState;
    void /* unknown type, empty encoding */ resourceUploader;
    void /* unknown type, empty encoding */ maxNumberOfPendingUploadsDefaultsOverride;
    void /* unknown type, empty encoding */ thresholdToScheduleMoreItemsOverride;
    void /* unknown type, empty encoding */ maxNumberOfPendingUploads;
    void /* unknown type, empty encoding */ thresholdToScheduleMoreItems;
}

@property (nonatomic, readonly) long long minBackgroundFileSizeLimit;
@property (nonatomic, readonly) OS_dispatch_queue_serial *uploadQueue;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)isEnabledForBundle:(id)a0;

- (BOOL)isInterruptible;
- (BOOL)isCanceled;
- (unsigned long long)type;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (id)initWithLibraryBundle:(id)a0 uploader:(id)a1;
- (void)transitionToCanceled;
- (void)transitionToRunningWithRemaining:(long long)a0 coordinatedCompletion:(id /* block */)a1;

@end
