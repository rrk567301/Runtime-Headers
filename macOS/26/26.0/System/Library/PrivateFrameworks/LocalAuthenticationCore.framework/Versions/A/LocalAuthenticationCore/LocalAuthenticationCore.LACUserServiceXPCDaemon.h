@interface LocalAuthenticationCore.LACUserServiceXPCDaemon : NSObject <LACUserServiceXPC> {
    void /* unknown type, empty encoding */ controller;
}

- (id)init;
- (void).cxx_destruct;
- (void)changePasswordForUser:(id)a0 to:(id)a1 reply:(id /* block */)a2;
- (void)updateUserRegistryConfig:(id)a0 reply:(id /* block */)a1;
- (void)addRecoveryKey:(id)a0 authorizer:(id)a1 reply:(id /* block */)a2;
- (void)addRecoveryKey:(id)a0 authorizer:(id)a1 targetDisk:(id)a2 reply:(id /* block */)a3;
- (void)addRecoveryKey:(id)a0 authorizerKey:(id)a1 reply:(id /* block */)a2;
- (void)addRecoveryKey:(id)a0 reply:(id /* block */)a1;
- (void)authenticateUser:(id)a0 domain:(long long)a1 targetDisk:(id)a2 contextRef:(id)a3 reply:(id /* block */)a4;
- (void)authenticateUser:(id)a0 domain:(long long)a1 targetDisk:(id)a2 reply:(id /* block */)a3;
- (void)authenticateUser:(id)a0 targetDisk:(id)a1 contextRef:(id)a2 reply:(id /* block */)a3;
- (void)authenticateUser:(id)a0 targetDisk:(id)a1 reply:(id /* block */)a2;
- (void)checkExistsOTIForUserWithUUID:(id)a0 targetDisk:(id)a1 reply:(id /* block */)a2;
- (void)checkExistsUserWithUUID:(id)a0 targetDisk:(id)a1 reply:(id /* block */)a2;
- (void)checkOwnershipStatusForTargetDisk:(id)a0 reply:(id /* block */)a1;
- (void)createUser:(id)a0 authorizer:(id)a1 reply:(id /* block */)a2;
- (void)createUser:(id)a0 recoveryCredential:(id)a1 reply:(id /* block */)a2;
- (void)createUser:(id)a0 reply:(id /* block */)a1;
- (void)deletePasswordHintForUserWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)deleteUserWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)fetchPasswordHintForUserWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)fetchRecoveryKeysInTargetDisk:(id)a0 reply:(id /* block */)a1;
- (void)fetchUIDForUserWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)fetchUsersInTargetDisk:(id)a0 reply:(id /* block */)a1;
- (void)lockSessionID:(unsigned int)a0 reply:(id /* block */)a1;
- (void)lockStateForUserWithUUID:(id)a0 sessionID:(unsigned int)a1 reply:(id /* block */)a2;
- (void)lockoutStateForUserWithUUID:(id)a0 domain:(long long)a1 reply:(id /* block */)a2;
- (void)loginUser:(id)a0 sessionID:(unsigned int)a1 targetDisk:(id)a2 reply:(id /* block */)a3;
- (void)logoutSessionID:(unsigned int)a0 reply:(id /* block */)a1;
- (void)removeRecoveryKey:(id)a0 externalDataUUID:(id)a1 reply:(id /* block */)a2;
- (void)resetAllPasswords:(id)a0 targetDisk:(id)a1 reply:(id /* block */)a2;
- (void)resetPasswordForUser:(id)a0 authorizer:(id)a1 targetDisk:(id)a2 reply:(id /* block */)a3;
- (void)resetPasswordForUser:(id)a0 recoveryCredential:(id)a1 reply:(id /* block */)a2;
- (void)resetPasswordForUser:(id)a0 recoveryCredential:(id)a1 targetDisk:(id)a2 reply:(id /* block */)a3;
- (void)storePasswordHintForUserWithUUID:(id)a0 passwordHint:(id)a1 reply:(id /* block */)a2;
- (void)unlockUser:(id)a0 sessionID:(unsigned int)a1 reply:(id /* block */)a2;

@end
