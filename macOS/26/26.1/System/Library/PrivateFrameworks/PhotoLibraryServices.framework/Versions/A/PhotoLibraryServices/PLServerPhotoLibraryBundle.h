@class NSError, NSString, NSSet, NSURL, NSOperationQueue, PLBackgroundJobService, PLLazyObject;

@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle <PLPhotoLibraryBundleAbstractMethods, NSFilePresenter> {
    Class _libraryServicesDelegateClass;
    PLBackgroundJobService *_backgroundJobService;
    NSOperationQueue *_presentedItemOperationQueue;
    PLLazyObject *_lazyTouchCoalescer;
    NSError *_invalidateClientsReason;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (id)newLibraryServicesManager;
- (BOOL)impl_bindAssetsdService:(id)a0 error:(id *)a1;
- (id)newBoundAssetsdServicesTable;
- (void)impl_setCloudPhotoLibraryEnabled:(BOOL)a0;
- (void)touch;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)boundAssetsdServices;
- (void)shutdownWithReason:(id)a0;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)impl_setPhotoStreamEnabled:(BOOL)a0;
- (id)newChangePublisher;
- (void)invalidateClientConnectionsWithReason:(id)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldRelinquishToWriterOfSubitemAtURL:(id)a0;
- (id)_newTouchCoalescer;
- (void)closeWithReason:(id)a0;
- (void)_touch;
- (BOOL)impl_calculateTotalSizeWithResult:(id /* block */)a0;
- (void)impl_setCloudPhotoLibraryEnabledSync:(BOOL)a0;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;
- (id)newAssetsdClient;
- (void)impl_setSharedAlbumEnabled:(BOOL)a0;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1 backgroundJobService:(id)a2 libraryServicesDelegateClass:(Class)a3;
- (void)clearInvalidateClientsReason;
- (void).cxx_destruct;
- (id)invalidateClientsReason;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)impl_unbindAssetsdService:(id)a0;

@end
