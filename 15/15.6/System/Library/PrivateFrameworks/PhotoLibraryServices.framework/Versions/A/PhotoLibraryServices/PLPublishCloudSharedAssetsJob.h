@class NSString, NSArray, NSDictionary;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob

@property (retain, nonatomic) NSString *publishAlbumCloudGUID;
@property (retain, nonatomic) NSArray *originalAssetUUIDs;
@property (retain, nonatomic) NSArray *stillImageOnlyAssetUUIDs;
@property (retain, nonatomic) NSDictionary *customExportsInfo;
@property (retain, nonatomic) NSDictionary *trimmedVideoPathInfo;
@property (nonatomic) char isNewAlbum;
@property (retain, nonatomic) NSString *batchCommentText;

+ (void)publishBatchOfOriginalAssetUUIDs:(id)a0 toSharedAlbum:(id)a1 withAssetsSharingInfos:(id)a2 customExportsInfo:(id)a3 trimmedVideoPathInfo:(id)a4 isNewAlbum:(char)a5 batchCommentText:(id)a6;
+ (id)videoComplementURLForSharingFromAsset:(id)a0;

- (id)description;
- (void)run;
- (void).cxx_destruct;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)a0;
- (void)executeDaemonOperation;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (char)retrieveURLsFromAssetWithUUID:(id)a0 withExportedFileURL:(id)a1 primaryURL:(id *)a2 videoComplementURL:(id *)a3;
- (void)runDaemonSide;
- (char)shouldArchiveXPCToDisk;

@end
