@interface RPHardwareUtility : NSObject

+ (char)isIPad;
+ (unsigned long long)chipId;
+ (char)isAppleSiliconMac;
+ (char)isCompositionAvailable;
+ (char)isNativeScreenOrientationPortrait;
+ (char)isVoiceOverRunning;
+ (struct CGSize { double x0; double x1; })limitRecordingWindowSizeFromSize:(struct CGSize { double x0; double x1; })a0;
+ (char)supportsShutterSound;

@end
