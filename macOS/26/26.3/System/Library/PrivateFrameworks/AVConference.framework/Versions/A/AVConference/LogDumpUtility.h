@interface LogDumpUtility : NSObject

+ (void)removeLogDumpsInDirectory:(id)a0 olderThan:(id)a1;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (id)newLogDumpListSortedByTimestamp:(id)a0;
+ (long long)fileCleanupDispatchQueuePriority;
+ (BOOL)shouldCleanupFiles;
+ (void)removeOldFilesInDefaultLogDumpPath;

@end
