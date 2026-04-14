@interface MOPlatformInfo : NSObject

+ (id)getProductType;
+ (BOOL)isSeedBuild;
+ (BOOL)isDNUEnabled;
+ (BOOL)isInternalBuild;
+ (BOOL)isIpad;
+ (id)getBuildVersion;
+ (id)getProductVersion;
+ (id)getDeviceClass;
+ (id)_createDefaultsManagerDaemon;
+ (id)_getMainBundleIdentifier;
+ (id)extractHardwareAndSoftwareMetadata;
+ (unsigned long long)generativeModelsAvailabilityStatus;
+ (id)getHWModel;
+ (BOOL)isIHAEnabled;
+ (void)persistBuildVersion;
+ (BOOL)wasBuildVersionUpdated;

@end
