@class NSString, PLPhotoLibrary, PLSyndicationResourcePrefetchEngine;

@interface PLBackgroundJobSyndicationResourceSanitizationWorker : PLBackgroundJobWorker <PLSyndicationResourcePrefetchEngineDelegate> {
    PLSyndicationResourcePrefetchEngine *_prefetchManager;
    PLPhotoLibrary *_currentLibrary;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isNetworkAccessAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syndicationWorkerCriteria;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (id)initWithLibraryBundle:(id)a0;
- (unsigned long long)batchSize;
- (unsigned long long)type;
- (void)performTransactionForPrefetchManager:(id)a0 synchronous:(BOOL)a1 block:(id /* block */)a2;
- (id)downloadThrottlingDateForPrefetchManager:(id)a0;
- (id)requestLocalAvailabilityChangeForPrefetchManager:(id)a0 resource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;
- (id)signalAgainDateWithLibrary:(id)a0;
- (void).cxx_destruct;
- (void)batchRequestResourcesForPrefetchManager:(id)a0 itemIdentifiersWithBundleIDs:(id)a1 destURLs:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)prefetchManager:(id)a0 receivedNewDownloadThrottlingDate:(id)a1 managedObjectContext:(id)a2;

@end
