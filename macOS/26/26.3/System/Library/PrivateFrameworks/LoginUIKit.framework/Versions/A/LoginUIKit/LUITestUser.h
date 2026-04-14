@class NSDate;

@interface LUITestUser : LUIUser

@property (retain) NSDate *backOffEndDate;

+ (id)guestUser;

- (id)password;
- (BOOL)isAdminUser;
- (BOOL)isSuspended;
- (id)init;
- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (long long)authenticate:(id)a0;
- (double)backOffSeconds;
- (BOOL)canLogin;
- (BOOL)canResetPasswordWithAppleID;
- (long long)changePassword:(id)a0 toNewPassword:(id)a1 hint:(id)a2;
- (BOOL)hasComplexPassword;
- (BOOL)hasSACLAccess;
- (BOOL)isLocalUser;
- (BOOL)newPasswordRequired;
- (id)passwordPolicy;

@end
