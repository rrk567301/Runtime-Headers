@class NSString;

@interface HMDResetConfigPostCleanup : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)performAnyPostCleanupStepsIfNecessary;
+ (void)writePostCleanupRecordWithReason:(unsigned long long)a0 steps:(unsigned long long)a1;
+ (id)resetConfigPostCleanupFileLocation;
+ (void)performResetConfigPostCleanupSteps:(unsigned long long)a0 dueToReason:(unsigned long long)a1;
+ (void)removeFilesAtPath:(id)a0;
+ (void)deleteFilesInsideDirectory:(id)a0;
+ (void)performIndividualCleanupTasks:(unsigned long long)a0 onRootDirectory:(id)a1;
+ (id)sqlFileListToRemove:(id)a0 fromRootDirectory:(id)a1;


@end
