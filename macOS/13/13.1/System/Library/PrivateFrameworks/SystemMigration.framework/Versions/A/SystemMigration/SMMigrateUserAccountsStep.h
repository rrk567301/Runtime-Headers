@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface SMMigrateUserAccountsStep : SMMigrationEngineStep <DMAsyncDelegate>

@property (retain) NSArray *usersToReplace;
@property (retain) NSObject<OS_dispatch_semaphore> *dmWaitingSem;

- (id)description;
- (void).cxx_destruct;
- (id)process;
- (id)prepare;
- (id)initWithEngine:(id)a0;
- (void)dmAsyncStartedForDisk:(struct __DADisk { } *)a0;
- (void)dmAsyncProgressForDisk:(struct __DADisk { } *)a0 barberPole:(BOOL)a1 percent:(float)a2;
- (void)dmAsyncMessageForDisk:(struct __DADisk { } *)a0 string:(id)a1 dictionary:(id)a2;
- (void)dmAsyncFinishedForDisk:(struct __DADisk { } *)a0 mainError:(int)a1 detailError:(int)a2 dictionary:(id)a3;
- (void)updatePreboot;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (void)calculateDeletedSize;
- (id)getBiometricKitReference;
- (BOOL)requiresSecureTokenOperations;
- (id)authorizeExistingTokenUserInDB:(id)a0 returningError:(id *)a1;
- (id)transferUserAccounts;
- (BOOL)enableFDEReturningError:(id *)a0;
- (void)updateFDE;
- (id)fdeUsersToAdd;

@end
