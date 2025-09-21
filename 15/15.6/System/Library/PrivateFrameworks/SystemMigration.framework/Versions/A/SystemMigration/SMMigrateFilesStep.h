@class SMCopyEngine, NSArray;

@interface SMMigrateFilesStep : SMEngineStep <SMPathsPreliminaryPathGroupSizeCallback>

@property (retain) SMCopyEngine *fileCopyEngine;
@property char kextCacheNeedsUpdate;
@property unsigned long long prelimFileCount;
@property (readonly) NSArray *copyPaths;

+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withFileGroupings:(id)a1 withUsersToTransfer:(id)a2;
+ (char)shouldCopyNonSystemReceiptsForUpgrade;

- (void).cxx_destruct;
- (void)cancel;
- (id)process;
- (id)prepare;
- (void)dedupeWallpaper;
- (void)_runCopier;
- (void)copierFailed:(id)a0 error:(id)a1;
- (char)copyEngineShouldContinueByFastChecking:(char)a0;
- (char)engineStepSupportsResumption;
- (id)postProcess;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2;
- (id)resumeProcess;
- (char)setupCopiesForFileGroups;
- (void)setupCopyNonSystemReceiptsForUpgrade;
- (void)setupFileCopyEngine;

@end
