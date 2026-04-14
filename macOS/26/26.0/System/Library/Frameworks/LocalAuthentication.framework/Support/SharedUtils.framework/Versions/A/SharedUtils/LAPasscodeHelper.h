@interface LAPasscodeHelper : NSObject

+ (id)sharedInstance;

- (BOOL)isPasscodeSetWithError:(id *)a0;
- (long long)failedAttemptsForUserID:(id)a0;
- (BOOL)isPasscodeSetForUser:(unsigned int)a0 error:(id *)a1;
- (id)nonHiddenDeviceOwners;
- (id)dumpStatus;
- (BOOL)accountBlockedForUserID:(id)a0;
- (long long)maxUnlockAttemptsForUserID:(id)a0;
- (double)backoffTimeIntervalForUserID:(id)a0;
- (long long)createStash:(id)a0 mode:(int)a1 manifest:(id)a2;
- (id)deviceOwners;

@end
