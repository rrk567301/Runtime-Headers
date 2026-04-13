@interface PIVideoPosterFrameAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } posterFrameTime;

+ (id)scaleKey;
+ (id)timeKey;

- (id)initWithAdjustment:(id)a0;

@end
