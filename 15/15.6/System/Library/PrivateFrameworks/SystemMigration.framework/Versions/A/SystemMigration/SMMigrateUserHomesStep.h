@class SMCopyEngine, NSArray, NSError;

@interface SMMigrateUserHomesStep : SMEngineStep <SMCopyEngineDelegate>

@property (retain) SMCopyEngine *fileCopyEngine;
@property (retain) NSArray *usersToReplace;
@property (readonly) char copiesHomeDirectories;
@property (retain) NSError *processError;
@property (readonly) NSArray *copyPaths;

+ (char)copiesHomeDirectoriesForRequest:(id)a0;
+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withFileGroupings:(id)a1 withUsersToTransfer:(id)a2;
+ (char)shouldMigrateUserDataForUser:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)process;
- (id)prepare;
- (void)copierSuceeded:(id)a0;
- (void)applyUserTemplateForCopier:(id)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (char)copyEngineShouldContinueByFastChecking:(char)a0;
- (void)createComprehensiveCopierForUser:(id)a0 relativeTargetHome:(id)a1;
- (void)createCopierForUser:(id)a0 relativeTargetHome:(id)a1;
- (void)createHomeDirectoryCopiersForUsers;
- (id)deletedUsersHomeDirectories;
- (char)engineStepSupportsResumption;
- (id)postProcess;
- (id)relativeDestinationUserHomeForUser:(id)a0;
- (id)relativeDestinationUserHomeForUserDict:(id)a0;
- (id)resumeProcess;
- (void)runCopier;
- (void)setupFileCopyEngine;
- (void)setupUsersToReplace;

@end
