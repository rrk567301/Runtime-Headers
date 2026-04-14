@interface LACAKSIdentityHelper : NSObject

- (BOOL)_createRecoveryKey:(id)a0 recoveryCredential:(id)a1 externalDataUUID:(id)a2 externalData:(id)a3 authorizerUUID:(id)a4 authorizerCredential:(id)a5 error:(id *)a6;
- (BOOL)authenticateUser:(id)a0 credential:(id)a1 domain:(long long)a2 disk:(id)a3 contextRef:(id)a4 error:(id *)a5;
- (BOOL)authenticateUser:(id)a0 credential:(id)a1 domain:(long long)a2 disk:(id)a3 error:(id *)a4;
- (BOOL)changeUserPassword:(id)a0 from:(id)a1 to:(id)a2 error:(id *)a3;
- (id)checkDiskOwnership:(id)a0 error:(id *)a1;
- (id)checkUserExists:(id)a0 disk:(id)a1 error:(id *)a2;
- (BOOL)createRecoveryKey:(id)a0 recoveryCredential:(id)a1 authorizerUUID:(id)a2 authorizerCredential:(id)a3 targetDisk:(id)a4 error:(id *)a5;
- (BOOL)createRecoveryKey:(id)a0 recoveryCredential:(id)a1 externalDataUUID:(id)a2 externalData:(id)a3 authorizerUUID:(id)a4 authorizerCredential:(id)a5 error:(id *)a6;
- (BOOL)createRecoveryKey:(id)a0 recoveryCredential:(id)a1 externalDataUUID:(id)a2 externalData:(id)a3 error:(id *)a4;
- (BOOL)createUser:(id)a0 credential:(id)a1 authorizerUUID:(id)a2 authorizerCredential:(id)a3 error:(id *)a4;
- (BOOL)createUser:(id)a0 credential:(id)a1 error:(id *)a2;
- (BOOL)deleteRecoveryKey:(id)a0 externalDataUUID:(id)a1 error:(id *)a2;
- (BOOL)deleteUser:(id)a0 error:(id *)a1;
- (id)fetchRecoveryKeys:(id *)a0;
- (id)fetchRecoveryKeysInDisk:(id)a0 error:(id *)a1;
- (id)fetchUsers:(id *)a0;
- (id)fetchUsersInDisk:(id)a0 error:(id *)a1;
- (id)infoForSession:(unsigned int)a0 error:(id *)a1;
- (BOOL)lockSession:(unsigned int)a0 error:(id *)a1;
- (BOOL)loginUser:(id)a0 credential:(id)a1 session:(unsigned int)a2 disk:(id)a3 error:(id *)a4;
- (id)policyStatusForUser:(id)a0 domain:(long long)a1 error:(id *)a2;
- (BOOL)recoverUser:(id)a0 userCredential:(id)a1 recoveryUUID:(id)a2 recoveryCredential:(id)a3 disk:(id)a4 error:(id *)a5;
- (BOOL)recoverUser:(id)a0 userCredential:(id)a1 recoveryUUID:(id)a2 recoveryCredential:(id)a3 error:(id *)a4;
- (BOOL)resetAllPasswords:(id)a0 credential:(id)a1 disk:(id)a2 error:(id *)a3;
- (BOOL)resetPassword:(id)a0 credential:(id)a1 authorizerUUID:(id)a2 authorizerCredential:(id)a3 disk:(id)a4 error:(id *)a5;
- (BOOL)unloadSession:(unsigned int)a0 error:(id *)a1;
- (BOOL)unlockUser:(id)a0 credential:(id)a1 session:(unsigned int)a2 error:(id *)a3;

@end
