@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) long long cloudFeedContent;
@property (copy, nonatomic) NSString *suggestedCMMUUID;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (void)userDidDeleteSharedAssets:(id)a0;
+ (void)userDidDeleteSharedAlbum:(id)a0;
+ (id)newUserActivityDaemonJob;
+ (void)userDidViewCloudFeedContent:(long long)a0;
+ (void)userDidNavigateIntoSharedAlbum:(id)a0;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)a0;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)a0;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidReadCommentOnSharedAsset:(id)a0;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidChangeStatusForSuggestedCMM:(id)a0;
+ (void)userDidChangeStatusForMomentShare:(id)a0;

- (void)run;
- (void).cxx_destruct;
- (id)initWithAssetsdClient:(id)a0;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (long long)daemonOperation;

@end
