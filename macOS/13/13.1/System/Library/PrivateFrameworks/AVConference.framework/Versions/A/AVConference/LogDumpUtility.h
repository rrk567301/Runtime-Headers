@interface LogDumpUtility : NSObject

+ (id)getCachesDirectoryPath;
+ (id)getDefaultLogDumpPath;
+ (BOOL)createDirectory:(id)a0;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (id)createFileListSortedByTimestamp:(id)a0;
+ (void)removeFilesInDirectory:(id)a0 olderThan:(id)a1;
+ (BOOL)shouldCleanupFiles;
+ (void)removeOldFilesInDefaultLogDumpPath;

@end
