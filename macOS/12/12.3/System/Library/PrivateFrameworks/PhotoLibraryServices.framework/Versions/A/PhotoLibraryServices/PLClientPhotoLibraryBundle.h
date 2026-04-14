@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}

- (void)close;
- (void).cxx_destruct;
- (void)setPhotoStreamEnabled:(BOOL)a0;
- (void)resetClientSandboxExtensionCache;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)clientSandboxExtensionCache;
- (id)newAssetsdClient;
- (id)newLibraryServicesManager;
- (id)newBoundAssetsdServicesTable;
- (id)newChangePublisher;
- (void)_invalidateClientSandboxExtensionCache;
- (void)setCloudPhotoLibraryEnabled:(BOOL)a0;
- (void)setSharedAlbumEnabled:(BOOL)a0;
- (void)_initClientSandboxExtensionCache;

@end
