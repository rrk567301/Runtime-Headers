@class PHAsset;

@interface PGLandscapeWallpaperSuggestionCandidate : NSObject

@property (readonly) PHAsset *asset;
@property (readonly) double cropScore;
@property (readonly) BOOL passesClockOverlap;
@property (readonly) double cropZoomRatio;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;

@end
