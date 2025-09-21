@interface PLAssetsdLibraryClient : PLAssetsdBaseClient

@property (readonly) char isOpen;

- (char)isLibraryReadyForImportWithError:(id *)a0;
- (char)openApplicationOwnedFoldersWithError:(id *)a0;
- (char)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 error:(id *)a1;
- (char)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)a0 error:(id *)a1;
- (void)recoverFromCrashIfNeeded;
- (void)resetFaceAnalysisWithResetLevel:(long long)a0 completionHandler:(id /* block */)a1;
- (id)resetPersonsWithCompletionHandler:(id /* block */)a0;
- (id)resetSocialGroupsWithCompletionHandler:(id /* block */)a0;
- (void)searchDonationProgressForTaskIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (long long)getCurrentModelVersion;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (void)launchAssetsd;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 completionHandler:(id /* block */)a2;
- (char)synchronouslyRepairSingletonObjectsWithError:(id *)a0;
- (id)transferAssetsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 completionHandler:(id /* block */)a3;
- (id)transferPersonsWithUuids:(id)a0 fromLibraryURL:(id)a1 transferOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateThumbnailsForPhotos:(id)a0 assignNewIndex:(char)a1 forceRefresh:(char)a2 completionHandler:(id /* block */)a3;
- (char)validateOrRebuildPhotoLibraryDatabaseWithError:(id *)a0;
- (id)_assetURIStringsForPhotos:(id)a0;
- (char)_consumeSandboxExtensions:(id)a0;
- (id)importFileSystemAssetsForce:(char)a0 withCompletionHandler:(id /* block */)a1;
- (char)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)a0 options:(id)a1 error:(id *)a2;
- (id)proxyLockFileWithDatabasePath:(id)a0 error:(id *)a1;
- (char)synchronouslyImportFileSystemAssetsForce:(char)a0 withError:(id *)a1;
- (char)synchronouslyUpdateThumbnailsForPhotos:(id)a0 assignNewIndex:(char)a1 forceRefresh:(char)a2 error:(id *)a3;

@end
