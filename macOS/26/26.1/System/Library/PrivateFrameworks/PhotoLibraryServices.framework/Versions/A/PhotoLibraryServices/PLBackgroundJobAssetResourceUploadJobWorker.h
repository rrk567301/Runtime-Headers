@interface PLBackgroundJobAssetResourceUploadJobWorker : PLBackgroundJobWorker {
    void /* unknown type, empty encoding */ lockedState;
    void /* unknown type, empty encoding */ resourceUploader;
    void /* unknown type, empty encoding */ maxNumberOfPendingUploadsDefaultsOverride;
    void /* unknown type, empty encoding */ thresholdToScheduleMoreItemsOverride;
    void /* unknown type, empty encoding */ maxNumberOfPendingUploads;
    void /* unknown type, empty encoding */ thresholdToScheduleMoreItems;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)isEnabledForBundle:(id)a0;

- (unsigned long long)type;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (BOOL)isInterruptible;
- (void)stopWorkingOnItem:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (void)cancelProgress:(id)a0;
- (id)initWithLibraryBundle:(id)a0 uploader:(id)a1;
- (void)transitionToCanceled;
- (BOOL)updateRunningProgress:(id)a0;
- (BOOL)verifyWorkerIsRunningWithNoProgressAndReturnError:(id *)a0;

@end
