@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) unsigned long long cloudFeedContent;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (void)checkedSharedAlbumServerModelRelationships;
+ (id)newUserActivityDaemonJob;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidReadCommentOnSharedAsset:(id)a0;
+ (void)userDidDeleteSharedAlbum:(id)a0;
+ (void)userDidNavigateIntoCollectionShare:(id)a0;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)a0;
+ (void)userDidViewCloudFeedContent:(unsigned long long)a0;
+ (void)userDidNavigateIntoSharedAlbum:(id)a0;
+ (void)userDidDeleteSharedAssets:(id)a0;
+ (void)userDidViewSharedLibraryParticipantAssetTrashNotification;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)a0;
+ (void)userDidChangeStatusForMomentShare:(id)a0;
+ (void)userDidLeavePhotosApplication;

- (long long)daemonOperation;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)run;
- (void)encodeToXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetsdClient:(id)a0;
- (void)runDaemonSide;

@end
