@class FMSong;

@interface PGFMSong : NSObject

@property (readonly, nonatomic) FMSong *wrappedSong;

+ (id)availableTagIDs;
+ (id)localizedNameForTagWithID:(id)a0;

- (id)description;
- (BOOL)hidden;
- (void).cxx_destruct;
- (id)uid;
- (id)artistName;
- (BOOL)isLoaded;
- (id)keywords;
- (long long)sampleRate;
- (long long)metadataVersion;
- (BOOL)canPlay;
- (id)valence;
- (id)arousal;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)tagIDs;
- (id)songName;
- (id)assetWithID:(id)a0;
- (id)initWithFMSong:(id)a0;
- (id)audioEncoderPresetName;
- (id)songFormat;
- (BOOL)recalled;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (id)idealDurations;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0;
- (void)requestDownloadOfAllAssetsWithIDs:(id)a0 withOptions:(id)a1;
- (void)cancelDownloadOfAllAssetsWithIDs:(id)a0;
- (id)_valueAssociatedWithTagPrefix:(id)a0;

@end
