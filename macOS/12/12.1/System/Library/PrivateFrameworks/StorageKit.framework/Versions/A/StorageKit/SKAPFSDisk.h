@class NSString;

@interface SKAPFSDisk : SKDisk <SKEncryptedDiskProtocol>

@property (retain) NSString *apfsUUID;
@property (retain) NSString *apfsContainerUUID;
@property unsigned long long reserveSpace;
@property unsigned long long quotaSpace;
@property unsigned long long usedSpace;
@property BOOL isEncrypted;
@property BOOL isConvertingToEncrypted;
@property BOOL isConvertingToDecrypted;
@property BOOL defaultEffaceable;
@property BOOL canBeMountedReadWrite;
@property (retain) NSString *apfsRole;
@property (retain) NSString *apfsVolumeGroupUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)container;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (BOOL)unlockWithPassword:(id)a0;
- (BOOL)matchesDictionary:(id)a0;
- (id)minimalDictionaryRepresentation;
- (BOOL)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 resettingUserPasswords:(id)a4 handlingProgress:(id /* block */)a5 withCompletionBlock:(id /* block */)a6;
- (id)validateEncryptionPassword:(id)a0 forUser:(id)a1;
- (id)unlockWithPassword:(id)a0 forUser:(id)a1;
- (BOOL)_unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1;
- (id)decryptWithPassword:(id)a0 forUser:(id)a1;
- (id)getFDEUsers;
- (id)getFDEUserDictionaries;
- (BOOL)validateEncryptionPassword:(id)a0;
- (BOOL)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (BOOL)establishReserveKEK:(id)a0;
- (BOOL)unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0;
- (BOOL)unlockWithiCloudRecoveryPCSSet:(struct _PCSIdentitySetData { } *)a0;
- (id)decryptWithPassword:(id)a0;
- (BOOL)changeDiskOldPassword:(id)a0 toNewPassword:(id)a1 withHint:(id)a2;
- (id)unwrappediCloudRecoveryKeyForPCSIdentity:(struct _PCSIdentityData { } *)a0 orPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1;
- (BOOL)deleteSnapshots:(id)a0 error:(id *)a1;
- (void)setAPFSVolumeRole:(id)a0;
- (id)getAPFSVolumeRole;
- (BOOL)updatePrebootWithProgress:(id /* block */)a0 withCompletionBlock:(id /* block */)a1;
- (void)removeVolumeWithProgress:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)allSnapshotNames;
- (id)allSnapshotUUIDs;
- (BOOL)createSnapshot:(id)a0 error:(id *)a1;
- (BOOL)renameSnapshot:(id)a0 newName:(id)a1 error:(id *)a2;
- (BOOL)mountSnapshot:(id)a0 mountPoint:(id)a1 resultMountPoint:(id *)a2 error:(id *)a3;
- (BOOL)revertToSnapshot:(id)a0 error:(id *)a1;
- (BOOL)deleteSnapshot:(id)a0 error:(id *)a1;
- (BOOL)rootFromSnapshot:(id)a0 error:(id *)a1;

@end
