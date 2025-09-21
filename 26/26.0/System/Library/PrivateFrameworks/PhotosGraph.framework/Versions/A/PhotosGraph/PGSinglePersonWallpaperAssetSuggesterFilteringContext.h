@interface PGSinglePersonWallpaperAssetSuggesterFilteringContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) double deviceAspectRatio;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) BOOL requiresSmile;
@property (nonatomic) BOOL requiresNoBlink;
@property (nonatomic) double minimumFaceQuality;
@property (nonatomic) double faceQualityPenaltyCutOff;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumFaceRoll;
@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double absoluteMinimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;
@property (nonatomic) BOOL bypassCropScoreCheck;
@property (nonatomic) BOOL styleableFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)_commonInitForTopPeopleInOrientation:(long long)a0;
- (void)_commonInitInOrientation:(long long)a0;
- (id)initForAmbient;
- (id)initForCameraStyleable;
- (id)initForPeopleInOrientation:(long long)a0;
- (id)initForPeopleInOrientation:(long long)a0 deviceAspectRatio:(double)a1;
- (id)initForTopPeople:(BOOL)a0 withDictionary:(id)a1 orientation:(long long)a2;
- (id)initForTopPeopleInOrientation:(long long)a0;
- (id)initForTopPeopleInOrientation:(long long)a0 deviceAspectRatio:(double)a1;
- (void)updateFilteringContextWithDictionary:(id)a0;

@end
