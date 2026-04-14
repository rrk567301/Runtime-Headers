@protocol PXStorySongResource;

@interface PXStoryExportAudioOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long outputType;
@property (readonly, nonatomic) id<PXStorySongResource> initialSongResource;
@property (retain, nonatomic) id<PXStorySongResource> exportSongResource;

+ (unsigned long long)defaultOutputTypeForSongResource:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appleMusicAsset;
- (BOOL)isExportAllowed;
- (BOOL)canSupportAppleMusicSharing;
- (id)exportFlexMusicAsset;
- (id)initWithInitialSongResource:(id)a0;
- (BOOL)shouldUseNoMusic;

@end
