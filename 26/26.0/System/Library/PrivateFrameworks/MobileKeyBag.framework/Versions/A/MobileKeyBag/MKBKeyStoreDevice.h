@interface MKBKeyStoreDevice : NSObject

+ (id)sharedService;

- (int)Event:(int)a0;
- (id)_CreateMKBServerConnection;
- (int)ChangeSystemSecretWithEscrow:(id)a0 FromOldPasscode:(id)a1 ToNew:(id)a2 withOpaqueDats:(id)a3 withKeepState:(int)a4 withACM:(BOOL)a5;
- (int)SetSystemSecretBlob:(id)a0;
- (int)addPersonaKeyForUserSession:(unsigned int)a0 withSecret:(id)a1 secretIsACM:(BOOL)a2 withPersonaUUIDString:(id)a3 forPath:(id)a4;
- (int)backupUUIDForVolume:(id)a0 bagUUID:(id *)a1;
- (int)bindToKEK:(id)a0 secretIsACM:(BOOL)a1 withUID:(unsigned int)a2 withHandle:(int)a3;
- (int)changeClassKeysGenerationWithSecret:(id)a0 withGenerationOption:(int)a1 secretIsACM:(BOOL)a2;
- (int)changeSystemSecretFromOldPasscode:(id)a0 ToNew:(id)a1 withOpaqueData:(id)a2 withParams:(unsigned int)a3;
- (id)copySytemSecretBlob;
- (int)disableBackupForVolume:(id)a0;
- (int)enableBackupForVolume:(id)a0 withSecret:(id)a1 secretIsACM:(BOOL)a2 bagData:(id *)a3;
- (int)forgottenPasscodeEvent;
- (id)getBackupkeyForVolume:(id)a0 andCryptoID:(unsigned long long)a1 withError:(id *)a2;
- (BOOL)getDeviceLockStateForUser:(int)a0 extendedState:(BOOL)a1 withLockStateInfo:(int *)a2;
- (id)getFileHandleForData:(id)a0;
- (id)getLockStateForUser:(int)a0;
- (id)getPolicyStatus:(id)a0 withUUID:(id)a1 withreturnedError:(id *)a2;
- (int)isKeyRollingWithKeyStatus:(int *)a0;
- (int)migrateFS;
- (int)passcodeUnlockFailed;
- (int)passcodeUnlockStart;
- (int)passcodeUnlockSuccess;
- (int)registerOTABackup:(id)a0 withSecret:(id)a1 secretIsACM:(BOOL)a2;
- (int)removePersonaKeyForUserSession:(unsigned int)a0 withPersonaUUIDString:(id)a1 withVolumeUUIDString:(id)a2;
- (int)setUserUUID:(id)a0 secretIsACM:(BOOL)a1 withUID:(unsigned int)a2 withUUID:(id)a3 withHandle:(int)a4;
- (int)startBackupSessionForVolume:(id)a0;
- (int)stashCommit:(unsigned int)a0 WithFlags:(unsigned int)a1;
- (int)stashCreateWithSecret:(id)a0 withMode:(int)a1 withUID:(unsigned int)a2 WithFlags:(unsigned int)a3;
- (int)stashDestroy;
- (int)stashVerifywithValidity:(int *)a0 WithUID:(unsigned int)a1 WithFlags:(unsigned int)a2;
- (int)stopBackupSessionForVolume:(id)a0;

@end
