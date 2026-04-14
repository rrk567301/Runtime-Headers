@class SMCopyEngine;

@interface SMMigrateFiles : SMMigrationEngineStep <SMPathsPreliminaryPathGroupSizeCallback>

@property (retain) SMCopyEngine *fileCopyEngine;
@property BOOL kextCacheNeedsUpdate;
@property unsigned long long prelimFileCount;

+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withFileGroupings:(id)a1 withUsersToTransfer:(id)a2;
+ (BOOL)shouldCopyNonSystemReceiptsForUpgrade;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)process;
- (id)prepare;
- (void)setEngine:(id)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)dedupeWallpaper;
- (void)_runCopier;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (id)copyPaths;
- (BOOL)engineStepSupportsResumption;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (BOOL)localizeFoldersForApplications;
- (id)postProcess;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2;
- (id)resumeProcess;
- (BOOL)setupCopiesForFileGroups;
- (void)setupCopyNonSystemReceiptsForUpgrade;
- (void)setupFileCopyEngine;
- (void)transferRateChanged:(double)a0;

@end
