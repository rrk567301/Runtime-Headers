@class NSDate;

@interface LUITestUser : LUIUser

@property (retain) NSDate *backOffEndDate;

+ (id)guestUser;

- (id)password;
- (id)initWithAttributes:(id)a0;
- (BOOL)isSuspended;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAdminUser;
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
