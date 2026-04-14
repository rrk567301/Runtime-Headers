@interface MOPlatformInfo : NSObject

+ (BOOL)isIpad;
+ (BOOL)isInternalBuild;
+ (id)getBuildVersion;
+ (BOOL)isDNUEnabled;
+ (BOOL)isSeedBuild;
+ (id)getProductType;
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
