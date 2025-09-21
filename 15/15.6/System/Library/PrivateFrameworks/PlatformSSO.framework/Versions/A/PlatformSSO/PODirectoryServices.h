@class NSString;

@interface PODirectoryServices : NSObject <POUserIdentifierProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allLocalUsers;
- (id)uidForUserName:(id)a0;
- (id)nextAvailableGroupID;
- (char)isUserPlatformSSOTemporaryUser:(id)a0;
- (char)_addUser:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2 toGroup:(id)a3 groupNodeType:(unsigned int)a4 groupNodeName:(id)a5 returningError:(id *)a6;
- (id)_findODRecordForUserName:(id)a0;
- (id)_findUserNameForIdPUniqueIdentifier:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2;
- (id)_findUserNameForLoginName:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2;
- (char)_removeAllPlatformSSORecords:(id)a0;
- (char)_setGroups:(id)a0 groupNodeType:(unsigned int)a1 groupNodeName:(id)a2 forUser:(id)a3 userNodeType:(unsigned int)a4 userNodeName:(id)a5 returningError:(id *)a6;
- (char)_setLocalAccountPasswordForUser:(id)a0 newPassword:(id)a1 node:(id)a2 error:(id *)a3;
- (char)_updateSearchPolicyToAddPlatformSSO:(char)a0 returningError:(id *)a1;
- (char)addLocalUser:(id)a0 toLocalGroup:(id)a1 returningError:(id *)a2;
- (char)addPlatformSSOToSearchPolicyReturningError:(id *)a0;
- (char)addPlatformSSOUser:(id)a0 toLocalGroup:(id)a1 returningError:(id *)a2;
- (char)addPlatformSSOUser:(id)a0 toPlatformSSOGroup:(id)a1 returningError:(id *)a2;
- (char)addRecord:(id)a0 toGroup:(id)a1 nodeType:(unsigned int)a2 nodeName:(id)a3 returningError:(id *)a4;
- (char)createOrUpdateAdminGroups:(id)a0 otherGroups:(id)a1;
- (char)createPlatformSSOAdminGroupReturningError:(id *)a0;
- (unsigned long long)createTemporaryUser:(id)a0 password:(id)a1 error:(id *)a2;
- (unsigned long long)createUser:(id)a0 password:(id)a1 name:(id)a2 loginUserName:(id)a3 recordUUID:(id)a4 idpIdentifier:(id)a5 returningCreatedUserName:(id *)a6 error:(id *)a7;
- (id)findLocalUserNameForIdPUniqueIdentifier:(id)a0;
- (id)findLocalUserNameForLoginName:(id)a0;
- (id)findPlatformSSOAltSecurityIdentityForUserName:(id)a0;
- (id)findPlatformSSOUserForLoginName:(id)a0;
- (id)findPlatformSSOUserNameForIdPUniqueIdentifier:(id)a0;
- (char)isGroupIDUsedInLocalNodes:(unsigned int)a0;
- (char)isLocalAccountAndNotGuest:(id)a0;
- (char)isLocalUser:(id)a0 memberOfGroup:(id)a1;
- (char)isLoginKeychainUnlocked;
- (char)isPlatformSSOUser:(id)a0 memberOfGroup:(id)a1;
- (char)isUser:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2 memberofGroup:(id)a3 groupNodeType:(unsigned int)a4 groupNodeName:(id)a5 returningError:(id *)a6;
- (void)registerExternalAuthentication:(char)a0 userName:(id)a1;
- (char)removeAllPlatformSSOGroups;
- (char)removeAllPlatformSSOUsers;
- (char)removeLocalUser:(id)a0 fromLocalGroup:(id)a1 returningError:(id *)a2;
- (char)removePlatformSSOAdminGroupReturningError:(id *)a0;
- (char)removePlatformSSOFromSearchPolicyReturningError:(id *)a0;
- (char)removePlatformSSOUser:(id)a0 fromLocalGroup:(id)a1 returningError:(id *)a2;
- (char)removePlatformSSOUser:(id)a0 fromPlatformSSOGroup:(id)a1 returningError:(id *)a2;
- (char)removePlatformSSOUser:(id)a0 returningError:(id *)a1;
- (char)removeRecord:(id)a0 fromGroup:(id)a1 nodeType:(unsigned int)a2 nodeName:(id)a3 returningError:(id *)a4;
- (char)removeUser:(id)a0 userNodeType:(unsigned int)a1 userNodeName:(id)a2 toGroup:(id)a3 groupNodeType:(unsigned int)a4 groupNodeName:(id)a5 returningError:(id *)a6;
- (char)setAltSecurityIdentity:(id)a0 forIdentifier:(id)a1;
- (char)setFullName:(id)a0 forUser:(id)a1;
- (char)setGroups:(id)a0 forLocalUser:(id)a1 returningError:(id *)a2;
- (char)setGroups:(id)a0 forPlatformSSOUser:(id)a1 returningError:(id *)a2;
- (char)setLocalAccountPasswordForUser:(id)a0 newPassword:(id)a1 secureTokenID:(id)a2 secureTokenPassword:(id)a3 error:(id *)a4;
- (char)setLocalAccountPasswordForUser:(id)a0 oldPassword:(id)a1 withNewPassword:(id)a2 error:(id *)a3;
- (char)setLocalAccountPasswordUsingBootstrapTokenForUser:(id)a0 newPassword:(id)a1 bootstrapToken:(id)a2 error:(id *)a3;
- (char)setPasswordHint:(id)a0 forUser:(id)a1;
- (char)setPlatformSSOUniqueIdentifier:(id)a0 forUser:(id)a1;
- (id)shortNameForUserName:(id)a0;
- (id)uniqueIdentifierForUserName:(id)a0;
- (char)verifyLocalAccountPassword:(id)a0 forUser:(id)a1;

@end
