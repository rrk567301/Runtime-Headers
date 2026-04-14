@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) unsigned long long cloudFeedContent;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (void)userDidNavigateIntoSharedAlbum:(id)a0;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidDeleteSharedAlbum:(id)a0;
+ (void)userDidChangeStatusForMomentShare:(id)a0;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)a0;
+ (void)userDidDeleteSharedAssets:(id)a0;
+ (void)userDidReadCommentOnSharedAsset:(id)a0;
+ (void)userDidViewSharedLibraryParticipantAssetTrashNotification;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)a0;
+ (void)userDidLeavePhotosApplication;
+ (void)checkedSharedAlbumServerModelRelationships;
+ (void)userDidViewCloudFeedContent:(unsigned long long)a0;
+ (id)newUserActivityDaemonJob;
+ (void)userDidNavigateIntoCollectionShare:(id)a0;

- (void)run;
- (id)initWithAssetsdClient:(id)a0;
- (long long)daemonOperation;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;

@end
