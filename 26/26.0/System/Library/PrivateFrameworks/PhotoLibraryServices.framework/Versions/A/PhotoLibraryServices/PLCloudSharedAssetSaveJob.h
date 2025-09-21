@class NSString, NSDictionary, MSASAssetCollection, NSArray, AssetCollectionInfo, NSMutableArray;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob {
    BOOL _replacingOriginalWithDerivative;
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
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isPhotoIris;
@property (retain, nonatomic) NSArray *cloudAssetGUIDsToDelete;

+ (BOOL)_lightweightReimportCacheDirectoryExists;
+ (id)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(id)a0 cloudPersonID:(id)a1;
+ (void)assetsdProcessMetadataForAssetCollections:(id)a0 inAlbum:(id)a1 personID:(id)a2 info:(id)a3 libraryServicesManager:(id)a4;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)a0 info:(id)a1;
+ (void)downloadPendingAssetsForPersonID:(id)a0 info:(id)a1;
+ (id)newCloudSharedAssetSaveJobFromAProcessThatIsNotAssetsd;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)a0 cloudAlbumGUID:(id)a1 pathManager:(id)a2 fileExtension:(id)a3 assetUUID:(id)a4;
+ (id)pathForInFlightAssetCollectionWithGUID:(id)a0 mediaAssetType:(unsigned long long)a1;
+ (void)processMetadataForAssetCollections:(id)a0 inAlbum:(id)a1 personID:(id)a2 info:(id)a3;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)a0 inAlbum:(id)a1 personID:(id)a2;
+ (void)saveCloudSharedAssetAtPath:(id)a0 forAssetCollection:(id)a1 mediaAssetType:(unsigned long long)a2 albumGUID:(id)a3 personID:(id)a4 info:(id)a5 shouldPrioritize:(BOOL)a6;

- (void)runDaemonSide;
- (void)dealloc;
- (void)run;
- (void)encodeToXPCObject:(id)a0;
- (id)description;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (id)initWithAssetsdClient:(id)a0;
- (void).cxx_destruct;
- (long long)daemonOperation;
- (void)_performSaveTransactionAndWaitOnLibrary:(id)a0 transaction:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_addDownloadNotification:(id)a0;
- (id)_createPlaceHolderInSharedAlbum:(id)a0 collectionShare:(id)a1;
- (void)_incrementDerivativesCount:(long long)a0 thumbnailsCount:(long long)a1;
- (unsigned long long)_insertionIndexForAsset:(id)a0 inAlbum:(id)a1;
- (void)_prefetchLimitForDerivatives:(long long *)a0 thumbnails:(long long *)a1;
- (void)_processInFlightCommentsForAsset:(id)a0 inAlbum:(id)a1 inCollectionShare:(id)a2 inPhotoLibrary:(id)a3;
- (BOOL)_processInflightAsset:(id)a0 mediaAssetType:(unsigned long long)a1;
- (BOOL)_processSaveAssetWithPlaceholderKind:(short)a0 inLibrary:(id)a1 withAssetDataFilePath:(id)a2;
- (void)_updateAsset:(id)a0 withImageFileURL:(id)a1;
- (void)_updatePhotoIrisPropertiesIfNecessaryForAsset:(id)a0 inManagedObjectContext:(id)a1;
- (short)attemptLightweightReimportAssetDataInLibrary:(id)a0;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationSaveAssetJobType;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (BOOL)isProcessingThumbnail;
- (short)placeHolderKindFromAssetMetadataType:(unsigned long long)a0;
- (void)setupSaveAssetMetadataForCollectionsJobForAssetCollections:(id)a0 album:(id)a1 personID:(id)a2 info:(id)a3;

@end
