@interface RPHardwareUtility : NSObject

+ (BOOL)isIPad;
+ (unsigned long long)chipId;
+ (BOOL)isVoiceOverRunning;
+ (BOOL)isCompositionAvailable;
+ (BOOL)isNativeScreenOrientationPortrait;
+ (struct CGSize { double x0; double x1; })limitRecordingWindowSizeFromSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)supportsShutterSound;

@end
