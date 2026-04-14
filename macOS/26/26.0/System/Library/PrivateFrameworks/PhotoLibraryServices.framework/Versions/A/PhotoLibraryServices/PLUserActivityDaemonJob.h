@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) unsigned long long cloudFeedContent;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (id)newUserActivityDaemonJob;
+ (void)userDidViewCloudFeedContent:(unsigned long long)a0;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidNavigateIntoSharedAlbum:(id)a0;
+ (void)userDidDeleteSharedAssets:(id)a0;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)a0;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)a0;
+ (void)checkedSharedAlbumServerModelRelationships;
+ (void)userDidChangeStatusForMomentShare:(id)a0;
+ (void)userDidNavigateIntoCollectionShare:(id)a0;
+ (void)userDidViewSharedLibraryParticipantAssetTrashNotification;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidReadCommentOnSharedAsset:(id)a0;
+ (void)userDidDeleteSharedAlbum:(id)a0;

- (void)runDaemonSide;
- (void)run;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (id)initWithAssetsdClient:(id)a0;
- (void).cxx_destruct;
- (long long)daemonOperation;

@end
