@interface WallpaperVideoDebugFrameChart : NSObject

@property (class, readonly) BOOL isEnabled;
@property (class, readonly) BOOL isActive;

+ (void)close;
+ (void)markEndingDecodeOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (void)markBeginWorkingAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 minUpcomingHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (void)markBeginningDecodeOfSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (void)markDecodedFrameDeliveryWithOriginalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 minUpcomingPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 decodeHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 displayHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 fader:(BOOL)a4 still:(BOOL)a5;
+ (void)markEndWorkingAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 minUpcomingHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (void)markFadeAnimationKeyframeWithValue:(double)a0 atHostSeconds:(double)a1;
+ (void)markFadeFromHostSeconds:(double)a0 toHostSeconds:(double)a1;
+ (void)markTargetTSALevelChangeFromLevel:(long long)a0 toLevel:(long long)a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
+ (void)openWithTimebase:(struct OpaqueCMTimebase { } *)a0 movieDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 chartDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
