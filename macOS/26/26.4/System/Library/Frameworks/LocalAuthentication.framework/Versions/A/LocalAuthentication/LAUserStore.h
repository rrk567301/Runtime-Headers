@interface LAUserStore : NSObject {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ disk;
}

@property (class, nonatomic, readonly) LAUserStore *sharedStore;

+ (id)makeUserStoreWithDatabase:(id)a0 disk:(id)a1 registryConfig:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)init;
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
- (id)checkOwnershipInVolume:(id)a0 error:(id *)a1;
- (id)fetchUsersInVolume:(id)a0;
- (BOOL)transferOwnershipFrom:(id)a0 toExistingUser:(id)a1 volume:(id)a2 error:(id *)a3;
- (BOOL)addRecoveryKey:(id)a0 authorizer:(id)a1 volume:(id)a2 error:(id *)a3;
- (BOOL)createUser:(id)a0 identityCreationPolicy:(long long)a1 error:(id *)a2;
- (BOOL)createUser:(id)a0 recoveryCredential:(id)a1 volume:(id)a2 error:(id *)a3;
- (BOOL)deleteUserWithUUID:(id)a0 error:(id *)a1;
- (id)fetchRecoveryKeysInTargetDisk:(id)a0;
- (id)fetchUserBy:(id)a0 inTargetDisk:(id)a1;
- (id)fetchUsers;
- (id)fetchUsersInTargetDisk:(id)a0;
- (id)initWithController:(id)a0 database:(id)a1 disk:(id)a2;

@end
