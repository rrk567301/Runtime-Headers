@interface LACPasscodeMKBHelper : NSObject

- (double)backoffTimeIntervalForUserID:(id)a0;
- (id)_passcodePolicyStatusForUserID:(id)a0;
- (unsigned int)_keybagHandleForUserId:(id)a0;
- (int)_verifyFvPassword:(id)a0 acmContext:(id)a1 kek:(id)a2 vek:(id)a3 options:(unsigned long long)a4;
- (long long)createStash:(id)a0 mode:(int)a1 manifest:(id)a2;
- (long long)failedAttemptsForUserID:(id)a0;
- (long long)maxUnlockAttemptsForUserID:(id)a0;
- (BOOL)verifyFvPassword:(id)a0 acmContext:(id)a1 kek:(id)a2 vek:(id)a3 options:(unsigned long long)a4 error:(id *)a5;
- (long long)verifyPasscodeUsingMKB:(id)a0;

@end
