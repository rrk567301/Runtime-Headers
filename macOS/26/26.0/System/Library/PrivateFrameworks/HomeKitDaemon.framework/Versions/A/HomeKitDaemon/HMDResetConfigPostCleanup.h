@class NSString;

@interface HMDResetConfigPostCleanup : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)removeFilesAtLocation:(id)a0 usingFileManager:(id)a1;
+ (void)performAnyPostCleanupStepsIfNecessary;
+ (void)performResetConfigPostCleanupSteps:(unsigned long long)a0 dueToReason:(unsigned long long)a1;
+ (void)deleteFilesInsideDirectory:(id)a0 excludingFiles:(id)a1 shouldSkipDirectories:(BOOL)a2;
+ (id)sqlFileListToRemove:(id)a0 fromRootDirectory:(id)a1;
+ (void)writePostCleanupRecordWithReason:(unsigned long long)a0 steps:(unsigned long long)a1;
+ (id)filesToExcludeFromHomedDirectory;
+ (id)resetConfigPostCleanupFileLocation;
+ (void)writePostCleanupRecordToRemoveAllCoreDataFilesWithReason:(unsigned long long)a0;
+ (void)performIndividualCleanupTasks:(unsigned long long)a0 onRootDirectory:(id)a1;
+ (void)cleanupInvalidUserDefaults:(id)a0;
+ (void)removeFilesAtLocation:(id)a0;
+ (id)_readExistingPostCleanupRecord;
+ (void)deleteFilesInsideDirectory:(id)a0 excludingFiles:(id)a1 shouldSkipDirectories:(BOOL)a2 usingFileManager:(id)a3;
+ (id)filesToExcludeFromCacheDirectory;


@end
