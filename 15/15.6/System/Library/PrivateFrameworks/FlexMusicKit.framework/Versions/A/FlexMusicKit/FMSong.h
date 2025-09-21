@class NSArray, NSString, NSDictionary, NSObject;
@protocol FlexSongProtocol;

@interface FMSong : NSObject

@property (class, readonly, nonatomic) NSArray *availableTagIDs;

@property (readonly, nonatomic) char isClientManaged;
@property (readonly) NSObject<FlexSongProtocol> *backend;
@property (readonly, nonatomic) long long metadataVersion;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) long long sampleRate;
@property (readonly, nonatomic) NSString *audioEncoderPresetName;
@property (readonly, nonatomic) NSDictionary *weightedKeywords;
@property (readonly, nonatomic) NSString *songFormat;
@property (readonly, nonatomic) char canPlay;
@property (readonly, nonatomic) char recalled;

+ (char)hasValidTagIDs:(id)a0;
+ (id)loadSongBundleAtPath:(id)a0;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)a0;
+ (id)localizedNameForTagWithID:(id)a0;
+ (long long)versionFromArtworkFilename:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)artistName;
- (char)isLoaded;
- (id)keywords;
- (id)_impl;
- (char)hidden;
- (id)initWithBackend:(id)a0;
- (void)_loadIfNeeded;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)uid_photos_only;
- (id)assetWithID:(id)a0;
- (id)songName;
- (id)tagIDs;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)idealDurations;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (char)_loadFlexSong;
- (void)_notifySongAssetsChanged;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;
- (id)customOptions;
- (id)existingAssetWithID:(id)a0;
- (id)initWithUID:(id)a0 assets:(id)a1 metadata:(id)a2;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)updateAsset:(id)a0 downloadProgress:(double)a1 error:(id)a2;
- (void)updateAssets:(id)a0;
- (void)updateBackend:(id)a0;

@end
