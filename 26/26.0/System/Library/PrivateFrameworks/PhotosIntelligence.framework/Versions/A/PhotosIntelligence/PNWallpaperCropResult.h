@class PNWallpaperCrop;

@interface PNWallpaperCropResult : NSObject

@property (readonly, nonatomic) PNWallpaperCrop *portraitCrop;
@property (readonly, nonatomic) PNWallpaperCrop *landscapeCrop;

+ (id)cropScoreSortDescriptorForOrientation:(long long)a0;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)cropForOrientation:(long long)a0;
- (id)initWithAsset:(id)a0 classification:(unsigned long long)a1;
- (id)initWithAsset:(id)a0 classification:(unsigned long long)a1 headroomFeasible:(BOOL)a2;
- (id)initWithAsset:(id)a0 classification:(unsigned long long)a1 headroomFeasible:(BOOL)a2 withFaceRegions:(BOOL)a3;

@end
