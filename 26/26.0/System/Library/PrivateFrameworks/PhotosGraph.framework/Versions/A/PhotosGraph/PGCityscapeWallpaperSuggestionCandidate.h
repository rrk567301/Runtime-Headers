@class NSString, PNWallpaperCropResult, PHAsset, NSDate;

@interface PGCityscapeWallpaperSuggestionCandidate : NSObject <PNWallpaperSuggestionCandidate>

@property (readonly) PHAsset *asset;
@property (readonly) NSString *assetUUID;
@property (readonly) NSDate *creationDate;
@property (readonly) BOOL isFavorite;
@property (readonly) float wallpaperScore;
@property (readonly) PNWallpaperCropResult *cropResult;
@property double cropScorePenalty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;

@end
