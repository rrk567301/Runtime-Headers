@interface LAPasscodeHelper : NSObject

+ (id)sharedInstance;

- (double)backoffTimeIntervalForUserID:(id)a0;
- (id)nonHiddenDeviceOwners;
- (id)deviceOwners;
- (long long)failedAttemptsForUserID:(id)a0;
- (BOOL)isPasscodeSetWithError:(id *)a0;
- (long long)createStash:(id)a0 mode:(int)a1 manifest:(id)a2;
- (BOOL)isPasscodeSetForUser:(unsigned int)a0 error:(id *)a1;
- (long long)maxUnlockAttemptsForUserID:(id)a0;
- (id)dumpStatus;
- (BOOL)accountBlockedForUserID:(id)a0;

@end
