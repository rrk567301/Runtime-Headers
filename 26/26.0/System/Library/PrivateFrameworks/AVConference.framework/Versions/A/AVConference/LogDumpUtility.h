@interface LogDumpUtility : NSObject

+ (id)newLogDumpListSortedByTimestamp:(id)a0;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (long long)fileCleanupDispatchQueuePriority;
+ (BOOL)shouldCleanupFiles;
+ (void)removeLogDumpsInDirectory:(id)a0 olderThan:(id)a1;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;

@end
