@interface LAPasscodeHelper : NSObject

+ (id)sharedInstance;

- (char)accountBlockedForUserID:(id)a0;
- (double)backoffTimeIntervalForUserID:(id)a0;
- (long long)createStash:(id)a0 mode:(int)a1 manifest:(id)a2;
- (id)deviceOwners;
- (id)dumpStatus;
- (long long)failedAttemptsForUserID:(id)a0;
- (char)isPasscodeSetForUser:(unsigned int)a0 error:(id *)a1;
- (char)isPasscodeSetWithError:(id *)a0;
- (long long)maxUnlockAttemptsForUserID:(id)a0;
- (id)nonHiddenDeviceOwners;
- (char)verifyFvPassword:(id)a0 acmContext:(id)a1 kek:(id)a2 vek:(id)a3 options:(unsigned long long)a4 error:(id *)a5;
- (long long)verifyPasswordUsingAKS:(id)a0 acmContext:(id)a1 userId:(id)a2 policy:(long long)a3 options:(id)a4 bioLockoutRecovery:(char)a5;
- (long long)verifyPasswordUsingPAM:(id)a0 userID:(id)a1 pamService:(id)a2 pamUser:(id)a3 pamToken:(id)a4;

@end
