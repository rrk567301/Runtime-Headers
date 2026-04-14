@class SMCopyEngine, NSArray, NSError;

@interface SMMigrateUserDataStep : SMMigrationEngineStep <SMCopyEngineDelegate>

@property (retain) SMCopyEngine *fileCopyEngine;
@property (retain) NSArray *usersToReplace;
@property (readonly) BOOL copiesHomeDirectories;
@property (retain) NSError *processError;

+ (BOOL)copiesHomeDirectoriesForRequest:(id)a0;
+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withFileGroupings:(id)a1 withUsersToTransfer:(id)a2;
+ (BOOL)shouldMigrateUserDataForUser:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)process;
- (id)prepare;
- (void)setEngine:(id)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierSuceeded:(id)a0;
- (void)applyUserTemplateForCopier:(id)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (id)copyPaths;
- (void)createComprehensiveCopierForUser:(id)a0 relativeTargetHome:(id)a1;
- (void)createCopierForUser:(id)a0 relativeTargetHome:(id)a1;
- (void)createHomeDirectoryCopiersForUsers;
- (id)deletedUsersHomeDirectories;
- (BOOL)engineStepSupportsResumption;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (id)postProcess;
- (id)relativeDestinationUserHomeForUser:(id)a0;
- (id)relativeDestinationUserHomeForUserDict:(id)a0;
- (id)resumeProcess;
- (void)runCopier;
- (void)setupFileCopyEngine;
- (void)setupUsersToReplace;
- (void)transferRateChanged:(double)a0;

@end
