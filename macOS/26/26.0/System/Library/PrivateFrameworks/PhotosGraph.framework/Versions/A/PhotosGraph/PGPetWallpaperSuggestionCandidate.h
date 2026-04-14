@class PHFace, NSString, PNWallpaperCropResult, PHAsset, NSDate;

@interface PGPetWallpaperSuggestionCandidate : NSObject <PNWallpaperSuggestionCandidate>

@property (readonly) PHFace *face;
@property (readonly) PHAsset *asset;
@property (readonly) NSString *assetUUID;
@property (readonly) NSDate *creationDate;
@property (readonly) BOOL isFavorite;
@property (readonly) float wallpaperScore;
@property (readonly) PNWallpaperCropResult *cropResult;
@property BOOL headroomEngaged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 inAsset:(id)a1;

@end
