@class LAUserStore;

@interface ODLAUserStore : NSObject {
    LAUserStore *_underlying;
}

+ (id)sharedStore;

- (void)dealloc;
- (BOOL)resetAllPasswords:(id)a0 volume:(id)a1 error:(id *)a2;
- (BOOL)addRecoveryKey:(id)a0 authorizer:(id)a1 error:(id *)a2;
- (BOOL)addRecoveryKey:(id)a0 authorizerKey:(id)a1 error:(id *)a2;
- (BOOL)addRecoveryKey:(id)a0 error:(id *)a1;
- (BOOL)createUser:(id)a0 authorizer:(id)a1 error:(id *)a2;
- (BOOL)createUser:(id)a0 error:(id *)a1;
- (BOOL)createUser:(id)a0 recoveryCredential:(id)a1 error:(id *)a2;
- (BOOL)createUserWithHash:(id)a0 error:(id *)a1;
- (BOOL)createUserWithHash:(id)a0 identityCreationPolicy:(long long)a1 error:(id *)a2;
- (id)fetchRecoveryKeys;
- (id)fetchRecoveryKeysInVolume:(id)a0;
- (id)fetchUserByUUID:(id)a0;
- (id)fetchUserByUUID:(id)a0 inVolume:(id)a1;
- (BOOL)removeRecoveryKeyWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)resetAllPasswords:(id)a0 error:(id *)a1;
- (BOOL)transferOwnershipFrom:(id)a0 toNewRecoveryKey:(id)a1 volume:(id)a2 error:(id *)a3;

@end
