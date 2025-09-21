@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (void).cxx_destruct;
- (void)close;
- (void)_handleLibraryBecameUnavailable:(id)a0 reason:(id)a1;
- (id)newAssetsdClient;
- (void)_initClientSandboxExtensionCache;
- (void)_invalidateClientSandboxExtensionCache;
- (void)_setCloudPhotoLibraryEnabled:(char)a0 sync:(char)a1;
- (char)calculateTotalSizeWithResult:(id /* block */)a0;
- (id)clientSandboxExtensionCache;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (id)newBoundAssetsdServicesTable;
- (id)newChangePublisher;
- (id)newLibraryServicesManager;
- (void)resetClientSandboxExtensionCache;
- (void)setCloudPhotoLibraryEnabled:(char)a0;
- (void)setCloudPhotoLibraryEnabledSync:(char)a0;
- (void)setPhotoStreamEnabled:(char)a0;
- (void)setSharedAlbumEnabled:(char)a0;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
