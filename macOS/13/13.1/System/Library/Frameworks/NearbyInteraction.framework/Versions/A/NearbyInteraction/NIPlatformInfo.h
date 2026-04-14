@interface NIPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)supportsUWB;
+ (BOOL)supportsAoA;
+ (BOOL)supportsSyntheticAperture;

@end
