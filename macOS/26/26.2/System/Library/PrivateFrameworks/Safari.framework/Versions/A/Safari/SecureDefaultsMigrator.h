@class NSArray;

@interface SecureDefaultsMigrator : NSObject {
    id _keyBagObserverToken;
    NSArray *_preferenceKeysToMigrate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_didUnlockKeyBag;
- (void)_tryMigrationAgainIfKeyBagIsUnlocked;
- (void)_unregisterKeyBagObserverIfPossible;
- (id)initWithPreferenceKeysToMigrate:(id)a0;
- (id)keyBagLockStatusManager;
- (long long)migrateSecureDefaultsToUserDefaultsIfNecessary;
- (id)safariSecureDefaults;

@end
