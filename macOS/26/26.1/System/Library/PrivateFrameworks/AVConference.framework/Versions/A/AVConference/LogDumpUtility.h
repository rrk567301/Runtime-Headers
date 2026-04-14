@interface LogDumpUtility : NSObject

+ (BOOL)shouldCleanupFiles;
+ (long long)fileCleanupDispatchQueuePriority;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (void)removeLogDumpsInDirectory:(id)a0 olderThan:(id)a1;
+ (id)newLogDumpListSortedByTimestamp:(id)a0;

@end
