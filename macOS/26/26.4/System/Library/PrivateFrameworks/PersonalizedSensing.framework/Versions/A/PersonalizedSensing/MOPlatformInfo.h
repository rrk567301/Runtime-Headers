@interface MOPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)getBuildVersion;
+ (BOOL)isSeedBuild;
+ (BOOL)isIpad;
+ (id)getProductType;
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
