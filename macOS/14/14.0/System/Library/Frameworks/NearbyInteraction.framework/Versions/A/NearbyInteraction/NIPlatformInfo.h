@interface NIPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)supportsUWB;
+ (BOOL)supportsAoA;
+ (BOOL)supportsNBAMMS;
+ (BOOL)supportsSyntheticAperture;

@end
