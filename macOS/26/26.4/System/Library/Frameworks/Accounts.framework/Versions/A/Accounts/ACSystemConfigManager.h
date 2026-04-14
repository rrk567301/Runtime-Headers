@class NSObject;
@protocol OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject {
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences { } *_preferencesSession;
    int _applySkipCount;
}

+ (id)sharedInstance;
+ (id)_livingInstance;
+ (void)_tearDown;
+ (void)_scheduleSharedInstanceTeardown;
+ (unsigned long long)_timeoutInterval;

- (void)_setValue:(void *)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void *)_getValueForKey:(id)a0;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)a0;
- (void)_destroySCPreferencesSession;
- (id)init;
- (int)accountsWithAccountTypeIdentifierExist:(id)a0;
- (void)_createSCPreferencesSession;
- (void)setAccountsWithAccountTypeIdentifier:(id)a0 exist:(BOOL)a1;
- (void)dealloc;
- (void)setCountOfAccounts:(long long)a0 withAccountTypeIdentifier:(id)a1;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)a0;

@end
