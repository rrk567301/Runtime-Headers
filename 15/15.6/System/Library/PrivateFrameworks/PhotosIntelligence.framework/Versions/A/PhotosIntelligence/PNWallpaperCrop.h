@interface PNWallpaperCrop : NSObject

@property (readonly) double cropScore;
@property (readonly) char passesClockOverlap;
@property (readonly) double cropZoomRatio;

- (id)description;
- (id)initWithAsset:(id)a0 orientation:(long long)a1 classification:(unsigned long long)a2;

@end
