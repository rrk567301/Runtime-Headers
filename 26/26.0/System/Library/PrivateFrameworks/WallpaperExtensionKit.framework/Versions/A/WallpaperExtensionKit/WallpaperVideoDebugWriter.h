@interface WallpaperVideoDebugWriter : NSObject

@property (class, readonly) BOOL isEnabled;

+ (void)writeCMTimeOnFrame:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (void)writeFrameOfRampOnFrame:(struct __CVBuffer { } *)a0 frameOfRamp:(int)a1;
+ (void)writeTemporalLevelNumberOnFrame:(struct __CVBuffer { } *)a0 level:(int)a1;

@end
