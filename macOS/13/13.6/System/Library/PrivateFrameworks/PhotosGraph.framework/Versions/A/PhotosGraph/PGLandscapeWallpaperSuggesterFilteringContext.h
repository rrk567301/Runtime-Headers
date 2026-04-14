@interface PGLandscapeWallpaperSuggesterFilteringContext : NSObject <NSCopying>

@property (nonatomic) double minimumWallpaperScore;
@property (nonatomic) double minimumCropScore;
@property (nonatomic) BOOL ignoreClockOverlap;
@property (nonatomic) double timeIntervalForCandidateDeduping;
@property (nonatomic) double maximumLowLightScore;
@property (nonatomic) double maximumCropZoomRatio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commonInit;
- (id)initForLandscapes;
- (id)initForTopLandscapes;
- (id)initForTopLandscapes:(BOOL)a0 withDictionary:(id)a1;

@end
