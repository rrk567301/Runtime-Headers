@interface LAPasscodeHelper : NSObject

+ (id)sharedInstance;

- (BOOL)isPasscodeSetForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)isPasscodeSetWithError:(id *)a0;
- (double)backoffTimeIntervalForUserID:(id)a0;
- (id)deviceOwners;
- (long long)createStash:(id)a0 mode:(int)a1 manifest:(id)a2;
- (BOOL)accountBlockedForUserID:(id)a0;
- (long long)failedAttemptsForUserID:(id)a0;
- (id)nonHiddenDeviceOwners;
- (long long)maxUnlockAttemptsForUserID:(id)a0;
- (id)dumpStatus;

@end
