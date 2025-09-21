@interface NIPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)supportsSyntheticAperture;
+ (BOOL)supportsAoA;
+ (BOOL)supportsNBAMMS;
+ (BOOL)supportsUWB;
+ (BOOL)supportsARKit;

@end
