@class NSObject;
@protocol OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject {
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences { } *_preferencesSession;
    int _applySkipCount;
}

+ (id)sharedInstance;
+ (void)_scheduleSharedInstanceTeardown;
+ (unsigned long long)_timeoutInterval;
+ (void)_tearDown;
+ (id)_livingInstance;

- (void)_destroySCPreferencesSession;
- (void)_createSCPreferencesSession;
- (int)accountsWithAccountTypeIdentifierExist:(id)a0;
- (void *)_getValueForKey:(id)a0;
- (void)dealloc;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)a0;
- (void)setAccountsWithAccountTypeIdentifier:(id)a0 exist:(BOOL)a1;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)a0;
- (void).cxx_destruct;
- (void)setCountOfAccounts:(long long)a0 withAccountTypeIdentifier:(id)a1;
- (void)_setValue:(void *)a0 forKey:(id)a1;
- (id)init;

@end
