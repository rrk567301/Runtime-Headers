@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (void).cxx_destruct;
- (void)close;
- (void)_initClientSandboxExtensionCache;
- (void)_invalidateClientSandboxExtensionCache;
- (BOOL)calculateTotalSizeWithResult:(id /* block */)a0;
- (id)clientSandboxExtensionCache;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (id)newAssetsdClient;
- (id)newBoundAssetsdServicesTable;
- (id)newChangePublisher;
- (id)newLibraryServicesManager;
- (void)resetClientSandboxExtensionCache;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
