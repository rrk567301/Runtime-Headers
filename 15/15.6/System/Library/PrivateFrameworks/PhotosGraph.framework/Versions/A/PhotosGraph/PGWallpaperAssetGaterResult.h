@interface PGWallpaperAssetGaterResult : NSObject

@property (nonatomic) char passesSegmentation;
@property (nonatomic) char passesSettlingEffect;
@property (nonatomic) char didTimeout;
@property (readonly, nonatomic) char passesAnyGating;

- (unsigned long long)availableFeatures;

@end
