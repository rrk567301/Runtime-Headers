@interface MOPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)getBuildVersion;
+ (id)getProductType;
+ (BOOL)isSeedBuild;
+ (BOOL)isIpad;
+ (BOOL)isDNUEnabled;
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
