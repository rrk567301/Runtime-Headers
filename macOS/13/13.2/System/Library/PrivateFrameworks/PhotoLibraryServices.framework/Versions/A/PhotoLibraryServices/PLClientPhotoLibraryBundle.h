@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (void)close;
- (void).cxx_destruct;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (id)clientSandboxExtensionCache;
- (void)resetClientSandboxExtensionCache;
- (void)_invalidateClientSandboxExtensionCache;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)newAssetsdClient;
- (id)newChangePublisher;
- (id)newLibraryServicesManager;
- (id)newBoundAssetsdServicesTable;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (BOOL)calculateTotalSizeWithResult:(id /* block */)a0;
- (void)_initClientSandboxExtensionCache;

@end
