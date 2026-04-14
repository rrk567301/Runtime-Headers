@interface UIDevice : NSObject

+ (id)currentDevice;

- (long long)memorySize;
- (BOOL)_supportsDeepColor;
- (BOOL)enoughMemoryFor2160P;
- (int)numberOfCPU;
- (BOOL)hasPlentyOfMemory;
- (BOOL)hasMoreThan1GBOfMemory;
- (BOOL)enoughPowerFor2160P;
- (id)orientationString;
- (BOOL)isLargePhone;
- (BOOL)isWidePhone;
- (long long)freeMemory;
- (BOOL)enoughPowerForLargerPhotoThumbnails;
- (BOOL)enoughMemoryForRendering12MPPhoto;
- (BOOL)canSupportHEVC;
- (BOOL)screenCanShow2160P;
- (BOOL)sufficientOomphForZoomedRenderScale;
- (BOOL)canEncode2160P;
- (BOOL)osVersionAtLeast:(id)a0;

@end
