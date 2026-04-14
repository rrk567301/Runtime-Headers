@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient {
    _Atomic BOOL _isOpen;
    PLAssetsdClientSandboxExtensions *_sandboxExtensions;
}

@property (readonly) BOOL isOpened;

- (void).cxx_destruct;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 error:(id *)a1;
- (BOOL)isLibraryReadyForImportWithError:(id *)a0;
- (BOOL)createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)a0 error:(id *)a1;
- (void)resetFaceAnalysisWithResetLevel:(long long)a0 completionHandler:(id /* block */)a1;
- (void)recoverFromCrashIfNeeded;
- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 completionHandler:(id /* block */)a2;
- (long long)getCurrentModelVersion;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)synchronouslyRepairSingletonObjectsWithError:(id *)a0;
- (id)transferAssetsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 completionHandler:(id /* block */)a3;
- (id)transferPersonsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)launchAssetsd;
- (id)initWithQueue:(id)a0 proxyCreating:(id)a1 proxyGetter:(SEL)a2 sandboxExtensions:(id)a3;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 options:(id)a1 error:(id *)a2;
- (BOOL)synchronouslyImportFileSystemAssetsForce:(BOOL)a0 withError:(id *)a1;
- (id)importFileSystemAssetsForce:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)_assetURIStringsForPhotos:(id)a0;
- (BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 error:(id *)a3;
- (void)pendingEventsForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_consumeSandboxExtensions:(id)a0;

@end
