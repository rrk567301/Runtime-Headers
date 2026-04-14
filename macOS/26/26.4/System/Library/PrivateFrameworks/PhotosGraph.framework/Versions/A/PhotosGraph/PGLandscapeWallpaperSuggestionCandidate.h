@class NSString, PNWallpaperCropResult, PHAsset, NSDate;

@interface PGLandscapeWallpaperSuggestionCandidate : NSObject <PNWallpaperSuggestionCandidate>

@property (readonly) PHAsset *asset;
@property (readonly) NSString *assetUUID;
@property (readonly) NSDate *creationDate;
@property (readonly) BOOL isFavorite;
@property (readonly) float wallpaperScore;
@property (readonly) PNWallpaperCropResult *cropResult;
@property unsigned long long aestheticsScorePenalty;
@property unsigned long long cropScorePenalty;
@property unsigned long long wallpaperScorePenalty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;

@end
