@class PHAsset, NSString, NSDate;

@interface PGSinglePersonWallpaperAssetCandidate : NSObject <PNWallpaperSuggestionCandidate>

@property (readonly) PHAsset *asset;
@property BOOL headroomEngaged;
@property (readonly) NSString *assetUUID;
@property (readonly) BOOL isFavorite;
@property (readonly) double score;
@property (readonly) float wallpaperScore;
@property (readonly) double aestheticScore;
@property (readonly) NSDate *creationDate;
@property double faceQualityPenalty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;

@end
