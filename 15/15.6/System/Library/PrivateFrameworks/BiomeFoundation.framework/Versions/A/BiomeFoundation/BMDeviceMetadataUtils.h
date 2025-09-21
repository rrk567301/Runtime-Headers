@interface BMDeviceMetadataUtils : NSObject

+ (long long)platform;
+ (id)osBuildVersion;
+ (char)currentlyInGameMode;
+ (id)osBuildSupplementalVersion;

@end
