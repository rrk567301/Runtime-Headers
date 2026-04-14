@interface _SFSandboxUtilities : NSObject

+ (BOOL)enableSandboxStyleFileQuarantine;
+ (id)normalizedUserTempDirectoryPath;
+ (id)normalizedUserCacheDirectoryPath;
+ (id)normalizedHomeDirectory;

@end
