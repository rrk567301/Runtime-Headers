@class NSObject;
@protocol FlexSongProtocol;

@interface FMSong : NSObject

@property (readonly) NSObject<FlexSongProtocol> *backend;

+ (id)availableTagIDs;
+ (id)localizedNameForTagWithID:(id)a0;
+ (long long)versionFromArtworkFilename:(id)a0;
+ (id)loadSongBundleAtPath:(id)a0;
+ (id)loadSongsAndArtworkInFolderAtPath:(id)a0;
+ (BOOL)hasValidTagIDs:(id)a0;

- (id)description;
- (BOOL)hidden;
- (void).cxx_destruct;
- (id)uid;
- (id)artistName;
- (BOOL)isLoaded;
- (id)_impl;
- (id)keywords;
- (long long)sampleRate;
- (id)initWithBackend:(id)a0;
- (long long)metadataVersion;
- (void)_loadIfNeeded;
- (BOOL)canPlay;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)uid_photos_only;
- (id)tagIDs;
- (id)songName;
- (id)assetWithID:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (id)idealDurations;
- (void)updateAssets:(id)a0;
- (id)existingAssetWithID:(id)a0;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (id)audioEncoderPresetName;
- (id)songFormat;
- (BOOL)recalled;
- (id)customOptions;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)updateBackend:(id)a0;
- (void)_notifySongAssetsChanged;
- (void)updateAsset:(id)a0 downloadProgress:(double)a1 error:(id)a2;
- (BOOL)_loadFlexSong;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;

@end
