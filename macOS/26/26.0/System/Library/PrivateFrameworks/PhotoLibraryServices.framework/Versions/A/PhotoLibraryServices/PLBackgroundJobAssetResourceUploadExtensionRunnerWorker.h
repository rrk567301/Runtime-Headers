@class NSString, PLPhotoLibrary, NSError, OS_dispatch_queue;

@interface PLBackgroundJobAssetResourceUploadExtensionRunnerWorker : PLBackgroundJobWorker

@property (nonatomic, readonly) OS_dispatch_queue *queue;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (unsigned long long)type;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (id)enabledJobConfigurationRequest;
- (id)fetchEnabledJobConfigurationsIn:(id)a0;
- (void)markCompletedFor:(id)a0 in:(id)a1;
- (void)processWithIdentifier:(NSString *)a0 in:(PLPhotoLibrary *)a1 completion:(void (^)(NSError *))a2 completionHandler:(void (^)(void))a3;
- (BOOL)processingIsValidFor:(id)a0 workItemIdentifiers:(id)a1;
- (void)removeWorkItemFor:(id)a0 in:(id)a1;
- (void)updateConfigurationDateFor:(id)a0 in:(id)a1;
- (id)workItemIdentifiersIn:(id)a0;

@end
