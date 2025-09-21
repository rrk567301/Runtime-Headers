@class NSString;

@interface SKCSDisk : SKDisk <SKEncryptedDiskProtocol>

@property (retain) NSString *csDiskUUID;
@property (retain) NSString *csLVGUUID;
@property (retain) NSString *csFamilyUUID;
@property char isEncrypted;
@property char isConverting;
@property char isDisallowedForCSOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (char)unlockWithiCloudRecoveryPCSSet:(struct _PCSIdentitySetData { } *)a0;
- (id)minimalDictionaryRepresentation;
- (char)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (char)_iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1 addingUsers:(id)a2 removingUsers:(id)a3 resettingUserPasswords:(id)a4 handlingProgress:(id /* block */)a5 withCompletionBlock:(id /* block */)a6;
- (char)_unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0 withPCSIdentitySet:(struct _PCSIdentitySetData { } *)a1;
- (char)canResize;
- (char)changeDiskOldPassword:(id)a0 toNewPassword:(id)a1 withHint:(id)a2;
- (id)copyRootEncyrptionContext;
- (id)decryptWithPassword:(id)a0;
- (id)decryptWithPassword:(id)a0 forUser:(id)a1;
- (char)establishReserveKEK:(id)a0;
- (id)getFDEUserDictionaries;
- (id)getFDEUsers;
- (char)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (char)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (char)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (char)iCloudRecoveryManageFDEUsersWithPCSIdentitySet:(struct _PCSIdentitySetData { } *)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (id)innerDescriptionWithPrivateData:(char)a0;
- (char)isVirtualDiskType;
- (char)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 handlingProgress:(id /* block */)a3 withCompletionBlock:(id /* block */)a4;
- (char)manageFDEUsersWithPassword:(id)a0 addingUsers:(id)a1 removingUsers:(id)a2 resettingUserPasswords:(id)a3 handlingProgress:(id /* block */)a4 withCompletionBlock:(id /* block */)a5;
- (char)matchesDictionary:(id)a0;
- (id)supportedFilesystems;
- (id)unlockWithPassword:(id)a0 forUser:(id)a1;
- (char)unlockWithiCloudRecovery:(struct _PCSIdentityData { } *)a0;
- (char)validateEncryptionPassword:(id)a0;
- (id)validateEncryptionPassword:(id)a0 forUser:(id)a1;

@end
