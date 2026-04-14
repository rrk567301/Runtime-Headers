@interface NIPlatformInfo : NSObject

+ (BOOL)supportsNBAMMS;
+ (BOOL)supportsSyntheticAperture;
+ (BOOL)supportsUWB;
+ (BOOL)isInternalBuild;
+ (BOOL)supportsAoA;
+ (BOOL)supportsARKit;

@end
