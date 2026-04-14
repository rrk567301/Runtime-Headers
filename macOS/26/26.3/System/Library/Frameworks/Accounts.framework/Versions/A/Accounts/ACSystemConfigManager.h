@class NSObject;
@protocol OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject {
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences { } *_preferencesSession;
    int _applySkipCount;
}

+ (id)sharedInstance;
+ (void)_tearDown;
+ (unsigned long long)_timeoutInterval;
+ (void)_scheduleSharedInstanceTeardown;
+ (id)_livingInstance;

- (void)_setValue:(void *)a0 forKey:(id)a1;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)a0;
- (void)setCountOfAccounts:(long long)a0 withAccountTypeIdentifier:(id)a1;
- (void)setAccountsWithAccountTypeIdentifier:(id)a0 exist:(BOOL)a1;
- (void)_destroySCPreferencesSession;
- (id)init;
- (void).cxx_destruct;
- (void)_createSCPreferencesSession;
- (void)dealloc;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)a0;
- (int)accountsWithAccountTypeIdentifierExist:(id)a0;
- (void *)_getValueForKey:(id)a0;

@end
