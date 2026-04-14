@interface VCDiskUtils : NSObject

+ (BOOL)checkAttributesForDirectory:(id)a0;
+ (BOOL)createDefaultLogDirectoryIfNeeded;
+ (id)getCachesDirectoryPath;
+ (id)getDefaultLogDumpPath;
+ (BOOL)setAttributesForDirectory:(id)a0;

@end
