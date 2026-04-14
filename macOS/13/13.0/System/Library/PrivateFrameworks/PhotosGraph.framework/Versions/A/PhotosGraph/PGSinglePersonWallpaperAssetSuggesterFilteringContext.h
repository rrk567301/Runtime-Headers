@interface PGSinglePersonWallpaperAssetSuggesterFilteringContext : NSObject <NSCopying>

@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) BOOL requiresSmile;
@property (nonatomic) BOOL requiresNoBlink;
@property (nonatomic) double minimumFaceQuality;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumFaceRoll;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double absoluteMininumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)_commonInit;
- (id)initForTopPeople;
- (id)initForPeople;
- (id)initForTopPeople:(BOOL)a0 withDictionary:(id)a1;

@end
