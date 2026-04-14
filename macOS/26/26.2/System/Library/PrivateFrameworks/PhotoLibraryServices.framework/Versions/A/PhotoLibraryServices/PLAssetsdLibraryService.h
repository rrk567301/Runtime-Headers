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

- (void)searchDonationProgressForTaskIDs:(id)a0 reply:(id /* block */)a1;
- (id)_postRunningProgress;
- (id)_preRunningProgress;
- (id)importFileSystemAssetsWithReason:(id)a0 force:(BOOL)a1 reply:(id /* block */)a2;
- (id)libraryBundle;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (id)resetSocialGroupsWithReply:(id /* block */)a0;
- (id)postOpenProgressWithReply:(id /* block */)a0;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(id /* block */)a0;
- (void)recoverFromCrashIfNeeded;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (void)proxyLockFileWithDatabasePath:(id)a0 reply:(id /* block */)a1;
- (void)getCurrentModelVersionWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (id)newLibraryOpener;
- (id)resetPersonsWithReply:(id /* block */)a0;
- (void)openApplicationOwnedFoldersWithReply:(id /* block */)a0;
- (id)initWithLibraryServicesManager:(id)a0 bundleController:(id)a1 connectionAuthorization:(id)a2 assetsdService:(id)a3;
- (void)isLibraryReadyForImportWithReply:(id /* block */)a0;
- (id)transferAssetsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 reply:(id /* block */)a3;
- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 reply:(id /* block */)a3;
- (id)_returnValueForProgress:(id)a0 addTo:(id)a1;
- (id)transferPersonsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 reply:(id /* block */)a3;
- (void)_sendClientReply:(id /* block */)a0 sandboxExtensionsByPath:(id)a1 error:(id)a2;
- (id)sandboxExtensionsByPathForLibraryAccessRole:(long long)a0;
- (void)validateOrRebuildPhotoLibraryDatabaseWithReply:(id /* block */)a0;
- (void)launchAssetsd;
- (void)openPhotoLibraryDatabaseWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (void)repairSingletonObjectsWithReply:(id /* block */)a0;

@end
