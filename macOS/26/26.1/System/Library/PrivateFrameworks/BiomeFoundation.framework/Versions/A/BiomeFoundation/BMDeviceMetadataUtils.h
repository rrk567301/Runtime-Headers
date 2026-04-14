@interface BMDeviceMetadataUtils : NSObject

+ (id)osBuildVersion;
+ (long long)platform;
+ (BOOL)currentlyInGameMode;
+ (id)osBuildSupplementalVersion;

@end
