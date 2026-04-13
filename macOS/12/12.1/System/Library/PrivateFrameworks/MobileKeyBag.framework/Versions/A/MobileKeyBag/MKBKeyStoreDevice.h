@interface MKBKeyStoreDevice : NSObject

+ (id)sharedService;

- (BOOL)getDeviceLockStateForUser:(int)a0 extendedState:(BOOL)a1 withLockStateInfo:(int *)a2;
- (id)getPolicyStatus:(id)a0 withUUID:(id)a1 withreturnedError:(id *)a2;
- (int)stashCreateWithSecret:(id)a0 withMode:(int)a1 withUID:(unsigned int)a2 WithFlags:(unsigned int)a3;
- (int)setUserUUID:(id)a0 withUID:(unsigned int)a1 withUUID:(id)a2 withHandle:(int)a3;
- (int)bindToKEK:(id)a0 withUID:(unsigned int)a1 withHandle:(int)a2;
- (int)stashCommit:(unsigned int)a0 WithFlags:(unsigned int)a1;
- (int)stashDestroy;
- (int)stashVerifywithValidity:(int *)a0 WithUID:(unsigned int)a1 WithFlags:(unsigned int)a2;
- (int)changeSystemSecretFromOldPasscode:(id)a0 ToNew:(id)a1 withOpaqueData:(id)a2;
- (id)copySytemSecretBlob;
- (id)listAllUserSessionIDSWithReturnedError:(id *)a0;
- (id)loadUserSession:(id)a0 withSecret:(id)a1 withreturnedError:(id *)a2;
- (BOOL)unloadUserSession:(id)a0 withreturnedError:(id *)a1;
- (id)createUserSession:(id)a0 withSecret:(id)a1 withOpaqueData:(id)a2 withreturnedError:(id *)a3;
- (id)migrateUserSession:(id)a0 fromPath:(id)a1 withSecret:(id)a2 withOpaqueData:(id)a3 withreturnedError:(id *)a4;
- (BOOL)removeUserSession:(id)a0 withreturnedError:(id *)a1;
- (BOOL)fetchReplacementVoucherPort:(unsigned int)a0 foraccountID:(id)a1 withTargetPort:(unsigned int *)a2 generationSet:(BOOL)a3 withreturnedError:(id *)a4;
- (int)Event:(int)a0;
- (id)_CreateMKBServerConnection;
- (id)getFileHandleForData:(id)a0;
- (int)changeClassKeysGenerationWithSecret:(id)a0 withGenerationOption:(int)a1;
- (id)getBackupkeyForVolume:(id)a0 andCryptoID:(unsigned long long)a1 withreturnValue:(int *)a2;
- (int)ChangeSystemSecretWithEscrow:(id)a0 FromOldPasscode:(id)a1 ToNew:(id)a2 withOpaqueDats:(id)a3 withKeepState:(int)a4;
- (int)registerOTABackup:(id)a0 withSecret:(id)a1;
- (int)startBackupSessionForVolume:(id)a0;
- (int)stopBackupSessionForVolume:(id)a0;
- (int)enableBackupForVolume:(id)a0 withSecret:(id)a1 bagData:(id *)a2;
- (int)disableBackupForVolume:(id)a0;
- (int)backupUUIDForVolume:(id)a0 bagUUID:(id *)a1;
- (int)passcodeUnlockStart;
- (int)passcodeUnlockSuccess;
- (int)passcodeUnlockFailed;
- (id)getLockStateForUser:(int)a0;
- (int)isKeyRollingWithKeyStatus:(int *)a0;
- (int)migrateFS;

@end
