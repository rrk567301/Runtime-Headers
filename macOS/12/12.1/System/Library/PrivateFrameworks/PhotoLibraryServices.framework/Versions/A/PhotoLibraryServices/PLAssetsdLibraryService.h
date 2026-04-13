@class PLPhotoLibraryBundleController, NSString, PLAssetsdService, PLAssetsdConnectionAuthorization, PLXPCPhotoLibraryStoreContainer, NSMutableArray;

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol> {
    PLXPCPhotoLibraryStoreContainer *_xpcPhotoLibraryStoreContainer;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSMutableArray *_preRunningProgressFollowers;
    NSMutableArray *_postRunningProgressFollowers;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLAssetsdService *_assetsdService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)requiredLibraryServicesStateForURL:(id)a0;

- (void).cxx_destruct;
- (id)libraryBundle;
- (void)recoverFromCrashIfNeeded;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 reply:(id /* block */)a2;
- (void)launchAssetsd;
- (id)_preRunningProgress;
- (id)_postRunningProgress;
- (id)initWithLibraryServicesManager:(id)a0 bundleController:(id)a1 connectionAuthorization:(id)a2 assetsdService:(id)a3;
- (void)getCurrentModelVersionWithReply:(id /* block */)a0;
- (void)isLibraryReadyForImportWithReply:(id /* block */)a0;
- (void)createPhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)openPhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (id)postOpenProgressWithReply:(id /* block */)a0;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(id /* block */)a0;
- (id)importFileSystemAssetsWithReason:(id)a0 force:(BOOL)a1 reply:(id /* block */)a2;
- (void)repairSingletonObjectsWithReply:(id /* block */)a0;
- (void)resetFaceAnalysisWithResetLevel:(long long)a0 withReply:(id /* block */)a1;
- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 reply:(id /* block */)a3;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (void)pendingEventsForRequest:(id)a0 reply:(id /* block */)a1;
- (id)copyAssetsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 reply:(id /* block */)a3;
- (id)newLibraryOpener;
- (id)sandboxExtensionsByPath;
- (id)_returnValueForProgress:(id)a0 addTo:(id)a1;
- (void)_sendClientReply:(id /* block */)a0 sandboxExtensionsByPath:(id)a1 error:(id)a2;

@end
