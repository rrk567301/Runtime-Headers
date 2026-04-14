@interface PGPetWallpaperSuggesterFilteringContext : NSObject <NSCopying>

@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) BOOL ignoreClockOverlap;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) double minimumFaceSize;
@property (nonatomic) double maximumFaceSize;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (id)initForPets;
- (id)initForTopPets;
- (id)initForTopPets:(BOOL)a0 withDictionary:(id)a1;

@end
