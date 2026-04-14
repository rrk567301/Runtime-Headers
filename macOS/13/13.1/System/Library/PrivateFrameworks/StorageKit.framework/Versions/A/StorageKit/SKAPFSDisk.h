@class NSString;

@interface SKAPFSDisk : SKDisk <SKEncryptedDiskProtocol>

@property unsigned long long reserveSpace;
@property unsigned long long quotaSpace;
@property unsigned long long usedSpace;
@property BOOL isEncrypted;
@property BOOL defaultEffaceable;
@property (retain) NSString *apfsRole;
@property (retain) NSString *apfsVolumeGroupUUID;
@property BOOL isConvertingToEncrypted;
@property BOOL isConvertingToDecrypted;
@property BOOL canBeMountedReadWrite;
@property (readonly) NSString *apfsUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)container;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (BOOL)unlockWithPassword:(id)a0;
- (BOOL)createSnapshot:(id)a0 error:(id *)a1;
- (id)innerDescription;
- (id)getFDEUsers;
- (id)getFDEUserDictionaries;
- (BOOL)validateEncryptionPassword:(id)a0;
- (id)validateEncryptionPassword:(id)a0 forUser:(id)a1;
- (BOOL)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)establishReserveKEK:(id)a0;
- (id)unlockWithPassword:(id)a0 forUser:(id)a1;
- (BOOL)unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0;
- (BOOL)unlockWithiCloudRecoveryPCSSet:(struct _PCSIdentitySetData { } *)a0;
- (id)decryptWithPassword:(id)a0;
- (id)decryptWithPassword:(id)a0 forUser:(id)a1;
- (BOOL)changeDiskOldPassword:(id)a0 toNewPassword:(id)a1 withHint:(id)a2;
- (BOOL)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 resettingUserPasswords:(id)a4 handlingProgress:(id /* block */)a5 withCompletionBlock:(id /* block */)a6;
- (BOOL)_unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1;
- (id)getAPFSVolumeRole;
- (id)allSnapshotNames;
- (id)allSnapshotUUIDs;
- (BOOL)updatePrebootWithProgress:(id /* block */)a0 withCompletionBlock:(id /* block */)a1;
- (void)removeVolumeWithProgress:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)setAPFSVolumeRole:(id)a0;
- (BOOL)renameSnapshot:(id)a0 newName:(id)a1 error:(id *)a2;
- (BOOL)mountSnapshot:(id)a0 mountPoint:(id)a1 resultMountPoint:(id *)a2 error:(id *)a3;
- (BOOL)revertToSnapshot:(id)a0 error:(id *)a1;
- (BOOL)deleteSnapshot:(id)a0 error:(id *)a1;
- (BOOL)deleteSnapshots:(id)a0 error:(id *)a1;
- (BOOL)rootFromSnapshot:(id)a0 error:(id *)a1;
- (id)unwrappediCloudRecoveryKeyForPCSIdentity:(struct _PCSIdentityData { } *)a0 orPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1;

@end
