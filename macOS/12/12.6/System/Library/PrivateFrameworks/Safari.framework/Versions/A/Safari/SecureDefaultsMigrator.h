@class NSArray;

@interface SecureDefaultsMigrator : NSObject {
    id _keyBagObserverToken;
    NSArray *_preferenceKeysToMigrate;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPreferenceKeysToMigrate:(id)a0;
- (long long)migrateSecureDefaultsToUserDefaultsIfNecessary;
- (void)_unregisterKeyBagObserverIfPossible;
- (id)safariSecureDefaults;
- (void)_tryMigrationAgainIfKeyBagIsUnlocked;
- (id)keyBagLockStatusManager;
- (void)_didUnlockKeyBag;

@end
