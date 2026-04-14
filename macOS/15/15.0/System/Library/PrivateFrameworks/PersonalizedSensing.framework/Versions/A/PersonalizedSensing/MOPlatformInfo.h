@interface MOPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isSeedBuild;
+ (id)getBuildVersion;
+ (id)getProductType;
+ (id)getProductVersion;
+ (BOOL)isIpad;
+ (id)extractHardwareAndSoftwareMetadata;
+ (id)getHWModel;
+ (void)persistBuildVersion;
+ (BOOL)wasBuildVersionUpdated;

@end
