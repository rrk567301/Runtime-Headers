@interface PLAssetsdLibraryClient : PLAssetsdBaseClient

@property (readonly) BOOL isOpen;

- (BOOL)synchronouslyImportFileSystemAssetsForce:(BOOL)a0 withError:(id *)a1;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_assetURIStringsForPhotos:(id)a0;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)resetSocialGroupsWithCompletionHandler:(id /* block */)a0;
- (id)importFileSystemAssetsForce:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)synchronouslyRepairSingletonObjectsWithError:(id *)a0;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 completionHandler:(id /* block */)a2;
- (id)transferPersonsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)searchDonationProgressForTaskIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)resetPersonsWithCompletionHandler:(id /* block */)a0;
- (BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)a0 error:(id *)a1;
- (id)transferAssetsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)validateOrRebuildPhotoLibraryDatabaseWithError:(id *)a0;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 options:(id)a1 error:(id *)a2;
- (long long)getCurrentModelVersion;
- (BOOL)_consumeSandboxExtensions:(id)a0;
- (void)launchAssetsd;
- (id)proxyLockFileWithDatabasePath:(id)a0 error:(id *)a1;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (void)recoverFromCrashIfNeeded;
- (BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)a0 assignNewIndex:(BOOL)a1 forceRefresh:(BOOL)a2 error:(id *)a3;
- (BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 error:(id *)a1;
- (BOOL)openApplicationOwnedFoldersWithError:(id *)a0;
- (BOOL)isLibraryReadyForImportWithError:(id *)a0;

@end
