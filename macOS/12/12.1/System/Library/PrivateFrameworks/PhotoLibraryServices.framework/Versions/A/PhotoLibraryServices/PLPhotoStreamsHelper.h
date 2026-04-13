@interface PLPhotoStreamsHelper : NSObject {
    BOOL _appHasPolledOnceThisForegroundSession;
}

+ (id)sharedPhotoStreamsHelper;
+ (BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)a0;
+ (BOOL)photoStreamsEnabledForPhotoLibraryBundle:(id)a0;
+ (void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)a0 withReason:(id)a1 jobStreamID:(id)a2 completion:(id /* block */)a3;
+ (id)iCloudServiceAccount;
+ (BOOL)_photoStreamsEnabled;
+ (BOOL)writeBreadcrumbContent:(id)a0 forHashString:(id)a1;

- (void)dealloc;
- (id)init;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)enqueueAssetForPSPublishing:(id)a0 fullPath:(id)a1 fileSize:(id)a2 reenqueueCount:(unsigned long long)a3 publicGlobalUUID:(id *)a4;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)a0 forStreamID:(id)a1;
- (void)initiateDeletionOfOriginalAssets:(id)a0;
- (void)initiateDeletionOfPhotoStreamAssets:(id)a0;
- (id)photoStreamsPublishStreamID;
- (void)clearCachedAccountState;
- (void)pollForNewSubscriptionContent;
- (void)savePhotoStreamMetadata:(id)a0 forAsset:(id)a1;
- (void)_clearPhotoStreamAccountSettings;
- (void)_appDidEnterBackground:(id)a0;
- (id)psHashForData:(id)a0;
- (id)psHashAsString:(id)a0;
- (id)lastPhotoStreamUpdateDate;
- (BOOL)removeBreadcrumbsForHashString:(id)a0;
- (void)writeWillEnqueueBreadcrumbForHash:(id)a0 imagePath:(id)a1;
- (void)writeDidEnqueueBreadcrumbForHash:(id)a0 imagePath:(id)a1;
- (void)writeDidPublishBreadcrumbforHash:(id)a0 imagePath:(id)a1;
- (BOOL)isValidUploadAsset:(id)a0 type:(id)a1 fileSize:(id)a2;
- (BOOL)dequeueAssetsForPSPublishing:(id)a0;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (BOOL)shouldPublishScreenShots;
- (long long)_serverIntegerLimitForKey:(id)a0 debugDefaultKey:(id)a1;
- (id)imageLimitsByAssetType;
- (long long)maxPixelSizeForDerivative;
- (long long)imageLimitForOwnStream;
- (long long)imageLimitForFriendStream;
- (long long)friendsLimit;
- (id)temporaryPathForConvertedAssetWithUUID:(id)a0;
- (id)temporaryPathForRecentlyUploadedAsset:(id)a0;
- (struct CGSize { double x0; double x1; })derivedAssetSizeForMasterSizeWidth:(double)a0 height:(double)a1;
- (id)derivedAssetForMasterAsset:(id)a0;
- (id)pathToSavedMetadataForAssetHash:(id)a0 streamID:(id)a1 createIntermediateDirs:(BOOL)a2;
- (void)resetServerState;
- (id)pause_mstreamd;
- (void)resume_mstreamd:(id)a0;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)a0 withBlock:(id /* block */)a1;
- (void)fetchMPSStateWithLibrary:(id)a0 completion:(id /* block */)a1;
- (void)handleMPSStateIfNecessaryInLibrary:(id)a0;

@end
