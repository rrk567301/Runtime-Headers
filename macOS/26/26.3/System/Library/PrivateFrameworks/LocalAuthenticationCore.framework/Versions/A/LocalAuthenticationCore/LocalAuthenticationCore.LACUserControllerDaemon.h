@interface LocalAuthenticationCore.LACUserControllerDaemon : NSObject <LACUserController> {
    void /* unknown type, empty encoding */ aks;
    void /* unknown type, empty encoding */ disk;
    void /* unknown type, empty encoding */ registry;
    void /* unknown type, empty encoding */ db;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)changePasswordForUser:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)updateUserRegistryConfig:(id)a0 error:(id *)a1;
- (BOOL)addRecoveryKey:(id)a0 authorizer:(id)a1 error:(id *)a2;
- (BOOL)addRecoveryKey:(id)a0 authorizer:(id)a1 targetDisk:(id)a2 error:(id *)a3;
- (BOOL)addRecoveryKey:(id)a0 authorizerKey:(id)a1 error:(id *)a2;
- (BOOL)addRecoveryKey:(id)a0 error:(id *)a1;
- (BOOL)authenticateUser:(id)a0 domain:(long long)a1 targetDisk:(id)a2 contextRef:(id)a3 error:(id *)a4;
- (BOOL)authenticateUser:(id)a0 domain:(long long)a1 targetDisk:(id)a2 error:(id *)a3;
- (BOOL)authenticateUser:(id)a0 targetDisk:(id)a1 contextRef:(id)a2 error:(id *)a3;
- (BOOL)authenticateUser:(id)a0 targetDisk:(id)a1 error:(id *)a2;
- (id)checkExistsOTIForUserWithUUID:(id)a0 targetDisk:(id)a1 error:(id *)a2;
- (id)checkExistsUserWithUUID:(id)a0 targetDisk:(id)a1 error:(id *)a2;
- (id)checkOwnershipStatusForTargetDisk:(id)a0 error:(id *)a1;
- (BOOL)createUser:(id)a0 authorizer:(id)a1 error:(id *)a2;
- (BOOL)createUser:(id)a0 error:(id *)a1;
- (BOOL)createUser:(id)a0 recoveryCredential:(id)a1 error:(id *)a2;
- (BOOL)deletePasswordHintForUserWithUUID:(id)a0 error:(id *)a1;
- (BOOL)deleteUserWithUUID:(id)a0 error:(id *)a1;
- (id)fetchPasswordHintForUserWithUUID:(id)a0 error:(id *)a1;
- (id)fetchRecoveryKeysInTargetDisk:(id)a0 error:(id *)a1;
- (id)fetchUIDForUserWithUUID:(id)a0 error:(id *)a1;
- (id)fetchUsersInTargetDisk:(id)a0 error:(id *)a1;
- (BOOL)lockSessionID:(unsigned int)a0 error:(id *)a1;
- (id)lockStateForUserWithUUID:(id)a0 sessionID:(unsigned int)a1 error:(id *)a2;
- (id)lockoutStateForUserWithUUID:(id)a0 domain:(long long)a1 error:(id *)a2;
- (BOOL)loginUser:(id)a0 sessionID:(unsigned int)a1 targetDisk:(id)a2 error:(id *)a3;
- (BOOL)logoutSessionID:(unsigned int)a0 error:(id *)a1;
- (BOOL)removeRecoveryKey:(id)a0 externalDataUUID:(id)a1 error:(id *)a2;
- (BOOL)resetAllPasswords:(id)a0 targetDisk:(id)a1 error:(id *)a2;
- (BOOL)resetPasswordForUser:(id)a0 authorizer:(id)a1 targetDisk:(id)a2 error:(id *)a3;
- (BOOL)resetPasswordForUser:(id)a0 recoveryCredential:(id)a1 error:(id *)a2;
- (BOOL)resetPasswordForUser:(id)a0 recoveryCredential:(id)a1 targetDisk:(id)a2 error:(id *)a3;
- (BOOL)storePasswordHintForUserWithUUID:(id)a0 passwordHint:(id)a1 error:(id *)a2;
- (BOOL)unlockUser:(id)a0 sessionID:(unsigned int)a1 error:(id *)a2;

@end
