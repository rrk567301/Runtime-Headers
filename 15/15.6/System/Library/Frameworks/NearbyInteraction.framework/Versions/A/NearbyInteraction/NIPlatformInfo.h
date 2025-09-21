@interface NIPlatformInfo : NSObject

+ (char)isInternalBuild;
+ (char)supportsNBAMMS;
+ (char)supportsUWB;
+ (char)supportsARKit;
+ (char)supportsAoA;
+ (char)supportsSyntheticAperture;

@end
