@interface NIPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)supportsAoA;
+ (BOOL)supportsSyntheticAperture;
+ (BOOL)supportsNBAMMS;
+ (BOOL)supportsUWB;
+ (BOOL)supportsARKit;

@end
