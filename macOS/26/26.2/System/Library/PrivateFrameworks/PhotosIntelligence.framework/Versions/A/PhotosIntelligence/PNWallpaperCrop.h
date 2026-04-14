@interface PNWallpaperCrop : NSObject

@property (readonly) double cropScore;
@property (readonly) BOOL passesClockOverlap;
@property (readonly) BOOL headroomEngaged;
@property (readonly) double cropZoomRatio;
@property (readonly) double adaptiveHeadroom;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveCropRect;
@property (readonly, nonatomic) double maxClockShift;
@property (readonly, nonatomic) double notificationRoom;
@property (readonly) unsigned long long layoutVariant;

- (id)description;
- (id)initWithAsset:(id)a0 orientation:(long long)a1 classification:(unsigned long long)a2;
- (id)initWithAsset:(id)a0 orientation:(long long)a1 classification:(unsigned long long)a2 headroomFeasible:(BOOL)a3;
- (id)initWithAsset:(id)a0 orientation:(long long)a1 classification:(unsigned long long)a2 headroomFeasible:(BOOL)a3 withFaceRegions:(BOOL)a4;

@end
