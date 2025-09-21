@class NSString, NSDictionary, MSASAssetCollection, NSArray, AssetCollectionInfo, NSMutableArray;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob {
    char _replacingOriginalWithDerivative;
    AssetCollectionInfo *_currentAssetCollectionInfo;
    NSMutableArray *_pendingDownloadNotifications;
}

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;
@property (retain, nonatomic) NSString *currentFilePath;
@property (retain, nonatomic) NSString *currentCloudAssetGUID;
@property (nonatomic) unsigned long long currentCloudAssetMediaAssetType;
@property (retain, nonatomic) NSString *cloudAlbumGUID;
@property (retain, nonatomic) NSString *cloudPersonID;
@property (retain, nonatomic) MSASAssetCollection *currentCloudAssetCollection;
@property (retain, nonatomic) NSArray *assetCollectionInfos;
@property (nonatomic) char isVideo;
@property (nonatomic) char isPhotoIris;
@property (retain, nonatomic) NSArray *cloudAssetGUIDsToDelete;

+ (char)_lightweightReimportCacheDirectoryExists;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)a0 cloudPersonID:(id)a1;
+ (void)assetsdProcessMetadataForAssetCollections:(id)a0 inAlbum:(id)a1 personID:(id)a2 info:(id)a3 libraryServicesManager:(id)a4;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)a0 info:(id)a1;
+ (void)downloadPendingAssetsForPersonID:(id)a0 info:(id)a1;
+ (id)newCloudSharedAssetSaveJobFromAProcessThatIsNotAssetsd;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)a0 cloudAlbumGUID:(id)a1 pathManager:(id)a2 fileExtension:(id)a3 assetUUID:(id)a4;
+ (id)pathForInFlightAssetCollectionWithGUID:(id)a0 mediaAssetType:(unsigned long long)a1;
+ (void)processMetadataForAssetCollections:(id)a0 inAlbum:(id)a1 personID:(id)a2 info:(id)a3;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)a0 inAlbum:(id)a1 personID:(id)a2;
+ (void)saveCloudSharedAssetAtPath:(id)a0 forAssetCollection:(id)a1 mediaAssetType:(unsigned long long)a2 albumGUID:(id)a3 personID:(id)a4 info:(id)a5 shouldPrioritize:(char)a6;

- (void)dealloc;
- (id)description;
- (void)run;
- (void).cxx_destruct;
- (id)initWithAssetsdClient:(id)a0;
- (void)_performSaveTransactionAndWaitOnLibrary:(id)a0 transaction:(id /* block */)a1 completion:(id /* block */)a2;
- (long long)daemonOperation;
- (void)_addDownloadNotification:(id)a0;
- (id)_createPlaceHolderInSharedAlbum:(id)a0;
- (void)_incrementDerivativesCount:(long long)a0 thumbnailsCount:(long long)a1;
- (unsigned long long)_insertionIndexForAsset:(id)a0 inAlbum:(id)a1;
- (void)_prefetchLimitForDerivatives:(long long *)a0 thumbnails:(long long *)a1;
- (void)_processInFlightCommentsForAsset:(id)a0 inAlbum:(id)a1 inPhotoLibrary:(id)a2;
- (char)_processInflightAsset:(id)a0 mediaAssetType:(unsigned long long)a1;
- (char)_processSaveAssetWithPlaceholderKind:(short)a0 inLibrary:(id)a1 withAssetDataFilePath:(id)a2;
- (void)_updateAsset:(id)a0 withImageFileURL:(id)a1;
- (void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)a0 inManagedObjectContext:(id)a1;
- (short)attemptLightweightReimportAssetDataInLibrary:(id)a0;
- (void)encodeToXPCObject:(id)a0;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationSaveAssetJobType;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (char)isProcessingThumbnail;
- (short)placeHolderKindFromAssetMetadataType:(unsigned long long)a0;
- (void)runDaemonSide;
- (void)setupSaveAssetMetadataForCollectionsJobForAssetCollections:(id)a0 album:(id)a1 personID:(id)a2 info:(id)a3;

@end
