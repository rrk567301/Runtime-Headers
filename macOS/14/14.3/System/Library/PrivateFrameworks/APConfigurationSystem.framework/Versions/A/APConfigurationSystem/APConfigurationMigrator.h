@interface APConfigurationMigrator : NSObject

+ (long long)currentConfigurationVersion;
+ (void)_removeItemAtPath:(id)a0 fileManager:(id)a1;
+ (BOOL)resetConfigurationSystem;
+ (long long)traverseDirectoryAtPath:(id)a0 replacingConfigurationAtPath:(id)a1;

@end
