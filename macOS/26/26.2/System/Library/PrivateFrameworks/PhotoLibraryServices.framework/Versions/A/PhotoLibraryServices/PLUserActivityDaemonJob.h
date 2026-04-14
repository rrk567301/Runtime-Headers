@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) unsigned long long cloudFeedContent;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (void)userDidNavigateIntoCollectionShare:(id)a0;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)a0;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)a0;
+ (void)userDidReadCommentOnSharedAsset:(id)a0;
+ (void)userDidNavigateIntoSharedAlbum:(id)a0;
+ (void)userDidViewCloudFeedContent:(unsigned long long)a0;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidDeleteSharedAlbum:(id)a0;
+ (void)userDidViewSharedLibraryParticipantAssetTrashNotification;
+ (void)checkedSharedAlbumServerModelRelationships;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidDeleteSharedAssets:(id)a0;
+ (id)newUserActivityDaemonJob;
+ (void)userDidChangeStatusForMomentShare:(id)a0;

- (void)encodeToXPCObject:(id)a0;
- (void)run;
- (long long)daemonOperation;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;
- (id)initWithAssetsdClient:(id)a0;
- (void).cxx_destruct;

@end
