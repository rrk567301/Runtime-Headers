@class SMCopyEngine;

@interface SMMigrateFiles : SMMigrationEngineStep <SMPathsPreliminaryPathGroupSizeCallback>

@property (retain) SMCopyEngine *fileCopyEngine;
@property BOOL kextCacheNeedsUpdate;
@property unsigned long long prelimFileCount;

+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withEngine:(id)a1;
+ (BOOL)shouldCopyNonSystemReceiptsForUpgrade;

- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (id)process;
- (id)prepare;
- (id)initWithEngine:(id)a0;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (void)transferRateChanged:(double)a0;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (id)resumeProcess;
- (id)postProcess;
- (id)copyPaths;
- (BOOL)engineStepSupportsResumption;
- (void)preliminarySize:(unsigned long long)a0 andCount:(unsigned long long)a1 forPathGroup:(unsigned long long)a2;
- (void)_runCopier;
- (void)setupCopyNonSystemReceiptsForUpgrade;
- (BOOL)setupCopiesForFileGroups;
- (BOOL)localizeFoldersForApplications;
- (void)dedupeWallpaper;

@end
