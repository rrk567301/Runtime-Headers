@interface MOPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isSeedBuild;
+ (id)getProductType;
+ (BOOL)isIpad;
+ (id)getBuildVersion;
+ (BOOL)isDNUEnabled;
+ (id)getProductVersion;
+ (id)getDeviceClass;
+ (id)extractHardwareAndSoftwareMetadata;
+ (unsigned long long)generativeModelsAvailabilityStatus;
+ (id)getHWModel;
+ (BOOL)isIHAEnabled;
+ (void)persistBuildVersion;
+ (BOOL)wasBuildVersionUpdated;

@end
