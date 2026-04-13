@class NSString, PLSyndicationResourcePrefetchManager, PLPhotoLibrary;

@interface PLBackgroundJobSyndicationResourceSanitizationWorker : PLBackgroundJobWorker <PLSyndicationResourcePrefetchManagerDelegate> {
    PLSyndicationResourcePrefetchManager *_prefetchManager;
    PLPhotoLibrary *_currentLibrary;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isNetworkAccessAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)syndicationWorkerPriority;
+ (id)workerWithLibraryBundle:(id)a0;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;
- (id)initWithPriority:(long long)a0 libraryBundle:(id)a1;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)downloadThrottlingDateForPrefetchManager:(id)a0;
- (void)prefetchManager:(id)a0 receivedNewDownloadThrottlingDate:(id)a1 managedObjectContext:(id)a2;
- (void)performTransactionForPrefetchManager:(id)a0 synchronous:(BOOL)a1 block:(id /* block */)a2;
- (id)requestLocalAvailabilityChangeForPrefetchManager:(id)a0 resource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)batchRequestResourcesForPrefetchManager:(id)a0 bundleID:(id)a1 itemIdentifiers:(id)a2 destURLs:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;

@end
