@class NSString;

@interface SKAPFSDisk : SKDisk <SKEncryptedDiskProtocol>

@property unsigned long long reserveSpace;
@property unsigned long long quotaSpace;
@property unsigned long long usedSpace;
@property char isEncrypted;
@property char defaultEffaceable;
@property (retain) NSString *apfsRole;
@property (retain) NSString *apfsVolumeGroupUUID;
@property (readonly) char hasVolumeSiblings;
@property char isConvertingToEncrypted;
@property char isConvertingToDecrypted;
@property char canBeMountedReadWrite;
@property (readonly) NSString *apfsUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)container;
- (id)dictionaryRepresentation;
- (void)updateWithDictionary:(id)a0;
- (id)getAPFSVolumeRole;
- (char)createSnapshot:(id)a0 error:(id *)a1;
- (char)unlockWithiCloudRecoveryPCSSet:(struct _PCSIdentitySetData { } *)a0;
- (id)minimalDictionaryRepresentation;
- (char)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (char)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 resettingUserPasswords:(id)a4 handlingProgress:(id /* block */)a5 withCompletionBlock:(id /* block */)a6;
- (char)_unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1;
- (id)allSnapshotNames;
- (id)allSnapshotUUIDs;
- (char)changeDiskOldPassword:(id)a0 toNewPassword:(id)a1 withHint:(id)a2;
- (id)decryptWithPassword:(id)a0;
- (id)decryptWithPassword:(id)a0 forUser:(id)a1;
- (char)deleteSnapshot:(id)a0 error:(id *)a1;
- (char)deleteSnapshots:(id)a0 error:(id *)a1;
- (char)establishReserveKEK:(id)a0;
- (id)getFDEUserDictionaries;
- (id)getFDEUsers;
- (char)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (char)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (char)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (char)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (id)innerDescriptionWithPrivateData:(char)a0;
- (char)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (char)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (char)matchesDictionary:(id)a0;
- (char)mountSnapshot:(id)a0 mountPoint:(id)a1 resultMountPoint:(id *)a2 error:(id *)a3;
- (void)removeVolumeWithProgress:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (char)renameSnapshot:(id)a0 newName:(id)a1 error:(id *)a2;
- (char)revertToSnapshot:(id)a0 error:(id *)a1;
- (char)rootFromSnapshot:(id)a0 error:(id *)a1;
- (void)setAPFSVolumeRole:(id)a0;
- (id)unlockWithPassword:(id)a0 forUser:(id)a1;
- (char)unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0;
- (id)unwrappediCloudRecoveryKeyForPCSIdentity:(struct _PCSIdentityData { } *)a0 orPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1;
- (char)updatePrebootWithProgress:(id /* block */)a0 withCompletionBlock:(id /* block */)a1;
- (char)validateEncryptionPassword:(id)a0;
- (id)validateEncryptionPassword:(id)a0 forUser:(id)a1;
- (id)wholeDiskIdentifier;

@end
