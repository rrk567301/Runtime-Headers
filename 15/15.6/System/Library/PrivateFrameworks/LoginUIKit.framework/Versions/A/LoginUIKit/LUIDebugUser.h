@interface LUIDebugUser : LUIUser

- (id)init;
- (id)password;
- (char)isSuspended;
- (id)initWithAttributes:(id)a0;
- (long long)authenticate:(id)a0;
- (char)canLogin;
- (char)canResetPasswordWithAppleID;
- (long long)changePassword:(id)a0 toNewPassword:(id)a1 hint:(id)a2;
- (char)hasComplexPassword;
- (char)hasSACLAccess;
- (char)isLocalUser;
- (id)passwordPolicy;

@end
