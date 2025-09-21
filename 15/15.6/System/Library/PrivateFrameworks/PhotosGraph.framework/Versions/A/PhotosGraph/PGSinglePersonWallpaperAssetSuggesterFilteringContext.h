@interface PGSinglePersonWallpaperAssetSuggesterFilteringContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long orientation;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) char requiresSmile;
@property (nonatomic) char requiresNoBlink;
@property (nonatomic) double minimumFaceQuality;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumFaceRoll;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double absoluteMinimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) char bypassCropScoreCheck;
@property (nonatomic) char styleableFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)_commonInitInOrientation:(long long)a0;
- (id)initForAmbient;
- (id)initForCameraStyleable;
- (id)initForPeopleInOrientation:(long long)a0;
- (id)initForTopPeople:(char)a0 withDictionary:(id)a1 orientation:(long long)a2;
- (id)initForTopPeopleInOrientation:(long long)a0;
- (void)updateFilteringContextWithDictionary:(id)a0;

@end
