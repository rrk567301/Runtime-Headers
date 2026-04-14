@class NSString, PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle <PLPhotoLibraryBundleAbstractMethods> {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateClientSandboxExtensionCache;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (void)impl_setCloudPhotoLibraryEnabledSync:(BOOL)a0;
- (id)clientSandboxExtensionCache;
- (void)resetClientSandboxExtensionCache;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)closeWithReason:(id)a0;
- (BOOL)impl_calculateTotalSizeWithResult:(id /* block */)a0;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)newAssetsdClient;
- (void)impl_setPhotoStreamEnabled:(BOOL)a0;
- (id)newChangePublisher;
- (void)_initClientSandboxExtensionCache;
- (void)_handleLibraryBecameUnavailable:(id)a0 reason:(id)a1;
- (BOOL)impl_bindAssetsdService:(id)a0 error:(id *)a1;
- (id)newLibraryServicesManager;
- (void).cxx_destruct;
- (void)impl_setCloudPhotoLibraryEnabled:(BOOL)a0;
- (void)impl_unbindAssetsdService:(id)a0;
- (void)_setCloudPhotoLibraryEnabled:(BOOL)a0 sync:(BOOL)a1;
- (id)newBoundAssetsdServicesTable;
- (void)impl_setSharedAlbumEnabled:(BOOL)a0;

@end
