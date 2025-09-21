@class LACAKSIdentityHelper, NSString, LACKeyBagMKBAdapter, NSHashTable, LACKeyBagProvider, NSNumber, NSMutableDictionary;

@interface LACPasscodeHelper : NSObject <LACKeyBagObserver> {
    double _lastPasscodeSuccessUptime;
    NSHashTable *_observers;
    LACKeyBagMKBAdapter *_keyBagAdapter;
    LACKeyBagProvider *_keyBagProvider;
    NSNumber *_keyBagDisabled;
    NSMutableDictionary *_backoffEndTimeDictionary;
    NSMutableDictionary *_failedAttemptsDictionary;
    LACAKSIdentityHelper *_aksIdentityHelper;
}

@property (readonly, nonatomic) double passcodeSuccessAge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)newInstance;

- (long long)failedAttemptsForUserID:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)isPasscodeSetForUser:(unsigned int)a0 error:(id *)a1;
- (id)init;
- (id)nonHiddenDeviceOwners;
- (BOOL)accountBlockedForUserID:(id)a0;
- (void)addObserver:(id)a0;
- (long long)maxUnlockAttemptsForUserID:(id)a0;
- (double)backoffTimeIntervalForUserID:(id)a0;
- (long long)createStash:(id)a0 mode:(int)a1 manifest:(id)a2;
- (id)deviceOwners;
- (void).cxx_destruct;
- (void)keybagStateDidChange:(id)a0;
- (void)updatePasscodeSuccessAgeWithUptime:(id)a0;
- (id)_passcodePolicyStatusForUserID:(id)a0;
- (long long)verifyPasscode:(id)a0;
- (id)_currentUserID;
- (void)_increaseFailedAttemptCountForUserID:(id)a0;
- (BOOL)_isOTIVerifierEnabled;
- (unsigned int)_keybagHandleForUserId:(id)a0;
- (void)_notifyObserversAboutUpdate;
- (void)_resetFailedAttemptCountForUserID:(id)a0;
- (BOOL)_shouldUseODVerifierForUserId:(id)a0 policy:(long long)a1 options:(id)a2;
- (BOOL)_shouldUseOTIVerifierForUserUUID:(id)a0 policy:(long long)a1 options:(id)a2;
- (BOOL)_shouldUsePAMVerifierForUserId:(id)a0 policy:(long long)a1 options:(id)a2;
- (void)_updatePasscodeSuccessAgeWithUptime:(id)a0;
- (id)_userNameFromUID:(id)a0;
- (id)_userUUIDFromUID:(id)a0;
- (int)_verifyFvPassword:(id)a0 acmContext:(id)a1 kek:(id)a2 vek:(id)a3 options:(unsigned long long)a4;
- (long long)_verifyPasscode:(id)a0;
- (int)_verifyPasscodeUsingMKB:(id)a0 acmContext:(id)a1 userId:(id)a2 options:(id)a3;
- (BOOL)_verifyPasscodeUsingOD:(id)a0 acmContext:(id)a1 userId:(id)a2 options:(id)a3;
- (long long)_verifyPasscodeUsingOTI:(id)a0 acmContext:(id)a1 userUUID:(id)a2;
- (void)updatePasscodeSuccessAgeWithCurrentSystemUptime;
- (BOOL)verifyFvPassword:(id)a0 acmContext:(id)a1 kek:(id)a2 vek:(id)a3 options:(unsigned long long)a4 error:(id *)a5;
- (long long)verifyPasscode:(id)a0 acmContext:(id)a1 userId:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3;
- (long long)verifyPasscodeUsingPAM:(id)a0 userID:(id)a1 pamService:(id)a2 pamUser:(id)a3 pamToken:(id)a4;

@end
