@class NSDate;

@interface LUIFVUnlockUser : LUIUser

@property (retain) NSDate *backOffEndDate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)node;
- (char)isManaged;
- (char)isAdminUser;
- (id)appleIDs;
- (long long)authenticate:(id)a0;
- (id)ODRecord;
- (char)isFileVaultUser;
- (struct __CSIdentity { } *)_identityRef;
- (char)authenticationAllowed;
- (double)backOffSeconds;
- (char)canLogin;
- (char)canModifyPassword;
- (char)canResetPasswordWithAppleID;
- (long long)changePassword:(id)a0 toNewPassword:(id)a1 hint:(id)a2;
- (char)hasComplexPassword;
- (char)hasSACLAccess;
- (char)isContinuityUnlockEnabled;
- (char)isLocalUser;
- (char)isMBSetupUser;
- (char)isMobileHomeUser;
- (char)isNetworkUser;
- (char)isXcodeUser;
- (char)migratedFromWindows;
- (char)minutesUntilPasswordExpires:(unsigned long long *)a0;
- (id)mobileHomeUserNode;
- (char)newPasswordRequired;
- (id)passwordPolicy;
- (unsigned int)primaryGroupID;
- (char)resetSecureTokenWithOldPassphrase:(id)a0 toNewPassphrase:(id)a1;
- (char)setCredentialsWithBootstrapToken:(id)a0;
- (void)setODRecord:(id)a0;
- (char)usesBasicPassword;

@end
