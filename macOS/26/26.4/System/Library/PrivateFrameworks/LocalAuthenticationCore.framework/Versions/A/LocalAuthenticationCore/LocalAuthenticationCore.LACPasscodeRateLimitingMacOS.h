@interface LocalAuthenticationCore.LACPasscodeRateLimitingMacOS : NSObject <LACPasscodeRateLimiting> {
    void /* unknown type, empty encoding */ isSecureBootCapable;
    void /* unknown type, empty encoding */ mkbHelper;
    void /* unknown type, empty encoding */ backoffEndTimeDictionary;
    void /* unknown type, empty encoding */ failedAttemptsDictionary;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)accountBlockedForUserID:(id)a0;
- (double)backoffTimeIntervalForUserID:(id)a0;
- (void)increaseFailedAttemptCountForUserID:(id)a0;
- (void)resetFailedAttemptCountForUserID:(id)a0;

@end
