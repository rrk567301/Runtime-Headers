@interface PLAssetsdLibraryClient : PLAssetsdBaseClient

@property (readonly) BOOL isOpen;

- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_assetURIStringsForPhotos:(id)a0;
- (BOOL)validateOrRebuildPhotoLibraryDatabaseWithError:(id *)a0;
- (id)resetPersonsWithCompletionHandler:(id /* block */)a0;
- (BOOL)isLibraryReadyForImportWithError:(id *)a0;
- (BOOL)_consumeSandboxExtensions:(id)a0;
- (BOOL)synchronouslyRepairSingletonObjectsWithError:(id *)a0;
- (BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)a0 error:(id *)a1;
- (BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 error:(id *)a3;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)transferPersonsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)searchDonationProgressForTaskIDs:(id)a0 completionHandler:(id /* block */)a1;
- (long long)getCurrentModelVersion;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (void)recoverFromCrashIfNeeded;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 options:(id)a1 error:(id *)a2;
- (id)importFileSystemAssetsForce:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)launchAssetsd;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 error:(id *)a1;
- (id)transferAssetsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 completionHandler:(id /* block */)a3;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (id)resetSocialGroupsWithCompletionHandler:(id /* block */)a0;
- (id)proxyLockFileWithDatabasePath:(id)a0 error:(id *)a1;
- (BOOL)synchronouslyImportFileSystemAssetsForce:(BOOL)a0 withError:(id *)a1;
- (BOOL)openApplicationOwnedFoldersWithError:(id *)a0;

@end
