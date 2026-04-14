@class NSObject;
@protocol FlexSongProtocol;

@interface FMSong : NSObject

@property (readonly) NSObject<FlexSongProtocol> *backend;

+ (id)availableTagIDs;
+ (BOOL)hasValidTagIDs:(id)a0;
+ (id)loadSongBundleAtPath:(id)a0;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)a0;
+ (id)localizedNameForTagWithID:(id)a0;
+ (long long)versionFromArtworkFilename:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)hidden;
- (id)uid;
- (id)artistName;
- (id)_impl;
- (BOOL)isLoaded;
- (id)keywords;
- (long long)sampleRate;
- (id)initWithBackend:(id)a0;
- (long long)metadataVersion;
- (void)_loadIfNeeded;
- (BOOL)canPlay;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)uid_photos_only;
- (id)assetWithID:(id)a0;
- (id)songName;
- (id)tagIDs;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)idealDurations;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (BOOL)_loadFlexSong;
- (void)_notifySongAssetsChanged;
- (id)audioEncoderPresetName;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;
- (id)customOptions;
- (id)existingAssetWithID:(id)a0;
- (BOOL)recalled;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (id)songFormat;
- (void)updateAsset:(id)a0 downloadProgress:(double)a1 error:(id)a2;
- (void)updateAssets:(id)a0;
- (void)updateBackend:(id)a0;

@end
