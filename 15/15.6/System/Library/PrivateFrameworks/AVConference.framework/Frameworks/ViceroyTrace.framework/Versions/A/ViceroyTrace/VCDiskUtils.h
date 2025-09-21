@interface VCDiskUtils : NSObject

+ (char)createDefaultDirectoryIfNeeded:(id)a0;
+ (char)checkAttributesForDirectory:(id)a0;
+ (char)createDefaultCacheDirectoryIfNeeded;
+ (char)createDefaultLogDirectoryIfNeeded;
+ (id)getCachesDirectoryPath;
+ (id)getDefaultLogDumpPath;
+ (char)setAttributesForDirectory:(id)a0;

@end
