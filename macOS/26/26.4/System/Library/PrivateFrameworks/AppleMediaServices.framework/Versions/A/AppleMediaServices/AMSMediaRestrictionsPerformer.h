@interface AMSMediaRestrictionsPerformer : NSObject {
    void /* unknown type, empty encoding */ manager;
}

+ (id)accountCachedDataForAccount:(id)a0;
+ (void)clearCachedDataUpdateDate;
+ (id)getLastCachedDataUpdateDate;

- (void).cxx_destruct;
- (id)init;
- (id)disableRestrictions;
- (id)editProfileLockWithPasscode:(id)a0;
- (id)editWithRestricitons:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1 urlSessionDelegate:(id)a2;
- (id)initWithAccount:(id)a0 editToken:(id)a1 bag:(id)a2 urlSessionDelegate:(id)a3;
- (id)performSetupWithRestrictions:(id)a0;
- (id)removeProfileLock;
- (id)removeProfileLockWithPasscode:(id)a0;
- (id)setupProfileLockWithPasscode:(id)a0;
- (id)verifyProfileLockWithPasscode:(id)a0;

@end
