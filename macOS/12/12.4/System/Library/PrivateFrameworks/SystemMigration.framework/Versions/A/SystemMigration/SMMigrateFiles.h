@class SMCopyEngine;

@interface SMMigrateFiles : SMMigrationEngineStep <SMPathsPreliminaryPathGroupSizeCallback>

@property (retain) SMCopyEngine *fileCopyEngine;
@property BOOL kextCacheNeedsUpdate;
@property unsigned long long prelimFileCount;

+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withEngine:(id)a1;
+ (BOOL)shouldCopyNonSystemReceiptsForUpgrade;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)prepare;
- (id)process;
- (id)initWithEngine:(id)a0;
- (id)postProcess;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (void)transferRateChanged:(double)a0;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (BOOL)engineStepSupportsResumption;
- (id)resumeProcess;
- (id)copyPaths;
- (BOOL)setupCopiesForFileGroups;
- (void)setupCopyNonSystemReceiptsForUpgrade;
- (void)_runCopier;
- (BOOL)localizeFoldersForApplications;
- (void)dedupeWallpaper;

@end
