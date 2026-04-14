@class FCContentArchive, FCContentManifest, FCAVAsset;

@interface FCArticleAudioTrack : NSObject <NSCopying, FCContentArchivable>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) FCAVAsset *asset;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double embeddedUpsellStartTime;
@property (readonly, nonatomic) double embeddedUpsellEndTime;
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) FCContentManifest *contentManifest;

- (unsigned long long)hash;
- (id)initWithType:(long long)a0 asset:(id)a1 duration:(double)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 asset:(id)a1 duration:(double)a2 embeddedUpsellStartTime:(double)a3 embeddedUpsellEndTime:(double)a4;
- (id)init;

@end
