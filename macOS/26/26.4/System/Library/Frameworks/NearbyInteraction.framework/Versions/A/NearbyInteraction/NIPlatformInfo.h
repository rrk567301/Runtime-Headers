@interface NIPlatformInfo : NSObject

+ (BOOL)supportsARKit;
+ (BOOL)isInternalBuild;
+ (BOOL)supportsDLTDoA;
+ (BOOL)supportsUWB;
+ (BOOL)supportsAoA;
+ (BOOL)supportsSyntheticAperture;
+ (BOOL)supportsNBAMMS;

@end
