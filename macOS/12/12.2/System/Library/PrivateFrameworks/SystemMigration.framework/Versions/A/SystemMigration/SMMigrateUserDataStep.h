@class SMCopyEngine, NSArray, NSError;

@interface SMMigrateUserDataStep : SMMigrationEngineStep <SMCopyEngineDelegate>

@property (retain) SMCopyEngine *fileCopyEngine;
@property (retain) NSArray *usersToReplace;
@property (readonly) BOOL copiesHomeDirectories;
@property (retain) NSError *processError;

+ (BOOL)copiesHomeDirectoriesForRequest:(id)a0;
+ (BOOL)shouldMigrateUserDataForUser:(id)a0;
+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withEngine:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)prepare;
- (id)process;
- (id)initWithEngine:(id)a0;
- (id)postProcess;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (void)copierSuceeded:(id)a0;
- (void)transferRateChanged:(double)a0;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (BOOL)engineStepSupportsResumption;
- (id)resumeProcess;
- (id)relativeDestinationUserHomeForUserDict:(id)a0;
- (void)createHomeDirectoryCopiersForUsers;
- (void)createCopierForUser:(id)a0 relativeTargetHome:(id)a1;
- (void)createComprehensiveCopierForUser:(id)a0 relativeTargetHome:(id)a1;
- (id)relativeDestinationUserHomeForUser:(id)a0;
- (id)deletedUsersHomeDirectories;
- (void)runCopier;
- (void)applyUserTemplateForCopier:(id)a0;
- (id)copyPaths;

@end
