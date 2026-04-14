@interface LogDumpUtility : NSObject

+ (BOOL)createDirectory:(id)a0;
+ (id)createFileListSortedByTimestamp:(id)a0;
+ (id)getCachesDirectoryPath;
+ (id)getDefaultLogDumpPath;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (void)removeFilesInDirectory:(id)a0 olderThan:(id)a1;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (void)setFileOwnership:(id)a0 owner:(id)a1;
+ (BOOL)shouldCleanupFiles;

@end
