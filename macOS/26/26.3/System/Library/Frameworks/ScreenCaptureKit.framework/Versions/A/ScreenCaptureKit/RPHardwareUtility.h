@interface RPHardwareUtility : NSObject

+ (id)modelIdentifier;
+ (unsigned long long)chipId;
+ (BOOL)isIPad;
+ (BOOL)isAppleSiliconMac;
+ (BOOL)isCompositionAvailable;
+ (BOOL)isMacMini;
+ (BOOL)isNativeScreenOrientationPortrait;
+ (BOOL)isVirtualDisplay:(unsigned int)a0;
+ (BOOL)isVoiceOverRunning;
+ (struct CGSize { double x0; double x1; })limitRecordingSizeForH264:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })limitRecordingWindowSizeFromSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)supportsShutterSound;

@end
