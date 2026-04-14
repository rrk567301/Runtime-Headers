@class _TtC20PhotoLibraryServicesP33_2DE4C2D424602B332AD1EC13D22223E836BackgroundAssetResourceUploadManager;

@interface PLBackgroundJobAssetResourceUploadJobWorker : PLBackgroundJobWorker

@property (nonatomic, retain) _TtC20PhotoLibraryServicesP33_2DE4C2D424602B332AD1EC13D22223E836BackgroundAssetResourceUploadManager *resourceUploader;
@property (nonatomic, readonly) long long maxNumberOfPendingUploads;
@property (nonatomic, readonly) long long thresholdToScheduleMoreItems;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (void)registerForNoOpURLSessionLaunchEvents;
+ (void)registerForURLSessionLaunchEvents;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (unsigned long long)type;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;

@end
